
#include <ctime>
#include <cerrno>
#include <cstring>
#include <cstdio>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class ClockGettime : public testing::Test {};

/**
 * @tc.name      :ClockGettimeTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ClockGettime, ClockGettimeTest, Function | MediumTest | Level2)
{
    struct timespec ts;
    EXPECT_TRUE(clock_gettime(CLOCK_REALTIME, &ts) == 0);
}
