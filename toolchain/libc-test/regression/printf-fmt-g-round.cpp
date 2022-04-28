#include <cstdio>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PrintfFmtground : public testing::Test {};

static void t(const char *fmt, double d, const char *want)
{
    char buf[256];
    int n = strlen(want);
    int r = snprintf(buf, sizeof buf, fmt, d);
    EXPECT_FALSE(r != n || memcmp(buf, want, n + 1) != 0) <<
        "snprintf(\""  << fmt << "\"," << d << ") want " << want << " got " << buf << endl;
}

/**
 * @tc.name      : PrintfFmtgroundTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PrintfFmtground, PrintfFmtgroundTest, Function | MediumTest | Level2)
{
    t("%.12g", 1000000000005.0, "1e+12");
    t("%.12g", 100000000002500.0, "1.00000000002e+14");
}
