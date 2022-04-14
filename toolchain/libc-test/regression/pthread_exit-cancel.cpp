#include <cstring>
#include <pthread.h>

#include "gtest/gtest.h"

#define TEST_T(r, f) do {                                     \
    EXPECT_FALSE(r = (f)) << #f << " failed: " << strerror(r);\
} while(0)

using namespace std;
using namespace testing::ext;
class Pthread_exitCancel : public testing::Test {};

/**
 * @tc.name      : Pthread_exitCancelTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
static void cleanup(void *arg)
{
    *(int *)arg = 1;
}

static void *start(void *arg)
{
    pthread_cleanup_push(cleanup, arg);
    pthread_exit(0);
    pthread_cleanup_pop(0);
    return arg;
}

HWTEST_F(Pthread_exitCancel, Pthread_exitCancelTest, Function | MediumTest | Level2)
{
    pthread_t td;
    void *status;
    int arg = 0;
    int r;

    TEST_T(r, pthread_create(&td, 0, start, &arg));
    TEST_T(r, pthread_join(td, &status));
    EXPECT_FALSE(status) << "expected 0 thread exit status, got 0x" << hex << (long)status << endl;
    EXPECT_EQ(1, arg) << "cleanup handler failed to run" << endl;
}
