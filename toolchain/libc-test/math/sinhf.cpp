#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct f_f t[] = {
#include "ucb/sinhf.h"
#include "sanity/sinhf.h"
#include "special/sinhf.h"

};

using namespace testing::ext;
class Sinhf : public testing::Test {};

/**
 * @tc.name      : SinhfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Sinhf, SinhfTest, Function | MediumTest | Level2)
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
        y = sinhf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s sinhf(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            if (p->r != RN)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s sinhf(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
