#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

using namespace testing::ext;
class Log1pl : public testing::Test {};

static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "crlibm/log1p.h"
#include "sanity/log1p.h"
#include "special/log1p.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/log1pl.h"
#include "special/log1pl.h"

#endif
};

/**
 * @tc.name      : Log1plTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Log1pl, Log1plTest, Function | MediumTest | Level2)
{
    long double y;
    float d;
    int e, i, err = 0;
    struct l_l *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = log1pl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s log1pl(%La)=%La, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrl(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            printf("%s:%d: %s log1pl(%La) want %La got %La ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
