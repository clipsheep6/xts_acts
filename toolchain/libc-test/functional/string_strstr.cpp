#include <cstring>

#include "gtest/gtest.h"

#define N(s, sub) do {                                                                       \
    char *p = s;                                                                             \
    char *q = strstr(p, sub);                                                                \
    EXPECT_FALSE(q) << "strstr(" << #s << "," << #sub << ") returned str+" << q - p << endl; \
} while (0)

#define T(s, sub, n) do {                                                                                   \
    char *p = s;                                                                                            \
    char *q = strstr(p, sub);                                                                               \
    EXPECT_STRNE(q, nullptr) << "strstr(" << #s << "," << #sub << ") returned 0, wanted str+" << n << endl; \
    EXPECT_EQ(q - p, n) << "strstr(" << #s << "," << #sub << ") returned str+" << n << endl;                \
} while (0)

using namespace std;
using namespace testing::ext;
class StringStrstr : public testing::Test {};

/**
 * @tc.name      : StringStrstrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringStrstr, StringStrstrTest, Function | MediumTest | Level2)
{
    N(const_cast<char*>(""), "a");
    N(const_cast<char*>("a"), "aa");
    N(const_cast<char*>("a"), "b");
    N(const_cast<char*>("aa"), "ab");
    N(const_cast<char*>("aa"), "aaa");
    N(const_cast<char*>("abba"), "aba");
    N(const_cast<char*>("abc abc"), "abcd");
    N(const_cast<char*>("0-1-2-3-4-5-6-7-8-9"), "-3-4-56-7-8-");
    N(const_cast<char*>("0-1-2-3-4-5-6-7-8-9"), "-3-4-5+6-7-8-");
    N(const_cast<char*>("_ _ _\xff_ _ _"), "_\x7f_");
    N(const_cast<char*>("_ _ _\x7f_ _ _"), "_\xff_");

    T(const_cast<char*>(""), "", 0);
    T(const_cast<char*>("abcd"), "", 0);
    T(const_cast<char*>("abcd"), "a", 0);
    T(const_cast<char*>("abcd"), "b", 1);
    T(const_cast<char*>("abcd"), "c", 2);
    T(const_cast<char*>("abcd"), "d", 3);
    T(const_cast<char*>("abcd"), "ab", 0);
    T(const_cast<char*>("abcd"), "bc", 1);
    T(const_cast<char*>("abcd"), "cd", 2);
    T(const_cast<char*>("ababa"), "baba", 1);
    T(const_cast<char*>("ababab"), "babab", 1);
    T(const_cast<char*>("abababa"), "bababa", 1);
    T(const_cast<char*>("abababab"), "bababab", 1);
    T(const_cast<char*>("ababababa"), "babababa", 1);
    T(const_cast<char*>("abbababab"), "bababa", 2);
    T(const_cast<char*>("abbababab"), "ababab", 3);
    T(const_cast<char*>("abacabcabcab"), "abcabcab", 4);
    T(const_cast<char*>("nanabanabanana"), "aba", 3);
    T(const_cast<char*>("nanabanabanana"), "ban", 4);
    T(const_cast<char*>("nanabanabanana"), "anab", 1);
    T(const_cast<char*>("nanabanabanana"), "banana", 8);
    T(const_cast<char*>("_ _\xff_ _"), "_\xff_", 2);
}
