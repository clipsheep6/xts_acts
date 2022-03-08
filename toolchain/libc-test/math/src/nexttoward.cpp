#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "NexttowardSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  NexttowardSuite
*/

using namespace std;
using namespace testing::ext;
class NexttowardSuite: public testing::Test {
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
 * @tc.name      : NexttowardSuite001
 * @tc.desc      : Test LroundSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
// TODO: fix ldbl
static struct ll_l t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/nexttoward.h"
#include "special/nexttoward.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/nexttoward.h"
#include "special/nexttoward.h"

#endif
};

HWTEST_F(NexttowardSuite, NexttowardTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	double y;
	float d;
	int e, i, err = 0;
	struct ll_l *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
			
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = nexttoward(p->x, p->x2);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
		if (!checkexceptall(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s nexttoward(%La,%La)=%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s nexttoward(%La,%La) want %La got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
