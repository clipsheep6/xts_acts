#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct f_i t[] = {
#include "special/llroundf.h"
#include "sanity/llroundf.h"
};

using namespace testing::ext;
class Llround : public testing::Test {};

/**
 * @tc.name      : LlroundfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Llround, LlroundfTest, Function | MediumTest | Level2)
{
    long long yi;
    int e, i, err = 0;
    struct f_i *p;

    for (i = 0; i < sizeof t / sizeof *t; i++) {
        p = t + i;

        if (p->r < 0) {
            continue;
        }
        fesetround(p->r);
        feclearexcept(FE_ALL_EXCEPT);
        yi = llroundf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e);
        if (!checkexcept(e, p->e, p->r) && (e | INEXACT) != p->e) {
            printf("%s:%d: bad fp exception: %s llroundf(%a)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s llroundf(%a) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
