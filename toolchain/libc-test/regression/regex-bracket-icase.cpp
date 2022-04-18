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
    char *pat;
    regex_t re;
    int n, i;
    struct {
        char *s;
        int n;
    } t[] = {
        {(char *)"a", REG_NOMATCH},
        {(char *)"A", REG_NOMATCH},
        {(char *)"b", REG_NOMATCH},
        {(char *)"B", REG_NOMATCH},
        {(char *)"c", REG_NOMATCH},
        {(char *)"C", REG_NOMATCH},
        {(char *)"d", 0},
        {(char *)"D", 0},
        {0, 0}};

    pat = (char *)"[^aBcC]";
    n = regcomp(&re, pat, REG_ICASE);
    if (n) {
        regerror(n, &re, buf, sizeof buf);
        EXPECT_TRUE(false) << "regcomp(\"" << pat << "\") failed: " << n << " (" << buf << ")" << endl;
    }

    for (i = 0; t[i].s; i++) {
        n = regexec(&re, t[i].s, 0, 0, 0);
        if (n != t[i].n) {
            regerror(n, &re, buf, sizeof buf);
            EXPECT_TRUE(false) << "regexec(/" << pat << "/, \""
                << t[i].s << "\") returned " << n << " (" << buf << "), wanted " << t[i].n << endl;
        }
    }
}
