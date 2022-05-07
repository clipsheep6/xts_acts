#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct fff_f t[] = {
#include "special/fmaf.h"
#include "sanity/fmaf.h"
};

using namespace testing::ext;
class Fmaf : public testing::Test {};

/**
 * @tc.name      : FmafTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Fmaf, FmafTest, Function | MediumTest | Level2)
{
    float y;
    float d;
    int e, i, err = 0;
    struct fff_f *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = fmaf(p->x, p->x2, p->x3);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        /* do not check inexact by default */
#if defined CHECK_INEXACT || defined CHECK_INEXACT_OMISSION
        if (!checkexceptall(e, p->e, p->r)) {
#else
        EXPECT_FALSE(!checkexceptall(e | INEXACT, p->e | INEXACT, p->r));
        if (!checkexceptall(e | INEXACT, p->e | INEXACT, p->r)) {
#endif
            printf("%s:%d: bad fp exception: %s fmaf(%a,%a,%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s fmaf(%a,%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
