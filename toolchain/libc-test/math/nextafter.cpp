#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct dd_d t[] = {
#include "sanity/nextafter.h"
#include "special/nextafter.h"

};

using namespace testing::ext;
class Nextafter : public testing::Test {};

/**
 * @tc.name      : NextafterTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Nextafter, NextafterTest, Function | MediumTest | Level2)
{
    double y;
    float d;
    int e, i, err = 0;
    struct dd_d *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        y = nextafter(p->x, p->x2);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
        if (!checkexceptall(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s nextafter(%a,%a)=%a, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        d = ulperr(y, p->y, p->dy);
        EXPECT_FALSE(!checkcr(y, p->y, p->r));
        if (!checkcr(y, p->y, p->r)) {
            printf("%s:%d: %s nextafter(%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
                   p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d - p->dy, p->dy);
            err++;
        }
    }
}
