//#define _GNU_SOURCE
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class ErfclSuite : public testing::Test {};

static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/erfc.h"
#include "special/erfc.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/erfcl.h"
#include "special/erfcl.h"

#endif
};

/**
 * @tc.name      : ErfclTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ErfclSuite, ErfclTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    long double y;
    float d;
    int e, i;
    struct l_l *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = erfcl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s erfcl(%La)=%La, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s erfcl(%La) want %La got %La ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
