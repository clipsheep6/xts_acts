#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct f_f t[] = {
#include "sanity/j0f.h"
#include "special/j0f.h"

};

using namespace testing::ext;
class J0f : public testing::Test {};

/**
 * @tc.name      : J0fTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(J0f, J0fTest, Function | MediumTest | Level2)
{
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
        y = j0f(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s j0f(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        if (!checkulp(d, p->r)) {
            if (fabsf(d) < 0x1p23f)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s j0f(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
