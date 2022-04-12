#include <signal.h>
#include "gtest/gtest.h"
#include <stdio.h>

using namespace std;
using namespace testing::ext;
class SigreturnSuite : public testing::Test {};

static volatile sig_atomic_t x;

void handler(int s)
{
    x = 1;
}

/**
 * @tc.name      : SigreturnTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SigreturnSuite, SigreturnTest, Function | MediumTest | Level2)
{
    signal(SIGINT, handler);
    ASSERT_FALSE(raise(SIGINT));
    ASSERT_EQ(1, x);
}
