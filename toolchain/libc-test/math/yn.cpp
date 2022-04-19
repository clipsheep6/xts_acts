#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct di_d t[] = {
#include "sanity/yn.h"
#include "special/yn.h"
};

using namespace testing::ext;
class Yn : public testing::Test {};

/**
 * @tc.name      : YnTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Yn, YnTest, Function | MediumTest | Level2)
{
    double y;
    float d;
    int e, i, err = 0;
    struct di_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = yn(p->i, p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s yn(%lld, %a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->i, p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE((!(p->x < 0) && !checkulp(d, p->r)) || (p->x < 0 && !isnan(y) && y != -inf));
        if ((!(p->x < 0) && !checkulp(d, p->r)) || (p->x < 0 && !isnan(y) && y != -inf)) {
            printf("%s:%d: %s yn(%lld, %a) want %a got %a, ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->i, p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
