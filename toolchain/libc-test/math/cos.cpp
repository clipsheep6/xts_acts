#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct d_d t[] = {
    #include "ucb/cos.h"
    #include "sanity/cos.h"
    #include "special/cos.h"
    #include "crlibm/cos.h"
};

using namespace std;
using namespace testing::ext;
class Cos : public testing::Test {};

/**
 * @tc.name      : CosTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Cos, CosTest, Function | MediumTest | Level2)
{
    double y;
    float d;
    int e, i, err = 0;
    struct d_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = cos(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s cos(%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkulp(d, p->r));
        if (!checkulp(d, p->r)) {
            if (p->r != RN)
                printf("X ");
            else
                err++;
            printf("%s:%d: %s cos(%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->y, y, d, d - p->dy, p->dy);
        }
    }
}
