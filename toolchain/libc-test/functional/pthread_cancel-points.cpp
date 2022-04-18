
#include <cerrno>
#include <cstring>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/mman.h>

#include "gtest/gtest.h"

#define TESTC(c, m) do { \
    EXPECT_TRUE((c)) << #c << " failed (" << cdescr << ", " << m << ")" << endl;\
} while(0)

#define TESTR(f, m) do {                                                                                         \
    int r;                                                                                                       \
    EXPECT_FALSE(r = (f)) << #f << " failed: " << strerror(errno) << " (" << cdescr << ", " << m << ")" << endl; \
} while (0)

#define TESTE(f, m) do { \
    EXPECT_FALSE(((f) == -1)) << #f << " failed: " \
        << strerror(errno) << " (" << cdescr << ", " << m << ")" << endl;\
} while(0)


using namespace std;
using namespace testing::ext;
class PthreadCancelPoints : public testing::Test {};

static sem_t sem_seq, sem_test;

static int seqno;

static const char *cdescr = "global initialization";

static void prepare_sem(void *arg)
{
    TESTR(sem_init(&sem_test, 0, (long)arg), "creating semaphore");
}

static void cleanup_sem(void *arg)
{
    TESTR(sem_destroy(&sem_test), "destroying semaphore");
}

static void execute_sem_wait(void *arg)
{
    TESTR(sem_wait(&sem_test), "waiting on semaphore in the canceled thread");
}

static void execute_sem_timedwait(void *arg)
{
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_sec += 1;
    TESTR(sem_timedwait(&sem_test, &ts), "timed-waiting on semaphore in the canceled thread");
}

static pthread_t td_test;

static void *run_test(void *arg)
{
    while (sem_wait(&sem_test));
    return nullptr;
}

static void prepare_thread(void *arg)
{
    prepare_sem(arg);
    TESTR(pthread_create(&td_test, 0, run_test, 0), "creating auxiliary thread");
}

static void cleanup_thread(void *arg)
{
    void *res;
    if (td_test) {
        TESTR(sem_post(&sem_test), "posting semaphore");
        TESTR(pthread_join(td_test, &res), "joining auxiliary thread");
        TESTC(res == 0, "auxiliary thread exit status");
    }
    cleanup_sem(arg);
}

static void execute_thread_join(void *arg)
{
    TESTR(pthread_join(td_test, 0), "joining in the canceled thread");
    td_test = 0;
}

static void prepare_dummy(void *arg)
{
}

static void execute_shm_open(void *arg)
{
    int *fd = (int *)arg;
    TESTE(*fd = shm_open("/testshm", O_RDWR | O_CREAT, 0666), "");
}

static void cleanup_shm(void *arg)
{
    int *fd = (int *)arg;
    if (*fd > 0) {
        TESTE(close(*fd), "shm fd");
        TESTE(shm_unlink("/testshm"), "");
    }
}

static int tmp = (int){0};
static struct {
    int want_cancel;
    void (*prepare)(void *);
    void (*execute)(void *);
    void (*cleanup)(void *);
    void *arg;
    const char *descr;
} scenarios[] = {
    {1, prepare_sem, execute_sem_wait, cleanup_sem, nullptr, "blocking sem_wait"},
    {1, prepare_sem, execute_sem_wait, cleanup_sem, (void *)1, "non-blocking sem_wait"},
    {1, prepare_sem, execute_sem_timedwait, cleanup_sem, nullptr, "blocking sem_timedwait"},
    {1, prepare_sem, execute_sem_timedwait, cleanup_sem, (void *)1, "non-blocking sem_timedwait"},
    {1, prepare_thread, execute_thread_join, cleanup_thread, nullptr, "blocking pthread_join"},
    {1, prepare_thread, execute_thread_join, cleanup_thread, (void *)1, "non-blocking pthread_join"},
    {0, prepare_dummy, execute_shm_open, cleanup_shm, &tmp, "shm_open"},
    {0}},
  *cur_sc = scenarios;

static void *run_execute(void *arg)
{
    pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, nullptr);
    while (sem_wait(&sem_seq));
    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, nullptr);
    seqno = 1;
    cur_sc->execute(cur_sc->arg);
    seqno = 2;
    return nullptr;
}

/**
 * @tc.name      : PthreadCancelPointsTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadCancelPoints, PthreadCancelPointsTest, Function | MediumTest | Level2)
{
    TESTR(sem_init(&sem_seq, 0, 0), "creating semaphore");

    for (; cur_sc->prepare; cur_sc++) {
        pthread_t td;
        void *res;

        cdescr = cur_sc->descr;
        cur_sc->prepare(cur_sc->arg);
        seqno = 0;
        TESTR(pthread_create(&td, nullptr, run_execute, nullptr), "creating thread to be canceled");
        TESTR(pthread_cancel(td), "canceling");
        TESTR(sem_post(&sem_seq), "unblocking canceled thread");
        TESTR(pthread_join(td, &res), "joining canceled thread");
        if (cur_sc->want_cancel) {
            TESTC(res == PTHREAD_CANCELED, "canceled thread exit status");
            TESTC(seqno == 1, "seqno");
        }
        else {
            TESTC(res != PTHREAD_CANCELED, "canceled thread exit status");
            TESTC(seqno == 2, "seqno");
        }
        cur_sc->cleanup(cur_sc->arg);
    }
}
