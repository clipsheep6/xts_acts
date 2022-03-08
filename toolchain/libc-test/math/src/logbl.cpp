#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LogblSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LogblSuite
*/

using namespace std;
using namespace testing::ext;
class LogblSuite: public testing::Test {
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
 * @tc.name      : LogblSuite001
 * @tc.desc      : Test LogblSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/logb.h"
#include "special/logb.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/logbl.h"
#include "special/logbl.h"

#endif
};

HWTEST_F(LogblSuite, LogblTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long double y;
	float d;
	int e, i, err = 0;
	struct l_l *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = logbl(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
		if (!checkexceptall(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s logbl(%La)=%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s logbl(%La) want %La got %La ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
