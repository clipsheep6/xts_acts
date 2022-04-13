#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gtest/gtest.h"
#include "test.h"

#define TEST_T(r, f, x, m) do {                               \
    ((r) = (f)) == (x) ||                                     \
        (t_error("%s failed (" m ")\n", #f, r, x, r - x), 0); \
    EXPECT_DOUBLE_EQ((r), (x));                               \
} while(0)

using namespace std;
using namespace testing::ext;
class StrtodSimpleSuite : public testing::Test {};

/**
 * @tc.name      : StrtodSimpleTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StrtodSimpleSuite, StrtodSimpleTest, Function | MediumTest | Level2)
{
    int i;
    double d, d2;
    char buf[1000];

    for (i = 0; i < 100; i++) {
        d = sin(i);
        snprintf(buf, sizeof buf, "%.300f", d);
        TEST_T(d2, strtod(buf, 0), d, "round trip fail %a != %a (%a)");
    }

    TEST_T(d, strtod("0x1p4", 0), 16.0, "hex float %a != %a");
    TEST_T(d, strtod("0x1.1p4", 0), 17.0, "hex float %a != %a");
}
