#include <cstring>
#include <securec.h>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class StringMemmem : public testing::Test {};

static void N(string s_s, string tail_l, string sub_b)
{
    char p[128] = {0};
    EXPECT_TRUE(strcpy_s(p, strlen(s_s.c_str())+1, s_s.c_str()) == 0);
    EXPECT_TRUE(strcat_s(p,  strlen(p) + strlen(tail_l.c_str()) + 1, tail_l.c_str()) == 0);
    char *q = (char *)memmem(p, strlen(s_s.c_str()), sub_b.c_str(), strlen(sub_b.c_str()));
    EXPECT_FALSE(q) << s_s.c_str() << " " << tail_l.c_str() << ", " << strlen(s_s.c_str()) << " , " << sub_b.c_str()
                    << " ," << strlen(sub_b.c_str()) << ") returned str+" << q - p << ", wanted 0" << endl;
}

static void T(string s, string sub_b, int n)
{
    const char *p = s.c_str();
    const char *sub = sub_b.c_str();
    char *q = (char *)memmem(p, strlen(p), sub, strlen(sub));
    EXPECT_STRNE(nullptr, q) << "memmem(" << s << "," << sub << ") returned 0, wanted str+" << n << endl;
    EXPECT_EQ(q - p, n) <<
        "memmem(" << s << "," << sub << ") returned str+" << q - p << ", wanted str+" << n << endl;
}

/**
 * @tc.name      : StringMemmemTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringMemmem, StringMemmemTest, Function | MediumTest | Level2)
{
    N(string(""), string("a"), string("a"));
    N(string("a"), string("a"), string("aa"));
    N(string("a"), string("b"), string("b"));
    N(string("aa"), string("b"), string("ab"));
    N(string("aa"), string("a"), string("aaa"));
    N(string("aba"), string("b"), string("bab"));
    N(string("abba"), string("b"), string("bab"));
    N(string("abba"), string("ba"), string("aba"));
    N(string("abc abc"), string("d"), string("abcd"));
    N(string("0-1-2-3-4-5-6-7-8-9"), string(""), string("-3-4-56-7-8-"));
    N(string("0-1-2-3-4-5-6-7-8-9"), string(""), string("-3-4-5+6-7-8-"));
    N(string("_ _ _\xff_ _ _"), string("\x7f_"), string("_\x7f_"));
    N(string("_ _ _\x7f_ _ _"), string("\xff_"), string("_\xff_"));

    T(string(""), string(""), 0);
    T(string("abcd"), string(""), 0);
    T(string("abcd"), string("a"), 0);
    T(string("abcd"), string("b"), 1);
    T(string("abcd"), string("c"), 2);
    T(string("abcd"), string("d"), 3);
    T(string("abcd"), string("ab"), 0);
    T(string("abcd"), string("bc"), 1);
    T(string("abcd"), string("cd"), 2);
    T(string("ababa"), string("baba"), 1);
    T(string("ababab"), string("babab"), 1);
    T(string("abababa"), string("bababa"), 1);
    T(string("abababab"), string("bababab"), 1);
    T(string("ababababa"), string("babababa"), 1);
    T(string("abbababab"), string("bababa"), 2);
    T(string("abbababab"), string("ababab"), 3);
    T(string("abacabcabcab"), string("abcabcab"), 4);
    T(string("nanabanabanana"), string("aba"), 3);
    T(string("nanabanabanana"), string("ban"), 4);
    T(string("nanabanabanana"), string("anab"), 1);
    T(string("nanabanabanana"), string("banana"), 8);
    T(string("_ _\xff_ _"), string("_\xff_"), 2);
}
