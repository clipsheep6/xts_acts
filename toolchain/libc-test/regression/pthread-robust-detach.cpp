#include <pthread.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include "gtest/gtest.h"

#define TX(r, f, x) EXPECT_EQ(((r) = (f)), x) << #f << " failed: (pshared==" << pshared \
            << ") got " << r << " \"" << strerror(r) << "\" want " << x << " \"" << strerror(x) << "\"" << endl;
#define T(r, f) TX(r, f, 0)

using namespace std;
using namespace testing::ext;
class PthreadRobustDetachSuite : public testing::Test {};

static pthread_barrier_t barrier2;
static int pshared;

static void *start_lock(void *arg)
{
    pthread_mutex_lock((pthread_mutex_t *)arg);
    pthread_barrier_wait(&barrier2);
    return 0;
}

static void f()
{
    pthread_t td;
    int r;
    pthread_mutexattr_t mtx_a;
    pthread_mutex_t mtx;
    struct timespec ts;

    T(r, pthread_barrier_init(&barrier2, 0, 2));
    T(r, pthread_mutexattr_init(&mtx_a));
    T(r, pthread_mutexattr_setrobust(&mtx_a, PTHREAD_MUTEX_ROBUST));
    if (pshared)
        T(r, pthread_mutexattr_setpshared(&mtx_a, PTHREAD_PROCESS_SHARED));
    T(r, pthread_mutex_init(&mtx, &mtx_a));
    T(r, pthread_create(&td, 0, start_lock, &mtx));
    T(r, pthread_detach(td));
    pthread_barrier_wait(&barrier2);
    pthread_barrier_destroy(&barrier2);

    // enough time to ensure that the detached thread is dead
    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_nsec += 100 * 1000 * 1000;
    if (ts.tv_nsec >= 1000 * 1000 * 1000) {
        ts.tv_sec++;
        ts.tv_nsec -= 1000 * 1000 * 1000;
    }

    TX(r, pthread_mutex_timedlock(&mtx, &ts), EOWNERDEAD);
}

/**
 * @tc.name      : PthreadRobustDetachTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadRobustDetachSuite, PthreadRobustDetachTest, Function | MediumTest | Level2)
{
    // test non-pshared and pshared robust mutexes as well
    f();
    pshared = 1;
    f();
}
