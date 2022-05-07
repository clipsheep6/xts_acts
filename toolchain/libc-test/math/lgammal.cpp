#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct l_li t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/lgamma.h"
#include "special/lgamma.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/lgammal.h"
#include "special/lgammal.h"

#endif
};

using namespace testing::ext;
class Lgammal : public testing::Test {};

/**
 * @tc.name      : LgammalTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Lgammal, LgammalTest, Function | MediumTest | Level2)
{
    int yi;
    long double y;
    float d;
    int e, i, err = 0;
    struct l_li *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = lgammal(p->x);
        yi = signgam;
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s lgammal(%La)=%La,%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE((p->r == RN && fabs(d) > 2) ||
        (!isnan(p->x) && p->x != -inf && !(p->e & DIVBYZERO) && yi != p->i));
        if ((p->r == RN && fabs(d) > 2) || (!isnan(p->x) && p->x != -inf && !(p->e & DIVBYZERO) && yi != p->i)) {
            printf("%s:%d: %s lgammal(%La) want %La,%lld got %La,%d ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d - p->dy, p->dy);
            err++;
        }
    }
}
