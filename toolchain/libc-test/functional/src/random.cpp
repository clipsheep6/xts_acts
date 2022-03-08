#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <stdlib.h>
// #include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RandomSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RandomSuite
*/

using namespace std;
using namespace testing::ext;
class RandomSuite: public testing::Test {
protected:
// Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void){
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void){
    }
    // Preset action of the test case
    virtual void SetUp()
    {
    }
    // Cleanup action of the test case
    virtual void TearDown()
    {
    }
};

/**
 * @tc.name      : RandomSuite001
 * @tc.desc      : Test RandomSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

/* naive statistical checks */

/* error p ~ 1.6e-6 */
static int chkmissing(long *x)
{
	int d[8] = {0};
	int i;
	for (i = 0; i < 100; i++)
		d[x[i]%8]++;
	for (i = 0; i < 8; i++)
		if (d[i]==0)
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
		x[i] = random();
	EXPECT_FALSE(chkmissing(x));

	EXPECT_FALSE(chkrepeat(x));
	EXPECT_FALSE(chkones(x));
}

HWTEST_F(RandomSuite, RandomTest, Function | MediumTest | Level2)
{
    long x[100];
	long y,z;
	int i;
	char state[128];
	char *p;
	char *q;

	for (i = 0; i < 100; i++)
		x[i] = random();
	p = initstate(1, state, sizeof state);
	for (i = 0; i < 100; i++)
		EXPECT_EQ(x[i] , (y = random()));
	for (i = 0; i < 10; i++) {
		z = random();
		q = setstate(p);
		EXPECT_EQ(z , (y = random()));
		p = setstate(q);
	}
	srandom(1);
	for (i = 0; i < 100; i++)
		EXPECT_EQ(x[i] , (y = random()));
	checkseed(0x7fffffff, x);
	for (i = 0; i < 10; i++)
		checkseed(i, x);
}
