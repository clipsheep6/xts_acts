#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "ucb/tanh.h"
#include "sanity/tanh.h"
#include "special/tanh.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/tanhl.h"
#include "special/tanhl.h"

#endif
};

using namespace testing::ext;
class Tanhl : public testing::Test {};

/**
 * @tc.name      : TanhlTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Tanhl, TanhlTest, Function | MediumTest | Level2)
{
    long double y;
    float d;
    int e, i, err = 0;
    struct l_l *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = tanhl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s tanhl(%La)=%La, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s tanhl(%La) want %La got %La ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
