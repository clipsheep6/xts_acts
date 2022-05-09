#include <cstring>
#include <securec.h>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class StringStrchr : public testing::Test {};

static char buf[512];

static void *aligned(void *p)
{
    int n = 64;
    return reinterpret_cast<void*>((reinterpret_cast<uintptr_t>(p) + n - 1) & -n);
}

static void *aligncpy(void *p, size_t len, size_t a)
{
    return memcpy(reinterpret_cast<char*>(aligned(buf))+a, p, len);
}

static void  N(string s_s, char c)
{
    const char *s = s_s.c_str();
    int align, n = 8;
    for (align = 0; align < n; align++) {
        char *p = reinterpret_cast<char *>(aligncpy(const_cast<char *>(s), sizeof s, align));
        char *q = strchr(p, c);
        EXPECT_FALSE(q) << "strchr(" << s << "," << c
                        << ")" << " with align=" << align << " returned str+" << q-p << ", wanted 0"<< endl;
    }
}

#define T(s, c, n) do { \
    int align; \
    for (align = 0; align < 8; align++) { \
        char *p = reinterpret_cast<char *>(aligncpy(const_cast<char *>(s), sizeof (s), align)); \
        char *q = strchr(p, c); \
        EXPECT_STRNE(q, nullptr) << "strchr("<< (s) << \
            "," << (c) << ")" << "with align=" << align << " returned 0, wanted str+" << (n) << endl; \
        EXPECT_EQ(q - p, n) << "strchr(" << (s) << "," << (c) << ")" << \
            "with align=" << align << " returned str+" << q-p << " wanted str+" << (n) << endl; \
    } \
} while (0)

/**
 * @tc.name      : StringStrchrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringStrchr, StringStrchrTest, Function | MediumTest | Level2)
{
    int i, n1 = 128, n2 = 256;
    char a[128];
    char s[256];
    
    for (i = 0; i < n1; i++) {
        a[i] = (i+1) & (n1 - 1);
    }
    for (i = 0; i < n2; i++) {
        *(reinterpret_cast<unsigned char*>(s)+i) = i+1;
    }
    N(string("\0aaa"), 'a');
    N(string("a\0bb"), 'b');
    N(string("ab\0c"), 'c');
    N(string("abc\0d"), 'd');
    N(string("abc abc\0x"), 'x');
    N(string(a), 128);
    N(string(a), 255);
    T("", 0, 0);
    T("a", 'a', 0);
    T("a", ('a'+256), 0);
    T("a", 0, 1);
    T("abb", 'b', 1);
    T("aabb", 'b', 2);
    T("aaabb", 'b', 3);
    T("aaaabb", 'b', 4);
    T("aaaaabb", 'b', 5);
    T("aaaaaabb", 'b', 6);
    T("abc abc", 'c', 2);
    T(s, 1, 0);
    T(s, 2, 1);
    T(s, 10, 9);
    T(s, 11, 10);
    T(s, 127, 126);
    T(s, 128, 127);
    T(s, 255, 254);
    T(s, 0, 255);
}
