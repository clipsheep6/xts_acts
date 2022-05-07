#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#include "mtest.h"

static struct f_i t[] = {
#include "special/lrintf.h"
#include "sanity/lrintf.h"
};

using namespace testing::ext;
class Lrintf : public testing::Test {};

/**
 * @tc.name      : LrintfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Lrintf, LrintfTest, Function | MediumTest | Level2)
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
        yi = lrintf(p->x);
        e = fetestexcept(INEXACT | INVALID | DIVBYZERO | UNDERFLOW | OVERFLOW);

        EXPECT_FALSE(!checkexcept(e, p->e, p->r));
        if (!checkexcept(e, p->e, p->r)) {
            printf("%s:%d: bad fp exception: %s lrintf(%a)=%lld, want %s",
                   p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
            printf(" got %s\n", estr(e));
            err++;
        }
        EXPECT_FALSE(!(p->e & INVALID) && yi != p->i);
        if (!(p->e & INVALID) && yi != p->i) {
            printf("%s:%d: %s lrintf(%a) want %lld got %lld\n",
                   p->file, p->line, rstr(p->r), p->x, p->i, yi);
            err++;
        }
    }
}
