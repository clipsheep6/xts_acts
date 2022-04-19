#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct l_i t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/llrint.h"
#include "special/llrint.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/llrintl.h"
#include "special/llrintl.h"

#endif
};

using namespace testing::ext;
class Llrintl : public testing::Test {};

/**
 * @tc.name      : LlrintlTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Llrintl, LlrintlTest, Function | MediumTest | Level2)
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
        yi = llrintl(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s llrintl(%La)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s llrintl(%La) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
