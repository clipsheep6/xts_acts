#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class StringStrstr : public testing::Test {};

void N(string s, string sub)
{
    const char *p = s.c_str();
    const char *q = strstr(p, sub.c_str());
    EXPECT_FALSE(q) << "strstr(" << s << "," << sub << ") returned str+" << q - p << endl;
}

void T_T(string s, string sub, int n)
{
    const char *p = s.c_str();                                                                                        
    const char *q = strstr(p, sub.c_str());                                                                               
    EXPECT_STRNE(q, nullptr) << "strstr(" << s << "," << sub << ") returned 0, wanted str+" << n << endl;
    EXPECT_TRUE((q - p) == n) << "strstr(" << s << "," << sub << ") returned str+" << n << endl;                
}

/**
 * @tc.name      : StringStrstrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringStrstr, StringStrstrTest, Function | MediumTest | Level2)
{
    N(string(""), string("a"));
    N(string("a"), string("aa"));
    N(string("a"), string("b"));
    N(string("aa"), string("ab"));
    N(string("aa"), string("aaa"));
    N(string("abba"), string("aba"));
    N(string("abc abc"), string("abcd"));
    N(string("0-1-2-3-4-5-6-7-8-9"), string("-3-4-56-7-8-"));
    N(string("0-1-2-3-4-5-6-7-8-9"), string("-3-4-5+6-7-8-"));
    N(string("_ _ _\xff_ _ _"), string("_\x7f_"));
    N(string("_ _ _\x7f_ _ _"), string("_\xff_"));

    T_T((""), (""), 0);
    T_T(string("abcd"), string(""), 0);
    T_T(string("abcd"), string("a"), 0);
    T_T(string("abcd"), string("b"), 1);
    T_T(string("abcd"), string("c"), 2);
    T_T(string("abcd"), string("d"), 3);
    T_T(string("abcd"), string("ab"), 0);
    T_T(string("abcd"), string("bc"), 1);
    T_T(string("abcd"), string("cd"), 2);
    T_T(string("ababa"), string("baba"), 1);
    T_T(string("ababab"), string("babab"), 1);
    T_T(string("abababa"), string("bababa"), 1);
    T_T(string("abababab"), string("bababab"), 1);
    T_T(string("ababababa"), string("babababa"), 1);
    T_T(string("abbababab"), string("bababa"), 2);
    T_T(string("abbababab"), string("ababab"), 3);
    T_T(string("abacabcabcab"), string("abcabcab"), 4);
    T_T(string("nanabanabanana"), string("aba"), 3);
    T_T(string("nanabanabanana"), string("ban"), 4);
    T_T(string("nanabanabanana"), string("anab"), 1);
    T_T(string("nanabanabanana"), string("banana"), 8);
    T_T(string("_ _\xff_ _"), string("_\xff_"), 2);
}
