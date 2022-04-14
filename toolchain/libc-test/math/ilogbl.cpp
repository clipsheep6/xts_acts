#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

using namespace testing::ext;
class Ilogbl : public testing::Test {};

static struct l_i t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/ilogb.h"
#include "special/ilogb.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/ilogbl.h"
#include "special/ilogbl.h"

#endif
};

/**
 * @tc.name      : IlogblTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Ilogbl, IlogblTest, Function | MediumTest | Level2)
{
    long long yi;
    int e, i, err = 0;
    struct l_i *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        yi = ilogbl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s ilogbl(%La)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_EQ(yi, p->i);
        if (yi != p->i) {
            printf("%s:%d: %s ilogbl(%La) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
