#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class StrtodLongSuite : public testing::Test {};

/**
 * @tc.name      : StrtodLongTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StrtodLongSuite, StrtodLongTest, Function | MediumTest | Level2)
{
    double x, want = .1111111111111111111111;
    char buf[40000];

    memset(buf, '1', sizeof buf);
    buf[0] = '.';
    buf[sizeof buf - 1] = 0;
    EXPECT_EQ((x = strtod(buf, 0)), want) << "strtod(.11[...]1) got " << x << " want " << want << endl;
}
