#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class LroundfSuite : public testing::Test {};

static struct f_i t[] = {
#include "sanity/lroundf.h"
#include "special/lroundf.h"

};

/**
 * @tc.name      : LroundfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(LroundfSuite, LroundfTest, Function | MediumTest | Level2)
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
        yi = lroundf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e);
        if (!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e) {
            printf("%s:%d: bad fp exception: %s lroundf(%a)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s lroundf(%a) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
