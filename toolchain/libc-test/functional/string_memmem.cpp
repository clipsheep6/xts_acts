#include <cstring>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class StringMemmem : public testing::Test {};

void N(char *s, char *tail, char *sub)
{
    char p[128] = {0};
    strcpy(p, s);
    strcat(p, tail);
    char *q = (char *)memmem(p, strlen((const char *)s), sub, strlen((const char *)sub));
    EXPECT_FALSE(q) << s << " " << tail << ", " << strlen((const char *)s) << " , " << sub
                    << " ," << strlen((const char *)sub) << ") returned str+" << q - p << ", wanted 0" << endl;
}

#define T(s, sub, n) do{                                                                                    \
    char *p = (char *)s;                                                                                    \
    char *q = (char *)memmem(p, strlen(p), sub, strlen(sub));                                               \
    EXPECT_STRNE(nullptr, q) << "memmem(" << #s << "," << #sub << ") returned 0, wanted str+" << n << endl; \
    EXPECT_EQ(q - p, n) << "memmem(" << #s                                                                  \
        << "," << #sub << ") returned str+" << q - p << ", wanted str+" << n << endl;                       \
} while(0)

/**
 * @tc.name      : StringMemmemTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringMemmem, StringMemmemTest, Function | MediumTest | Level2)
{
    N((char *)"", (char *)"a", (char *)"a");
    N((char *)"a", (char *)"a", (char *)"aa");
    N((char *)"a", (char *)"b", (char *)"b");
    N((char *)"aa", (char *)"b", (char *)"ab");
    N((char *)"aa", (char *)"a", (char *)"aaa");
    N((char *)"aba", (char *)"b", (char *)"bab");
    N((char *)"abba", (char *)"b", (char *)"bab");
    N((char *)"abba", (char *)"ba", (char *)"aba");
    N((char *)"abc abc", (char *)"d", (char *)"abcd");
    N((char *)"0-1-2-3-4-5-6-7-8-9", (char *)"", (char *)"-3-4-56-7-8-");
    N((char *)"0-1-2-3-4-5-6-7-8-9", (char *)"", (char *)"-3-4-5+6-7-8-");
    N((char *)"_ _ _\xff_ _ _", (char *)"\x7f_", (char *)"_\x7f_");
    N((char *)"_ _ _\x7f_ _ _", (char *)"\xff_", (char *)"_\xff_");

    T("", "", 0);
    T("abcd", "", 0);
    T("abcd", "a", 0);
    T("abcd", "b", 1);
    T("abcd", "c", 2);
    T("abcd", "d", 3);
    T("abcd", "ab", 0);
    T("abcd", "bc", 1);
    T("abcd", "cd", 2);
    T("ababa", "baba", 1);
    T("ababab", "babab", 1);
    T("abababa", "bababa", 1);
    T("abababab", "bababab", 1);
    T("ababababa", "babababa", 1);
    T("abbababab", "bababa", 2);
    T("abbababab", "ababab", 3);
    T("abacabcabcab", "abcabcab", 4);
    T("nanabanabanana", "aba", 3);
    T("nanabanabanana", "ban", 4);
    T("nanabanabanana", "anab", 1);
    T("nanabanabanana", "banana", 8);
    T("_ _\xff_ _", "_\xff_", 2);
}
