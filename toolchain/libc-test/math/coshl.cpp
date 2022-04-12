#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class CoshlSuite : public testing::Test {};

static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "crlibm/cosh.h"
#include "ucb/cosh.h"
#include "sanity/cosh.h"
#include "special/cosh.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/coshl.h"
#include "special/coshl.h"

#endif
};

/**
 * @tc.name      : CoshlTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(CoshlSuite, CoshlTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
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
        y = coshl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s coshl(%La)=%La, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s coshl(%La) want %La got %La ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
