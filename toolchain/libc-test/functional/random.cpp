#include <cstdio>
#include <cstdlib>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Random : public testing::Test {};

/* error p ~ 1.6e-6 */
static int chkmissing(long *x)
{
    int i, n1 = 8, n2 = 100;
    int d[8] = {0};
    for (i = 0; i < n2; i++) {
        d[x[i] % n1]++;
    }
    for (i = 0; i < n1; i++) {
        if (d[i] == 0) {
            return 1;
        }
    }
    return 0;
}

/* error p ~ 4e-6 */
static int chkrepeat(long *x)
{
    int i, j, n1 = 100;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < i; j++) {
            if (x[i] == x[j]) {
                return 1;
            }
        }
    }
    return 0;
}

/* error p ~ 1e-6 */
static unsigned orx;
static int chkones(long *x)
{
    int i, n1 = 20;
    orx = 0;
    for (i = 0; i < n1; i++) {
        orx |= x[i];
    }
    return orx != 0x7fffffff;
}

static void checkseed(unsigned seed, long *x)
{
    int i, n1 = 100;
    srandom(seed);
    for (i = 0; i < n1; i++) {
        x[i] = random();
    }
    EXPECT_FALSE(chkmissing(x)) << "weak seed " << seed << ", missing pattern in low bits" << endl;
    EXPECT_FALSE(chkrepeat(x)) << "weak seed " << seed << ", exact repeats" << endl;
    EXPECT_FALSE(chkones(x))<< "weak seed " << seed << ", or pattern: 0x" << orx << endl;
}

/**
 * @tc.name      : RandomTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Random, RandomTest, Function | MediumTest | Level2)
{
    long x[100];
    long y, z;
    int i, n1 = 100, n2 = 10;
    char state[128];
    char *p;
    char *q;

    for (i = 0; i < n1; i++) {
        x[i] = random();
    }
    p = initstate(1, state, sizeof state);
    for (i = 0; i < n1; i++) {
        EXPECT_EQ(x[i], (y = random())) <<
            "initstate(1) is not default: (" << i << ") default: " << x[i] << ", seed1: " << y << endl;
    }
    for (i = 0; i < 10; i++) {
        z = random();
        q = setstate(p);
        EXPECT_EQ(z, (y = random())) << "setstate failed (" << i << ") orig: " << z << ", reset: " << y << endl;
        p = setstate(q);
    }
    srandom(1);
    for (i = 0; i < n1; i++) {
        EXPECT_EQ(x[i], (y = random())) <<
            "srandom(1) is not default: (" << i << ") default: " << x[i] << ", seed1: " << y << endl;
    }
    checkseed(0x7fffffff, x);
    for (i = 0; i < n2; i++) {
        checkseed(i, x);
    }
}
