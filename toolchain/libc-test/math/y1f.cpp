#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Y1fSuite : public testing::Test {};

static struct f_f t[] = {
#include "sanity/y1f.h"
#include "special/y1f.h"

};

/**
 * @tc.name      : Y1fTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Y1fSuite, Y1fTest, Function | MediumTest | Level2)
{
    //#pragma STDC FENV_ACCESS ON
    float y;
    float d;
    int e, i, err = 0;
    struct f_f *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = y1f(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s y1f(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        EXPECT_FALSE((!(p->x < 0) && !checkulp(d, p->r)) || (p->x < 0 && !isnan(y) && y != -inf));
        if ((!(p->x < 0) && !checkulp(d, p->r)) || (p->x < 0 && !isnan(y) && y != -inf)) {
            printf("%s:%d: %s y1f(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
