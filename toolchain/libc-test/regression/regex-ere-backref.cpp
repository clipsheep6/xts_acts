#include <regex.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexEreBackref : public testing::Test {};

/**
 * @tc.name      : RegexEreBackrefTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RegexEreBackref, RegexEreBackrefTest, Function | MediumTest | Level2)
{
    char buf[200];
    char pat[] = "(a)\\1";
    regex_t r;
    int n;

    n = regcomp(&r, pat, REG_EXTENDED);
    if (n) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regcomp(" << pat << ") returned " << n << " (" << buf << ") wanted 0" << endl;
    }

    n = regexec(&r, "aa", 0, nullptr, 0);
    if (n != REG_NOMATCH) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_EQ(REG_NOMATCH, n) << "regexec(/" << pat << "/ ~ \"aa\") returned "
                                  << n << " (" << buf << "), wanted REG_NOMATCH" << endl;
    }

    n = regexec(&r, "a1", 0, nullptr, 0);
    if (n) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regexec(/" << pat << "/ ~ \"a1\") returned "
                        << n << " (" << buf << "), wanted 0" << endl;
    }
}
