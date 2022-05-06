#include <cstring>
#include <cstdlib>
#include <cstdint>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class StringMemset : public testing::Test {};

static int N = 500;
static char buf[500];
static char buf2[500];


static void *(*volatile pmemset)(void *, int, size_t);

static char *aligned(void *p)
{
    int n = 64;
    return reinterpret_cast<char*>((reinterpret_cast<uintptr_t>(p) + n - 1) & -n);
}

static void test_align(int align, int len)
{
    int i, n = 64, n2 = 128;
    char *s = aligned(buf + n) + align;
    char *want = aligned(buf2 + n) + align;
    char *p;

    ASSERT_FALSE(len + n > buf + N - s || len + n > buf2 + N - want);
    for (i = 0; i < N; i++) {
        buf[i] = buf2[i] = ' ';
    }
    for (i = 0; i < len; i++) {
        want[i] = '#';
    }
    p = (char *)pmemset(s, '#', len);
    EXPECT_EQ(p, s) << "memset(" << s << ",...) returned " << p << endl;
    for (i = -n; i < len + n; i++) {
        if (s[i] != want[i]) {
            EXPECT_EQ(s[i], want[i]) <<
                "memset(align " << align << ", '#', " << len << ") failed at pos " << i << endl;
            t_printf("got : '%.*s'\n", len + n2, s - n);
            t_printf("want: '%.*s'\n", len + n2, want - n);
            break;
        }
    }
}

static void test_value(int c)
{
    int i, n = 10;

    pmemset(buf, c, n);
    for (i = 0; i < n; i++) {
        ASSERT_EQ((unsigned char)buf[i], (unsigned char)c);
    }
}

/**
 * @tc.name      : StringMemsetTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringMemset, StringMemsetTest, Function | MediumTest | Level2)
{
    int i, j, n = 64, n2 = 256, n3 = -5;

    pmemset = memset;

    for (i = 0; i < n; i++) {
        for (j = 0; j < N - n2; j++) {
            test_align(i, j);
        }
    }

    test_value('c');
    test_value(0);
    test_value(-1);
    test_value(n3);
    test_value(0xab);
}
