#include <ctime>
#include <cstring>
#include <cerrno>
#include <pthread.h>

#include "gtest/gtest.h"

#define T(r, f) do {                                             \
    EXPECT_FALSE((r) = (f)) << #f << " failed: " << strerror(r); \
} while (0)

using namespace std;
using namespace testing::ext;
class PthreadCondattrSetclock : public testing::Test {};

/**
 * @tc.name      : PthreadCondattrSetclockTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadCondattrSetclock, PthreadCondattrSetclockTest, Function | MediumTest | Level2)
{
    pthread_cond_t c;
    pthread_condattr_t a;
    pthread_mutex_t m;
    clockid_t clk;
    struct timespec ts;
    int r;

    T(r, pthread_condattr_init(&a));
    r = pthread_condattr_setclock(&a, CLOCK_PROCESS_CPUTIME_ID);
    EXPECT_EQ(r, EINVAL) <<
        "pthread_condattr_setclock CLOCK_PROCESS_CPUTIME_ID should fail with EINVAL, got" << strerror(r) << endl;
                         
    r = pthread_condattr_setclock(&a, CLOCK_THREAD_CPUTIME_ID);
    EXPECT_EQ(r, EINVAL) <<
        "pthread_condattr_setclock CLOCK_THREAD_CPUTIME_ID should fail with EINVAL, got " << strerror(r) << endl;

    T(r, pthread_condattr_getclock(&a, &clk));
    EXPECT_EQ(clk, CLOCK_REALTIME) << "condattr default clock is " <<
        (int)clk << ", wanted CLOCK_REALTIME (" << (int)CLOCK_REALTIME << (int)CLOCK_REALTIME << endl;
    T(r, pthread_cond_init(&c, &a));
    T(r, pthread_mutex_init(&m, 0));
    T(r, pthread_mutex_lock(&m));
    r = clock_gettime(CLOCK_REALTIME, &ts);
    EXPECT_TRUE(!r) << "clock_gettime failed: " << strerror(errno) << endl;
                    
    /* wait 10ms */
    ts.tv_nsec += 10 * 1000 * 1000;
    if (ts.tv_nsec >= 1000 * 1000 * 1000) {
        ts.tv_nsec -= 1000 * 1000 * 1000;
        ts.tv_sec += 1;
    }
    r = pthread_cond_timedwait(&c, &m, &ts);
    EXPECT_EQ(r, ETIMEDOUT) << "pthread_cond_timedwait did not timeout, returned " << strerror(r) << endl;
                            
    T(r, pthread_mutex_unlock(&m));

    T(r, pthread_mutex_destroy(&m));
    T(r, pthread_cond_destroy(&c));
    T(r, pthread_condattr_destroy(&a));
}
