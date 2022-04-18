#include <cwchar>

#include "gtest/gtest.h"

#define N(s, sub) do {                                                                                       \
    wchar_t *p = s;                                                                                          \
    wchar_t *q = wcsstr(p, sub);                                                                             \
    EXPECT_FALSE(q) << "wcsstr(" << #s << "," << #sub << ") returned str+" << q - p << ", wanted 0" << endl; \
} while (0)
#define T(s, sub, n) do {                                                                                    \
    wchar_t *p = s;                                                                                          \
    wchar_t *q = wcsstr(p, sub);                                                                             \
    EXPECT_STRNE(q, 0) << "wcsstr(" << #s << "," << #sub << ") returned 0, wanted str+" << q - p << endl;    \
    EXPECT_EQ(q - p, n) << "wcsstr(" << #s                                                                   \
        << "," << #sub << ") returned str+" << q - p << ", wanted str+" << n << endl;                        \
} while (0)
    
using namespace std;
using namespace testing::ext;
class Wcsstr : public testing::Test {};

/**
 * @tc.name      : WcsstrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Wcsstr, WcsstrTest, Function | MediumTest | Level2)
{
    N(const_cast<wchar_t*>(L""), L"a");
    N(const_cast<wchar_t*>(L"a"), L"aa");
    N(const_cast<wchar_t*>(L"a"), L"b");
    N(const_cast<wchar_t*>(L"aa"), L"ab");
    N(const_cast<wchar_t*>(L"aa"), L"aaa");
    N(const_cast<wchar_t*>(L"abba"), L"aba");
    N(const_cast<wchar_t*>(L"abc abc"), L"abcd");
    N(const_cast<wchar_t*>(L"0-1-2-3-4-5-6-7-8-9"), L"-3-4-56-7-8-");
    N(const_cast<wchar_t*>(L"0-1-2-3-4-5-6-7-8-9"), L"-3-4-5+6-7-8-");
    N(const_cast<wchar_t*>(L"_ _ _\xff_ _ _"), L"_\x7f_");
    N(const_cast<wchar_t*>(L"_ _ _\x7f_ _ _"), L"_\xff_");

    T(const_cast<wchar_t*>(L""), L"", 0);
    T(const_cast<wchar_t*>(L"abcd"), L"", 0);
    T(const_cast<wchar_t*>(L"abcd"), L"a", 0);
    T(const_cast<wchar_t*>(L"abcd"), L"b", 1);
    T(const_cast<wchar_t*>(L"abcd"), L"c", 2);
    T(const_cast<wchar_t*>(L"abcd"), L"d", 3);
    T(const_cast<wchar_t*>(L"abcd"), L"ab", 0);
    T(const_cast<wchar_t*>(L"abcd"), L"bc", 1);
    T(const_cast<wchar_t*>(L"abcd"), L"cd", 2);
    T(const_cast<wchar_t*>(L"ababa"), L"baba", 1);
    T(const_cast<wchar_t*>(L"ababab"), L"babab", 1);
    T(const_cast<wchar_t*>(L"abababa"), L"bababa", 1);
    T(const_cast<wchar_t*>(L"abababab"), L"bababab", 1);
    T(const_cast<wchar_t*>(L"ababababa"), L"babababa", 1);
    T(const_cast<wchar_t*>(L"abbababab"), L"bababa", 2);
    T(const_cast<wchar_t*>(L"abbababab"), L"ababab", 3);
    T(const_cast<wchar_t*>(L"abacabcabcab"), L"abcabcab", 4);
    T(const_cast<wchar_t*>(L"nanabanabanana"), L"aba", 3);
    T(const_cast<wchar_t*>(L"nanabanabanana"), L"ban", 4);
    T(const_cast<wchar_t*>(L"nanabanabanana"), L"anab", 1);
    T(const_cast<wchar_t*>(L"nanabanabanana"), L"banana", 8);
    T(const_cast<wchar_t*>(L"_ _\xff_ _"), L"_\xff_", 2);
}
