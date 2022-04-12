#include "gtest/gtest.h"
#include <time.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include <stdio.h>

using namespace std;
using namespace testing::ext;
class ClockGettimeSuite : public testing::Test {};

/**
 * @tc.name      :ClockGettimeSuite001
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ClockGettimeSuite, ClockGettimeSuite001, Function | MediumTest | Level2)
{
    struct timespec ts;
    EXPECT_TRUE(clock_gettime(CLOCK_REALTIME, &ts) == 0);
}
