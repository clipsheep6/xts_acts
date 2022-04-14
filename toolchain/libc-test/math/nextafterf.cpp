#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

using namespace testing::ext;
class Nextafterf : public testing::Test {};

static struct ff_f t[] = {
#include "sanity/nextafterf.h"
#include "special/nextafterf.h"

};

/**
 * @tc.name      : NextafterfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Nextafterf, NextafterfTest, Function | MediumTest | Level2)
{
    float y;
    float d;
    int e, i, err = 0;
    struct ff_f *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = nextafterf(p->x, p->x2);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
        if (!checkexceptall(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s nextafterf(%a,%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperrf(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s nextafterf(%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
