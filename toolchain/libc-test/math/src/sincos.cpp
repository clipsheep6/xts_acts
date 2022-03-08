#define _GNU_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SincosSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SincosSuite
*/

using namespace std;
using namespace testing::ext;
class SincosSuite: public testing::Test {
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
 * @tc.name      : SincosSuite001
 * @tc.desc      : Test LSincosSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct d_dd t[] = {
#include "sanity/sincos.h"
#include "special/sincos.h"
};

HWTEST_F(SincosSuite, SincosTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	double ysin, ycos;
	float dsin, dcos;
	int e, i, err = 0;
	struct d_dd *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		sincos(p->x, &ysin, &ycos);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s sincos(%a)=%a,%a, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		dsin = ulperr(ysin, p->y, p->dy);
		dcos = ulperr(ycos, p->y2, p->dy2);
		EXPECT_FALSE(!checkulp(dsin, p->r) || !checkulp(dcos, p->r));
		if (!checkulp(dsin, p->r) || !checkulp(dcos, p->r)) {
			printf("%s:%d: %s sincos(%a) want %a,%a got %a,%a, ulperr %.3f = %a + %a, %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->y2, ysin, ycos,
				dsin, dsin-p->dy, p->dy, dcos, dcos-p->dy2, p->dy2);
			err++;
		}
	}
}
