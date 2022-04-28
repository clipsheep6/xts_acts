#include <cstdio>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class SscanfEof : public testing::Test {};

/**
 * @tc.name      : SscanfEofTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SscanfEof, SscanfEofTest, Function | MediumTest | Level2)
{
    const char *s = "0";
    const char *fmt = "%f%c";
    float f = 1.0f;
    char c = 'x';
    int r = sscanf(s, fmt, &f, &c);
    EXPECT_EQ(1, r) <<
        "sscanf(\""s << "\", \"" << fmt << "\",..) returned " << r << ", wanted 1" << endl;
    EXPECT_FALSE(f != 0.0f || c != 'x') << "sscanf(\"" << s <<
        "\", \"" << fmt << "\",..) assigned f=" << f << " c='" << c << "', wanted i=0 c='x'" << endl;
}
