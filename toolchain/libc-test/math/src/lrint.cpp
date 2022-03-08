#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LrintSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LrintSuite
*/

using namespace std;
using namespace testing::ext;
class LrintSuite: public testing::Test {
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
 * @tc.name      : LrintSuite001
 * @tc.desc      : Test LrintSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct d_i t[] = {
#include "sanity/lrint.h"
#include "special/lrint.h"

};

HWTEST_F(LrintSuite, LrintTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long long yi;
	int e, i, err = 0;
	struct d_i *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		yi = lrint(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s lrint(%a)=%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		EXPECT_FALSE(!(p->e&INVALID) && yi != p->i);
		if (!(p->e&INVALID) && yi != p->i) {
			printf("%s:%d: %s lrint(%a) want %lld got %lld\n",
				p->file, p->line, rstr(p->r), p->x, p->i, yi);
			err++;
		}
	}
}
