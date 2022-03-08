#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Log1pSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Log1pSuite
*/

using namespace std;
using namespace testing::ext;
class Log1pSuite: public testing::Test {
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
 * @tc.name      : Log1pSuite001
 * @tc.desc      : Test Log1pSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct d_d t[] = {
#include "crlibm/log1p.h"
#include "sanity/log1p.h"
#include "special/log1p.h"

};

HWTEST_F(Log1pSuite, Log1pTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	double y;
	float d;
	int e, i, err = 0;
	struct d_d *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = log1p(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s log1p(%a)=%a, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkulp(d, p->r));
		if (!checkulp(d, p->r)) {
			printf("%s:%d: %s log1p(%a) want %a got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
