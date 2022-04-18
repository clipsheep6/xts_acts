#include <cstdio>
#include <cstdlib>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Random : public testing::Test {};

/* error p ~ 1.6e-6 */
static int chkmissing(long *x)
{
    int d[8] = {0};
    int i;
    for (i = 0; i < 100; i++)
        d[x[i] % 8]++;
    for (i = 0; i < 8; i++)
        if (d[i] == 0)
            return 1;
    return 0;
}

/* error p ~ 4e-6 */
static int chkrepeat(long *x)
{
    int i, j;
    for (i = 0; i < 100; i++)
        for (j = 0; j < i; j++)
            if (x[i] == x[j])
                return 1;
    return 0;
}

/* error p ~ 1e-6 */
static unsigned orx;
static int chkones(long *x)
{
    int i;
    orx = 0;
    for (i = 0; i < 20; i++)
        orx |= x[i];
    return orx != 0x7fffffff;
}

void checkseed(unsigned seed, long *x)
{
    int i;
    srandom(seed);
    for (i = 0; i < 100; i++)
        x[i] = random() ;
    EXPECT_FALSE(chkmissing(x)) << "weak seed " << seed << ", missing pattern in low bits" << endl;
    EXPECT_FALSE(chkrepeat(x)) << "weak seed " << seed << ", exact repeats" << endl;
    EXPECT_FALSE(chkones(x))<< "weak seed " << seed << ", or pattern: 0x" << orx << endl;;
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
    int i;
    char state[128];
    char *p;
    char *q;

    for (i = 0; i < 100; i++)
        x[i] = random();
    p = initstate(1, state, sizeof state);
    for (i = 0; i < 100; i++)
        EXPECT_EQ(x[i], (y = random())) 
            << "initstate(1) is not default: (" << i << ") default: " << x[i] << ", seed1: " << y << endl;
    for (i = 0; i < 10; i++) {
        z = random();
        q = setstate(p);
        EXPECT_EQ(z, (y = random())) << "setstate failed (" << i << ") orig: " << z << ", reset: " << y << endl;
        p = setstate(q);
    }
    srandom(1);
    for (i = 0; i < 100; i++)
        EXPECT_EQ(x[i], (y = random())) 
            << "srandom(1) is not default: (" << i << ") default: " << x[i] << ", seed1: " << y << endl;
    checkseed(0x7fffffff, x);
    for (i = 0; i < 10; i++)
        checkseed(i, x);
}
