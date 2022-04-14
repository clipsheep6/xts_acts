#include <clocale>
#include <regex.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RegexEscapedHighByte : public testing::Test {};

/**
 * @tc.name      : RegexEscapedHighByteTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RegexEscapedHighByte, RegexEscapedHighByteTest, Function | MediumTest | Level2)
{
    char buf[200];
    regex_t r;
    int n;

    setlocale(LC_CTYPE, "C.UTF-8");

    // illegal sequence (not U+00FC)
    n = regcomp(&r, "\\\xfc", 0);
    if (n != REG_BADPAT) {
        regerror(n, &r, buf, sizeof buf);
        EXPECT_EQ(REG_BADPAT, n) << "regcomp(\\\\\\xfc) returned " << n << " (" << buf << ") wanted REG_BADPAT" << endl;
    }
}
