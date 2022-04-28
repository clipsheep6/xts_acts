#include <climits>
#include <cstdio>
#include <regex.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexBracketIcase : public testing::Test {};

/**
 * @tc.name      : RegexBracketIcaseTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RegexBracketIcase, RegexBracketIcaseTest, Function | MediumTest | Level2)
{
    char buf[100];
    const char *pat;
    regex_t re;
    int n, i;
    struct {
        const char *s;
        int n;
    } t[] = {
        {"a", REG_NOMATCH},
        {"A", REG_NOMATCH},
        {"b", REG_NOMATCH},
        {"B", REG_NOMATCH},
        {"c", REG_NOMATCH},
        {"C", REG_NOMATCH},
        {"d", 0},
        {"D", 0},
        {nullptr, 0}};

    pat = "[^aBcC]";
    n = regcomp(&re, pat, REG_ICASE);
    if (n) {
        regerror(n, &re, buf, sizeof buf);
        EXPECT_TRUE(false) << "regcomp(\"" << pat << "\") failed: " << n << " (" << buf << ")" << endl;
    }

    for (i = 0; t[i].s; i++) {
        n = regexec(&re, t[i].s, 0, nullptr, 0);
        if (n != t[i].n) {
            regerror(n, &re, buf, sizeof buf);
            EXPECT_TRUE(false) << "regexec(/" << pat <<
                "/, \"" << t[i].s << "\") returned " << n << " (" << buf << "), wanted " << t[i].n << endl;
        }
    }
}
