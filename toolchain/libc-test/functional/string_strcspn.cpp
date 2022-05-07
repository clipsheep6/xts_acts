#include <cstddef>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class StringStrcspn : public testing::Test {};

static void T(const char *s, const char *c, int n)
{
    const char *p = s;
    const char *q = c;
    size_t r = strcspn(p, q);
    EXPECT_EQ(r, n) << "strcspn(" << s << "," << c <<
        ") returned " << static_cast<unsigned long>(r) << ", wanted " << static_cast<unsigned long>(n) << endl;
}

/**
 * @tc.name      : StringStrcspnTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringStrcspn, StringStrcspnTest, Function | MediumTest | Level2)
{
    int i;
    char a[128];
    char s[256];

    for (i = 0; i < 128; i++) {
        a[i] = (i + 1) & 127;
    }

    for (i = 0; i < 256; i++) {
        *(reinterpret_cast<unsigned char *>(s) + i) = i + 1;
    }

    T((""), (""), 0);
    T(("a"), (""), 1);
    T((""), ("a"), 0);
    T(("abc"), ("cde"), 2);
    T(("abc"), ("ccc"), 2);
    T(("abc"), a, 0);
    T(("\xff\x80 abc"), a, 2);
    T(s, ("\xff"), 254);
}
