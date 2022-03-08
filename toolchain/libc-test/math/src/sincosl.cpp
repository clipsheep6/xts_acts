#define _GNU_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SincoslSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SincoslSuite
*/

using namespace std;
using namespace testing::ext;
class SincoslSuite: public testing::Test {
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
 * @tc.name      : SincoslSuite001
 * @tc.desc      : Test LSincoslSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_ll t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/sincos.h"
#include "special/sincos.h"
#elif LDBL_MANT_DIG == 64
#include "sanity/sincosl.h"
#include "special/sincosl.h"
#endif
};

HWTEST_F(SincoslSuite, SincoslTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long double ysin, ycos;
	float dsin, dcos;
	int e, i, err = 0;
	struct l_ll *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		sincosl(p->x, &ysin, &ycos);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s sincosl(%La)=%La,%La, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		dsin = ulperr(ysin, p->y, p->dy);
		dcos = ulperr(ycos, p->y2, p->dy2);
		EXPECT_FALSE(!checkulp(dsin, p->r) || !checkulp(dcos, p->r));
		if (!checkulp(dsin, p->r) || !checkulp(dcos, p->r)) {
			printf("%s:%d: %s sincosl(%La) want %La,%La got %La,%La, ulperr %.3f = %a + %a, %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, ysin, ycos,
				dsin, dsin-p->dy, p->dy, dcos, dcos-p->dy2, p->dy2);
			err++;
		}
	}
}
