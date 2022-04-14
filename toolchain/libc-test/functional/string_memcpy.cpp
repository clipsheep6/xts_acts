#include <cstring>
#include <cstdlib>
#include <cstdint>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class StringMemcpy : public testing::Test {};

static char buf[512];

static void *(*volatile pmemcpy)(void *restrict, const void *restrictt, size_t);

static void *aligned(void *p)
{
    return (void *)(((uintptr_t)p + 63) & -64);
}

#define N 80
static void test_align(int dalign, int salign, int len)
{
    char *src = (char *)aligned(buf);
    char *dst = (char *)aligned(buf + 128);
    char *want = (char *)aligned(buf + 256);
    char *p;
    int i;

    if (salign + len > N || dalign + len > N)
        abort();
    for (i = 0; i < N; i++) {
        src[i] = '#';
        dst[i] = want[i] = ' ';
    }
    for (i = 0; i < len; i++)
        src[salign + i] = want[dalign + i] = '0' + i;
    p = (char *)pmemcpy(dst + dalign, src + salign, len);
    EXPECT_STREQ(p, dst + dalign) << "memcpy(" << dst + dalign << ",...) returned " << p << endl;
    for (i = 0; i < N; i++)
        if (dst[i] != want[i]) {
            EXPECT_EQ(dst[i], want[i]) << "memcpy(align " << dalign << ", align " << salign << ", " << len << ") failed" << endl;
            t_printf("got : %.*s\n", dalign + len + 1, dst);
            t_printf("want: %.*s\n", dalign + len + 1, want);
            break;
        }
}

/**
 * @tc.name      : StringMemcpyTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StringMemcpy , StringMemcpyTest , Function | MediumTest | Level2)
{
    int i, j, k;

    pmemcpy = memcpy;

    for (i = 0; i < 16; i++)
        for (j = 0; j < 16; j++)
            for (k = 0; k < 64; k++)
                test_align(i, j, k);
}
