#include "napi/native_api.h"
#include <algorithm>
#include <unordered_map>
#include <stdio.h>
#include <stdint.h>
#include "hilog/log.h"
#include <unistd.h>
#include <thread>
#include <signal.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/wait.h>

#undef LOG_DOMAIN
#undef LOG_TAG
#define LOG_DOMAIN 0x3200
#define LOG_TAG "FDSAN"

// Functional test
// File struct with FDSAN
struct unique_fd {
    unique_fd() = default;

    explicit unique_fd(int fd)
    {
        reset(fd);
    }

    unique_fd(const unique_fd& copy) = delete;
    unique_fd(unique_fd&& move)
    {
        *this = std::move(move);
    }

    ~unique_fd()
    {
        reset();
    }

    unique_fd& operator=(const unique_fd& copy) = delete;
    unique_fd& operator=(unique_fd&& move)
    {
        if (this == &move) {
            return *this;
        }
        reset();
        if (move.fd_ != -1) {
            fd_ = move.fd_;
            move.fd_ = -1;
            // Acquire ownership from the moved-from object.
            exchange_tag(fd_, move.tag(), tag());
        }
        return *this;
    }

    int get()
    {
        return fd_;
    }

    void reset(int new_fd = -1)
    {
        if (fd_ != -1) {
            close(fd_, tag());
            fd_ = -1;
        }
        if (new_fd != -1) {
            fd_ = new_fd;
            // Acquire ownership of the presumably unowned fd.
            exchange_tag(fd_, 0, tag());
        }
    }

  private:
    int fd_ = -1;

    // Use the address of object as the file tag
    uint64_t tag()
    {
        return reinterpret_cast<uint64_t>(this);
    }

    static void exchange_tag(int fd, uint64_t old_tag, uint64_t new_tag)
    {
        if (&fdsan_exchange_owner_tag) {
            fdsan_exchange_owner_tag(fd, old_tag, new_tag);
        }
    }

    static int close(int fd, uint64_t tag)
    {
        if (&fdsan_close_with_tag) {
            return fdsan_close_with_tag(fd, tag);
        }
    }
};
// End File struct with FDSAN

void good_write()
{
    sleep(1);
    int fd = dup(STDOUT_FILENO);
    sleep(3);
    ssize_t ret = write(fd, "fdsan test\n", 11);
    if (ret == -1) {
        OH_LOG_ERROR(LOG_APP, "good write but failed?!");
    }
    close(fd);
}

void bad_close()
{
    unique_fd fd(dup(STDOUT_FILENO));
    close(fd.get());
    sleep(2);
    // This close expected to be detect by fdsan
    close(fd.get());
}

void functional_test()
{
    std::vector<std::thread> threads;
    for (auto function : { good_write, bad_close }) {
        threads.emplace_back(function);
    }
    for (auto& thread : threads) {
        thread.join();
    }
}
// End Functional test

// UnitTest; Functions to be test:
// fdsan_create_owner_tag;
// fdsan_close_with_tag;
// fdsan_exchange_owner_tag;
// fdsan_get_error_level;
// fdsan_get_fd_table;
// fdsan_get_owner_tag;
// fdsan_get_tag_type;
// fdsan_get_tag_value;
// fdsan_set_error_level;

void abort_handler(int)
{
    kill(getpid(), SIGSTOP);
}

void install_abort_hander()
{
    struct sigaction sigaction_abort = {
        .sa_handler = abort_handler,
        .sa_flags = 0,
    };
    sigaction(SIGABRT, &sigaction_abort, NULL);
}

#define EXPECT_EQ(A, B)   \
    do {                  \
        if (A != B) {     \
            abort();      \
        }                 \
    } while(0)

#define EXPECT_TEST_FAIL(fn)                                  \
    do {                                                      \
        pid_t pid = fork();                                   \
        if (pid == 0) {                                       \
            install_abort_hander();                           \
            fdsan_set_error_level(FDSAN_ERROR_LEVEL_FATAL);   \
            fn;                                               \
            _exit(0);                                         \
        }                                                     \
        int status;                                           \
        waitpid(pid, &status, WUNTRACED);                     \
        EXPECT_EQ(WIFEXITED(status), 0);                      \
        EXPECT_EQ(WIFSTOPPED(status), 1);                     \
        EXPECT_EQ(WSTOPSIG(status), SIGSTOP);                 \
        OH_LOG_ERROR(LOG_APP, "FDSAN parent process end\n");  \
    } while (0)

// Testcases
static void test_unowned_file_close()
{
    int fd = open("/dev/null", O_RDONLY);
    close(fd);
}

static void test_unowned_file_fdsan_close()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_close_with_tag(fd, 0);
}

static void test_owned_file_close()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_exchange_owner_tag(fd, 0, 0xdeadbeef);
    fdsan_close_with_tag(fd, 0xdeadbeef);
}

