#include <cstddef>
#include <cstring>

#include "gtest/gtest.h"

#define T(s, c, n) do {                                                                                                                 \
    char *p = s;                                                                                                                        \
    char *q = c;                                                                                                                        \
    size_t r = strcspn(p, q);                                                                                                           \
    EXPECT_EQ(r, n) << "strcspn(" << #s << "," << #c << ") returned " << (unsigned long)r << ", wanted " << (unsigned long)(n) << endl; \
} while(0)

using namespace std;
using namespace testing::ext;
class StringStrcspn : public testing::Test {};

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

    for (i = 0; i < 128; i++)
        a[i] = (i + 1) & 127;

    for (i = 0; i < 256; i++)
        *((unsigned char *)s + i) = i + 1;

    T((char *)"", (char *)"", 0);
    T((char *)"a", (char *)"", 1);
    T((char *)"", (char *)"a", 0);
    T((char *)"abc", (char *)"cde", 2);
    T((char *)"abc", (char *)"ccc", 2);
    T((char *)"abc", a, 0);
    T((char *)"\xff\x80 abc", a, 2);
    T(s, (char *)"\xff", 254);
}
