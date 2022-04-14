#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

using namespace testing::ext;
class Frexp : public testing::Test {};

static struct d_di t[] = {
#include "sanity/frexp.h"
#include "special/frexp.h"

};

/**
 * @tc.name      : FrexpTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Frexp, FrexpTest, Function | MediumTest | Level2)
{
    int yi;
    double y;
    float d;
    int e, i, err = 0;
    struct d_di *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = frexp(p->x, &yi);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
        if (!checkexceptall(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s frexp(%a)=%a,%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r) || (isfinite(p->x) && yi != p->i));
        if (!checkcr(y, p->y, p->r) || (isfinite(p->x) && yi != p->i)) {
            printf("%s:%d: %s frexp(%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d - p->dy, p->dy);
            err++;
        }
    }
}
