#include <cerrno>
#include <ctime>
#include <pthread.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PthreadCondWaitCancelIgnored : public testing::Test {};

static pthread_mutex_t mx = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cv = PTHREAD_COND_INITIALIZER;
static int waiting;

static void cleanup(void *p)
{
    waiting = 0;
    pthread_cond_signal(&cv);
    pthread_mutex_unlock(&mx);
}

static void *waiter(void *p)
{
    pthread_mutex_lock(&mx);
    waiting = 1;
    pthread_cond_signal(&cv);
    pthread_cleanup_push(cleanup, 0);
    while (waiting) {
        pthread_cond_wait(&cv, &mx);
    }
    pthread_cleanup_pop(1);
    return nullptr;
}

/**
 * @tc.name      : PthreadCondWaitCancelIgnoredTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadCondWaitCancelIgnored, PthreadCondWaitCancelIgnoredTest, Function | MediumTest | Level2)
{
    pthread_t td;
    struct timespec ts;
    void *rv;
    pthread_mutex_lock(&mx);
    pthread_create(&td, 0, waiter, 0);
    while (!waiting) {
        pthread_cond_wait(&cv, &mx);
    }
    pthread_cancel(td);
    clock_gettime(CLOCK_REALTIME, &ts);
    if ((ts.tv_nsec += 30000000) >= 1000000000) {
        ts.tv_sec++;
        ts.tv_nsec -= 1000000000;
    }
    while (waiting && !pthread_cond_timedwait(&cv, &mx, &ts)) {}
    waiting = 0;
    pthread_cond_signal(&cv);
    pthread_mutex_unlock(&mx);
    pthread_join(td, &rv);
    EXPECT_EQ(PTHREAD_CANCELED, rv) << "pthread_cond_wait did not act on cancellation" << endl;
}
