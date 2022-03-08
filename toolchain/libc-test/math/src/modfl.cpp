#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ModflSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ModflSuite
*/

using namespace std;
using namespace testing::ext;
class ModflSuite: public testing::Test {
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
 * @tc.name      : ModflSuite001
 * @tc.desc      : Test LroundSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_ll t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/modf.h"
#include "special/modf.h"
#elif LDBL_MANT_DIG == 64
#include "sanity/modfl.h"
#include "special/modfl.h"
#endif
};


HWTEST_F(ModflSuite, ModflTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long double y, yi;
	float d, di;
	int e, i, err = 0;
	struct l_ll *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = modfl(p->x, &yi);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		/* TODO: fix inexact */
		EXPECT_FALSE(!checkexceptall(e|INEXACT, p->e|INEXACT, p->r));
		if (!checkexceptall(e|INEXACT, p->e|INEXACT, p->r)) {
			printf("%s:%d: bad fp exception: %s modf(%La)=%La,%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		di = ulperr(yi, p->y2, p->dy2);
		EXPECT_FALSE(!checkcr(y, p->y, p->r) || !checkcr(yi, p->y2, p->r));
		if (!checkcr(y, p->y, p->r) || !checkcr(yi, p->y2, p->r)) {
			printf("%s:%d: %s modf(%La) want %La,%La got %La,%La, ulperr %.3f = %a + %a, %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, y, yi, d, d-p->dy, p->dy, di, di-p->dy2, p->dy2);
			err++;
		}
	}
}
