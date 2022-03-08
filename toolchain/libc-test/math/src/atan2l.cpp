#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Atan2lSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Atan2lSuite
*/

using namespace std;
using namespace testing::ext;
class Atan2lSuite: public testing::Test {
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
 * @tc.name      : Atan2lSuite001
 * @tc.desc      : Test Atan2lSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct ll_l t[] = {
#if LDBL_MANT_DIG == 53
#include "ucb/atan2.h"
#include "sanity/atan2.h"
#include "special/atan2.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/atan2l.h"
#include "special/atan2l.h"

#endif
};

HWTEST_F(Atan2lSuite, Atan2lTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long double y;
	float d;
	int e, i, err = 0;
	struct ll_l *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = atan2l(p->x, p->x2);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s atan2l(%La,%La)=%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		EXPECT_FALSE(!checkulp(d, p->r));
		if (!checkulp(d, p->r)) {
			printf("%s:%d: %s atan2l(%La,%La) want %La got %La ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
