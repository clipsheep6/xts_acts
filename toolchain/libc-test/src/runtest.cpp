#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <ctime>
#include <cstdio>
#include <vector>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <unistd.h>
#include <dirent.h>

#include "runtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class ActToolChainTest : public testing::Test {};

volatile int t_status = 0;

static void handler(int s)
{
}

static int start(char *wrap, const char *argvs)
{
    int pid;

    pid = fork();
    if (pid == 0) {
        t_setrlim(RLIMIT_STACK, 100*1024);
        int exe = execl(argvs, "strptime", nullptr);
        printf("exe:%d %s exec failed: %s\n", exe, argvs, strerror(errno));
        exit(1);
    }
    return pid;
}

static int runtests(const char *argvs)
{
    char wrap[] = "";
    int timeoutsec = 5;
    int timeout = 0;
    int status;
    sigset_t set;
    int pid;

    sigemptyset(&set);
    sigaddset(&set, SIGCHLD);
    sigprocmask(SIG_BLOCK, &set, 0);
    signal(SIGCHLD, handler);
    pid = start(wrap, argvs);
    if (pid == -1) {
        printf("%s fork failed: %s\n", argvs, strerror(errno));
        printf("FAIL %s [internal]\n", argvs);
        return -1;
    }
    struct timespec tp;
    tp.tv_sec = timeoutsec;
    tp.tv_nsec = 0;
    if (sigtimedwait(&set, 0, &tp) == -1) {
        if (errno == EAGAIN) {
            timeout = 1;
        } else {
            printf("%s sigtimedwait failed: %s\n", argvs, strerror(errno));
        }
        if (kill(pid, SIGKILL) == -1) {
            printf("%s kill failed: %s\n", argvs, strerror(errno));
        }
    }
    if (waitpid(pid, &status, 0) != pid) {
        printf("%s waitpid failed: %s\n", argvs, strerror(errno));
        printf("FAIL %s [internal]\n", argvs);
        return -1;
    }
    if (WIFEXITED(status)) {
        if (WEXITSTATUS(status) == 0) {
            return t_status;
        }
        printf("FAIL %s [status %d]\n", argvs, WEXITSTATUS(status));
    } else if (timeout) {
        printf("FAIL %s [timed out]\n", argvs);
    } else if (WIFSIGNALED(status)) {
        printf("FAIL %s [signal %s]\n", argvs, strsignal(WTERMSIG(status)));
    } else {
        printf("FAIL %s [unknown]\n", argvs);
    }
    return 1;
}

/**
 * @tc.name      : ActToolChainTest.RunTest
 * @tc.desc      : start test
 * @tc.level     : Level 2
 */
HWTEST_F(ActToolChainTest, LibcTest, Function | MediumTest | Level2)
{
    int ret;
    vector<string> temp;
    GetFileNames("/data/local/tmp/libc-test/src", temp);
    for (size_t i = 0; i < temp.size(); i++) {
        // out << "testcase: " << temp[i] << endl;
        ret = runtests(temp[i].c_str());
        EXPECT_EQ(0, ret) << "test  " << temp[i]  << "  failed" << endl;
    }
}
