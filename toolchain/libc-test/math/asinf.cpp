#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class AsinfSuite : public testing::Test {};

static struct f_f t[] = {
#include "ucb/asinf.h"
#include "sanity/asinf.h"
#include "special/asinf.h"

};

/**
 * @tc.name      : AsinfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(AsinfSuite, AsinfTest, Function | MediumTest | Level2)
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
        y = asinf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s asinf(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s asinf(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
