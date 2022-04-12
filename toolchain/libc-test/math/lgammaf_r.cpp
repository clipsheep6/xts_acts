#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#define _GNU_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class LgammafrSuite : public testing::Test {};

static struct f_fi t[] = {
#include "sanity/lgammaf_r.h"
#include "special/lgammaf_r.h"

};

/**
 * @tc.name      : LgammafrTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(LgammafrSuite, LgammafrTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    int yi;
    double y;
    float d;
    int e, i, bad, err = 0;
    struct f_fi *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = lgammaf_r(p->x, &yi);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s lgammaf_r(%a)=%a,%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        bad = !isnan(p->x) && p->x != -inf && !(p->e & DIVBYZERO) && yi != p->i;
        EXPECT_FALSE(bad || !checkulp(d, p->r));
        if (bad || !checkulp(d, p->r)) {
            if (!bad && fabsf(d) < 2.0f)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s lgammaf_r(%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d - p->dy, p->dy);
        }
    }
}
