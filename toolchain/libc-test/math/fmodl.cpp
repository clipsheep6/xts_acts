#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct ll_l t[] = {
#if LDBL_MANT_DIG == 53
#include "ucb/fmod.h"
#include "sanity/fmod.h"
#include "special/fmod.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/fmodl.h"
#include "special/fmodl.h"

#endif
};

using namespace testing::ext;
class Fmodl : public testing::Test {};

/**
 * @tc.name      : FmodlTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Fmodl, FmodlTest, Function | MediumTest | Level2)
{
    long double y;
    float d;
    int e, i, err = 0;
    struct ll_l *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = fmodl(p->x, p->x2);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s fmodl(%La,%La)=%La, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s fmodl(%La,%La) want %La got %La ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
