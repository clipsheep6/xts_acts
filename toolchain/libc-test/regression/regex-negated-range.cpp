#include <regex.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexnegatedRange : public testing::Test {};

/**
 * @tc.name      : RegexnegatedRangeTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RegexnegatedRange, RegexnegatedRangeTest, Function | MediumTest | Level2)
{
    char buf[200];
    regex_t r;
    int n;

    n = regcomp(&r, "[^aa-z]", 0);
    if (n) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regcomp returned " << n << " (" << buf << ")" << endl;
    }

    n = regexec(&r, "k", 0, 0, 0);
    if (n != REG_NOMATCH) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_EQ(REG_NOMATCH, n) << "regexec(/[^aa-z]/ ~ \"k\") returned " << n << " ("
                                  << "), wanted REG_NOMATCH" << endl;
    }
}
