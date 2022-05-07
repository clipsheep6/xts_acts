#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct d_di t[] = {
#include "special/lgamma.h"
#include "sanity/lgamma.h"
};

using namespace testing::ext;
class Lgamma : public testing::Test {};

/**
 * @tc.name      : LgammaTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Lgamma, LgammaTest, Function | MediumTest | Level2)
{
    int yi;
    double y;
    float d;
    int e, i, bad, err = 0;
    struct d_di *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = lgamma(p->x);
        yi = signgam;
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s lgamma(%a)=%a,%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        bad = !isnan(p->x) && p->x != -inf && !(p->e & DIVBYZERO) && yi != p->i;
        EXPECT_FALSE(bad || !checkulp(d, p->r));
        if (bad || !checkulp(d, p->r)) {
            if (!bad && fabsf(d) < 11.0f)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s lgamma(%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d - p->dy, p->dy);
        }
    }
}
