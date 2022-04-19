#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct ddd_d t[] = {
#include "sanity/fma.h"
#include "special/fma.h"
};

using namespace testing::ext;
class Fma : public testing::Test {};

/**
 * @tc.name      : FmaTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Fma, FmaTest, Function | MediumTest | Level2)
{
    double y;
    float d;
    int e, i, err = 0;
    struct ddd_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = fma(p->x, p->x2, p->x3);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        /* do not check inexact by default */
#if defined CHECK_INEXACT || defined CHECK_INEXACT_OMISSION
        if (!checkexceptall(e, p->e, p->r)) {
#else
        EXPECT_FALSE(!checkexceptall(e | INEXACT, p->e | INEXACT, p->r));
        if (!checkexceptall(e | INEXACT, p->e | INEXACT, p->r)) {
#endif
            printf("%s:%d: bad fp exception: %s fma(%a,%a,%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s fma(%a,%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
