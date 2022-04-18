#include <cstring>
#include <cstdlib>
#include <cstdint>

#include "gtest/gtest.h"

#include "test.h"

#define N 500

using namespace std;
using namespace testing::ext;
class StringMemset : public testing::Test {};

static char buf[N];
static char buf2[N];

static void *(*volatile pmemset)(void *, int, size_t);

static char *aligned(void *p)
{
    return (char *)(((uintptr_t)p + 63) & -64);
}

static void test_align(int align, int len)
{
    char *s = aligned(buf + 64) + align;
    char *want = aligned(buf2 + 64) + align;
    char *p;
    int i;

    if (len + 64 > buf + N - s || len + 64 > buf2 + N - want)
        abort();
    for (i = 0; i < N; i++)
        buf[i] = buf2[i] = ' ';
    for (i = 0; i < len; i++)
        want[i] = '#';
    p = (char *)pmemset(s, '#', len);
    EXPECT_EQ(p, s) << "memset(" << s << ",...) returned " << p << endl;
    for (i = -64; i < len + 64; i++)
        if (s[i] != want[i]) {
            EXPECT_EQ(s[i], want[i]) << "memset(align " 
                << align << ", '#', " << len << ") failed at pos " << i << endl;
            t_printf("got : '%.*s'\n", len + 128, s - 64);
            t_printf("want: '%.*s'\n", len + 128, want - 64);
            break;
        }
}

static void test_value(int c)
{
    int i;

    pmemset(buf, c, 10);
    for (i = 0; i < 10; i++)
        ASSERT_EQ((unsigned char)buf[i], (unsigned char)c);
}

/**
 * @tc.name      : StringMemsetTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringMemset, StringMemsetTest, Function | MediumTest | Level2)
{
    int i, j;

    pmemset = memset;

    for (i = 0; i < 64; i++)
        for (j = 0; j < N - 256; j++)
            test_align(i, j);

    test_value('c');
    test_value(0);
    test_value(-1);
    test_value(-5);
    test_value(0xab);
}
