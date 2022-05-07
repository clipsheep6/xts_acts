#include <regex.h>
#include <cstdio>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexecNsube : public testing::Test {};

/**
 * @tc.name      : RegexecNsubTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */

HWTEST_F(RegexecNsube, RegexecNsubTest, Function | MediumTest | Level2)
{
    regex_t re;
    int r;

    r = regcomp(&re, "abc", REG_NOSUB);
    EXPECT_FALSE(r) << "regcomp failed: " << r << "\n" << endl;
    r = regexec(&re, "zyx abc", 1, nullptr, 0);
    EXPECT_NE(REG_NOMATCH, r) << "regexec failed to match" << endl;
    EXPECT_FALSE(r) << "regexec returned invalid code: " << r << endl;
    regfree(&re);
}
