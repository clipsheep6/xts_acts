#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class StrtodLong : public testing::Test {};

/**
 * @tc.name      : StrtodLongTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StrtodLong, StrtodLongTest, Function | MediumTest | Level2)
{
    double x, want = .1111111111111111111111;
    char buf[40000];

    memset(buf, '1', sizeof buf);
    buf[0] = '.';
    buf[sizeof buf - 1] = 0;
    EXPECT_EQ((x = strtod(buf, 0)), want) << "strtod(.11[...]1) got " << x << " want " << want << endl;
}
