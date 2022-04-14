#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

using namespace testing::ext;
class Y0f : public testing::Test {};

static struct f_f t[] = {
#include "sanity/y0f.h"
#include "special/y0f.h"

};

/**
 * @tc.name      : Y0fTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Y0f, Y0fTest, Function | MediumTest | Level2)
{
    float y;
    float d;
    int e, i, bad, err = 0;
    struct f_f *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = y0f(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s y0f(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        bad = p->x < 0 && !isnan(y) && y != -inf;
        EXPECT_FALSE(bad || (!(p->x < 0) && !checkulp(d, p->r)));
        if (bad || (!(p->x < 0) && !checkulp(d, p->r))) {
            if (!bad && fabsf(d) < 0x1p23f)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s y0f(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
