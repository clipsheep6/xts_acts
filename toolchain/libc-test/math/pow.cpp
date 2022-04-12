#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PowSuite : public testing::Test {};

// TODO: fix ldbl
static struct dd_d t[] = {
#include "crlibm/pow.h"
#include "ucb/pow.h"
#include "sanity/pow.h"
#include "special/pow.h"

};

/**
 * @tc.name      : PowTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PowSuite, PowTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    double y;
    float d;
    int e, i, err = 0;
    struct dd_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = pow(p->x, p->x2);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            if (fabs(y) < 0x1p-1022 && (e | INEXACT) == (INEXACT | UNDERFLOW))
                printf("X ");
            else
                err++;
            printf("%s:%d: bad fp exception: %s pow(%a,%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s pow(%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
