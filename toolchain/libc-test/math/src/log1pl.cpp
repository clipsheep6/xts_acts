#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Log1plSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Log1plSuite
*/

using namespace std;
using namespace testing::ext;
class Log1plSuite: public testing::Test {
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
 * @tc.name      : Log1plSuite001
 * @tc.desc      : Test Log1plSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_l t[] = {
#if LDBL_MANT_DIG == 53
#include "crlibm/log1p.h"
#include "sanity/log1p.h"
#include "special/log1p.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/log1pl.h"
#include "special/log1pl.h"

#endif
};

HWTEST_F(Log1plSuite, Log1plTest, Function | MediumTest | Level2)
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
		y = log1pl(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s log1pl(%La)=%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		EXPECT_FALSE(!checkulp(d, p->r));
		if (!checkulp(d, p->r)) {
			printf("%s:%d: %s log1pl(%La) want %La got %La ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
