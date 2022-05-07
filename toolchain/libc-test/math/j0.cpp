#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct d_d t[] = {
#include "special/j0.h"
#include "sanity/j0.h"
};

using namespace testing::ext;
class J0 : public testing::Test {};

/**
 * @tc.name      : J0Test
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(J0, J0Test, Function | MediumTest | Level2)
{
    double y;
    float d;
    int e, i, err = 0; // bad;
    struct d_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = j0(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s j0(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            if (fabsf(d) < 0x1p52f)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s j0(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
