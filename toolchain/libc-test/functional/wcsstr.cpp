#include <cwchar>
#include <iostream>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Wcsstr : public testing::Test {};

void N_N(const wchar_t *s, const wchar_t *sub)
{
    const wchar_t *p = s;
    const wchar_t *q = wcsstr(p, sub);
    EXPECT_FALSE(q) << "wcsstr(" << s << "," << sub << ") returned str+" << q - p << ", wanted 0" << endl;
}

void T_W(const wchar_t *s, const wchar_t *sub, int n)
{
    const wchar_t *p = s;
    const wchar_t *q = wcsstr(p, sub);
    EXPECT_STRNE(q, 0) << "wcsstr(" << s << "," << sub << ") returned 0, wanted str+" << q - p << endl;
    EXPECT_EQ(q - p, n) <<
        "wcsstr(" << s << "," << sub << ") returned str+" << q - p << ", wanted str+" << n << endl;
}

/**
 * @tc.name      : WcsstrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Wcsstr, WcsstrTest, Function | MediumTest | Level2)
{
    N_N((L""), L"a");
    N_N(L"a", L"aa");
    N_N(L"a", L"b");
    N_N(L"aa", L"ab");
    N_N(L"aa", L"aaa");
    N_N(L"abba", L"aba");
    N_N(L"abc abc", L"abcd");
    N_N(L"0-1-2-3-4-5-6-7-8-9", L"-3-4-56-7-8-");
    N_N(L"0-1-2-3-4-5-6-7-8-9", L"-3-4-5+6-7-8-");
    N_N(L"_ _ _\xff_ _ _", L"_\x7f_");
    N_N(L"_ _ _\x7f_ _ _", L"_\xff_");

    T_W(L"", L"", 0);
    T_W(L"abcd", L"", 0);
    T_W(L"abcd", L"a", 0);
    T_W(L"abcd", L"b", 1);
    T_W(L"abcd", L"c", 2);
    T_W(L"abcd", L"d", 3);
    T_W(L"abcd", L"ab", 0);
    T_W(L"abcd", L"bc", 1);
    T_W(L"abcd", L"cd", 2);
    T_W(L"ababa", L"baba", 1);
    T_W(L"ababab", L"babab", 1);
    T_W(L"abababa", L"bababa", 1);
    T_W(L"abababab", L"bababab", 1);
    T_W(L"ababababa", L"babababa", 1);
    T_W(L"abbababab", L"bababa", 2);
    T_W(L"abbababab", L"ababab", 3);
    T_W(L"abacabcabcab", L"abcabcab", 4);
    T_W(L"nanabanabanana", L"aba", 3);
    T_W(L"nanabanabanana", L"ban", 4);
    T_W(L"nanabanabanana", L"anab", 1);
    T_W(L"nanabanabanana", L"banana", 8);
    T_W(L"_ _\xff_ _", L"_\xff_", 2);
}
