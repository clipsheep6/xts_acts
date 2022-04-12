#include <regex.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexBackref0Suite : public testing::Test {};

/**
 * @tc.name      : RegexBackref0Test
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RegexBackref0Suite, RegexBackref0Test, Function | MediumTest | Level2)
{
    char buf[200];
    char pat[] = "a\\0";
    regex_t r;
    int n;

    n = regcomp(&r, pat, 0);
    if (n) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regcomp(" << pat << ") returned " << n << " (" << buf << ") wanted 0" << endl;
    }
    n = regexec(&r, "a0", 0, 0, 0);
    if (n) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regexec(/" << pat << "/ ~ \"a0\") returned " << n << " (" << buf << "), wanted 0" << endl;
    }
}
