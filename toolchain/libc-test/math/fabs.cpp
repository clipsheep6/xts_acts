#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class FabsSuite : public testing::Test {};

static struct d_d t[] = {
#include "ucb/fabs.h"
#include "sanity/fabs.h"
#include "special/fabs.h"

};

/**
 * @tc.name      : FabsTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(FabsSuite, FabsTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    double y;
    float d;
    int e, i, err = 0;
    struct d_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = fabs(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
        if (!checkexceptall(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s fabs(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s fabs(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
