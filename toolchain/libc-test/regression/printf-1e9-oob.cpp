#include <cstdio>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Printf1e9Oob : public testing::Test {};

static void t(const char *fmt, double d, const char *want)
{
    char buf[256];
    int n = strlen(want);
    int r = snprintf(buf, sizeof buf, fmt, d);
    EXPECT_FALSE(r != n || memcmp(buf, want, n + 1) != 0) << "snprintf(\"" << fmt
                                                          << "\"," << d << ") want " << want << " got " << buf << endl;
}

/**
 * @tc.name      : Printf1e9OobTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Printf1e9Oob, Printf1e9OobTest, Function | MediumTest | Level2)
{
    // fill stack with something
    t("%.1f", 123123123123123.0, "123123123123123.0");
    // test for out-of-bounds access
    t("%g", 999999999.0, "1e+09");
    t("%.3e", 999999999.75, "1.000e+09");
}