static void test_overflow()
{
    std::unordered_map<int, uint64_t> fds;
    int num = 4096;
    for (int i = 0; i < num; ++i) {
        int fd = open("/dev/null", O_RDONLY);
        uint64_t tag = 0xdead00000000ULL | i;
        fdsan_exchange_owner_tag(fd, 0, tag);
        fds[fd] = tag;
    }

    for (auto [fd, tag] : fds) {
        fdsan_close_with_tag(fd, tag);
    }
}

// Testcases expected to dead
static void test_unowned_file_fdsan_bad_close()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_close_with_tag(fd, 0xdeadbeef);
}

static void test_unowned_file_fdsan_bad_change()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_exchange_owner_tag(fd, 0xbadc0de, 0xdeadbeef);
}

static void test_owned_file_bad_close()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_exchange_owner_tag(fd, 0, 0xdeadbeef);
    close(fd);
}

static void test_owned_file_bad_fdsan_close()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_exchange_owner_tag(fd, 0, 0xdeadbeef);
    fdsan_close_with_tag(fd, 0xdeadc0de);
}

static void test_owned_file_bad_fdsan_exchange()
{
    int fd = open("/dev/null", O_RDONLY);
    fdsan_exchange_owner_tag(fd, 0, 0xdeadbeef);
    fdsan_exchange_owner_tag(fd, 0xbadc0de, 0xdeadbeef);
}

static void test_fopen()
{
    FILE* f = fopen("/dev/null", "r");
    OH_LOG_ERROR(LOG_APP, "FDSAN gzh test fopen fd: %{public}d\n", fileno(f));
    close(fileno(f));
}

static void test_opendir()
{
    DIR *dir = opendir("/dev/ubsan");
    OH_LOG_ERROR(LOG_APP, "FDSAN gzh test opendir fd: %{public}d\n", dirfd(dir));
    close(dirfd(dir));
}

static void test_fdopen()
{
    int fd = open("/dev/null", O_RDONLY);
    FILE *f = fdopen(fd, "r");
    OH_LOG_ERROR(LOG_APP, "FDSAN gzh test fdopen fd: %{public}d\n", fileno(f));
    close(fileno(f));
}

static void test_fdopendir()
{
    int fd = open("/dev/ubsan", O_RDONLY);
    DIR *dir = fdopendir(fd);
    OH_LOG_ERROR(LOG_APP, "FDSAN gzh test fdopendir fd: %{public}d\n", dirfd(dir));
    close(dirfd(dir));
}

static void test_owner_value_high()
{
    int fd = open("/dev/null", O_RDONLY);
    uint64_t tag = fdsan_create_owner_tag(FDSAN_OWNER_TYPE_UNIQUE_FD, ~0ULL);
    fdsan_exchange_owner_tag(fd, 0, tag);
    fdsan_exchange_owner_tag(fd, 0xbadc0de, 0xdeadbeef);
}

static void test_owner_value_low()
{
    int fd = open("/dev/null", O_RDONLY);
    uint64_t tag = fdsan_create_owner_tag(FDSAN_OWNER_TYPE_UNIQUE_FD, 1);
    fdsan_exchange_owner_tag(fd, 0, tag);
    fdsan_exchange_owner_tag(fd, 0xbadc0de, 0xdeadbeef);
}
// End Testcases

// All Test Entry
static napi_value test_entry(napi_env env, napi_callback_info info)
{
    test_unowned_file_close();
    test_unowned_file_fdsan_close();
    test_owned_file_close();
    test_overflow();

    EXPECT_TEST_FAIL(functional_test());
    EXPECT_TEST_FAIL(test_unowned_file_fdsan_bad_close());
    EXPECT_TEST_FAIL(test_unowned_file_fdsan_bad_change());
    EXPECT_TEST_FAIL(test_owned_file_bad_close());
    EXPECT_TEST_FAIL(test_owned_file_bad_fdsan_close());

    EXPECT_TEST_FAIL(test_owned_file_bad_fdsan_exchange());
    EXPECT_TEST_FAIL(test_fopen());
    EXPECT_TEST_FAIL(test_opendir());
    EXPECT_TEST_FAIL(test_owner_value_high());
    EXPECT_TEST_FAIL(test_owner_value_low());
    EXPECT_TEST_FAIL(test_fdopen());
    EXPECT_TEST_FAIL(test_fdopendir());

    napi_value ret;
    napi_create_double(env, 0, &ret);
    return ret;
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "test_entry", nullptr, test_entry, nullptr, nullptr, nullptr, napi_default, nullptr }
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version =1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    // 模块对外接口注册函数
    .nm_register_func = Init,
    // 自定义模块
    .nm_modname = "entry",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterEntryModule(void)
{
    napi_module_register(&demoModule);
}