#include <cwchar>
#include <cstdio>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class WcsstrFalseNegative : public testing::Test {};

/**
 * @tc.name      : WcsstrFalseNegativeTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(WcsstrFalseNegative, WcsstrFalseNegativeTest, Function | MediumTest | Level2)
{
    wchar_t const *haystack = L"playing play play play always";
    wchar_t const *needle = L"play play play";
    wchar_t *p = (wchar_t *)wcsstr(haystack, needle);
    EXPECT_EQ(p, haystack + 8) << "wcsstr(L\"" << haystack << "\",L\"" 
        << needle << "\") failed: got " << p << ", want " << haystack + 8 << endl;
}
