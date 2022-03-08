#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FmalSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FmalSuite
*/

using namespace std;
using namespace testing::ext;
class FmalSuite: public testing::Test {
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
 * @tc.name      : FmalSuite001
 * @tc.desc      : Test FmalSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct lll_l t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/fma.h"
#include "special/fma.h"
#elif LDBL_MANT_DIG == 64
#include "sanity/fmal.h"
#include "special/fmal.h"
#endif
};


HWTEST_F(FmalSuite, FmalTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long double y;
	float d;
	int e, i, err = 0;
	struct lll_l *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = fmal(p->x, p->x2, p->x3);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		/* do not check inexact by default */
#if defined CHECK_INEXACT || defined CHECK_INEXACT_OMISSION
		if (!checkexceptall(e, p->e, p->r)) {
#else
		EXPECT_FALSE(!checkexceptall(e|INEXACT, p->e|INEXACT, p->r));
		if (!checkexceptall(e|INEXACT, p->e|INEXACT, p->r)) {
#endif
			printf("%s:%d: bad fp exception: %s fmal(%La,%La,%La)=%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s fmal(%La,%La,%La) want %La got %La ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
