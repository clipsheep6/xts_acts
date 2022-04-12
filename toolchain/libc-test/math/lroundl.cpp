#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class LroundlSuite : public testing::Test {};

static struct l_i t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/lround.h"
#include "special/lround.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/lroundl.h"
#include "special/lroundl.h"

#endif
};

/**
 * @tc.name      : LroundlTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(LroundlSuite, LroundlTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    long long yi;
    int e, i, err = 0;
    struct l_i *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        yi = lroundl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e);
        if (!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e) {
            printf("%s:%d: bad fp exception: %s lroundl(%La)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s lroundl(%La) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
