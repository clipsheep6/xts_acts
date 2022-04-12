#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#define _XOPEN_SOURCE 700
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class LlrintfSuite : public testing::Test {};

static struct f_i t[] = {
#include "sanity/llrintf.h"
#include "special/llrintf.h"

};

/**
 * @tc.name      : LlrintfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(LlrintfSuite, LlrintfTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    long long yi;
    int e, i, err = 0;
    struct f_i *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        yi = llrintf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s llrintf(%a)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s llrintf(%a) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
