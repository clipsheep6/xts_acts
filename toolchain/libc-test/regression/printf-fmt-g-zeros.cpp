#include <cstdio>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PrintfFmtzero : public testing::Test {};

static void t(const char *fmt, double d, const char *want)
{
    char buf[256];
    int n = strlen(want);
    int r = snprintf(buf, sizeof buf, fmt, d);
    EXPECT_FALSE(r != n || memcmp(buf, want, n + 1) != 0) << "snprintf(\"" << fmt
                                                          << "\"," << d << ") want " << want << " got " << buf << endl;
}

/**
 * @tc.name      : PrintfFmtzeroTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PrintfFmtzero, PrintfFmtzeroTest, Function | MediumTest | Level2)
{
    t("%.50g", 100000000000000.5, "100000000000000.5");
    t("%.50g", 987654321098765.0, "987654321098765");
}
