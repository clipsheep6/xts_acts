#include "gtest/gtest.h"
#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

#define TESTT(c, ...) EXPECT_TRUE((c)) << #c << " failed: " << __VA_ARGS__ << endl;

using namespace std;
using namespace testing::ext;
class PthreadGettidNpSuite : public testing::Test {};

static pthread_mutex_t mutex_t;

void *pthread_test(void *arg)
{
    pthread_mutex_lock(&mutex_t);
    *((pid_t *)arg) = gettid();
    pthread_mutex_unlock(&mutex_t);
    return nullptr;
}

/**
 * @tc.name      : PthreadGettidNpTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadGettidNpSuite, PthreadGettidNpTest, Function | MediumTest | Level2)
{
    pthread_mutex_init(&mutex_t, nullptr);
    TESTT(gettid() == pthread_gettid_np(pthread_self()), "pthread_gettid_np() is failed\n");

    pthread_mutex_lock(&mutex_t);
    pid_t tid;
    pthread_t t;
    pthread_create(&t, nullptr, pthread_test, &tid);
    pid_t recv_result = pthread_gettid_np(t);

    pthread_mutex_unlock(&mutex_t);
    TESTT(0 == pthread_join(t, nullptr), "pthread_join is failed\n");
    TESTT(tid == recv_result, "the tid of pthread or tid of pthread_gettid_np() is wrong\n");
}
