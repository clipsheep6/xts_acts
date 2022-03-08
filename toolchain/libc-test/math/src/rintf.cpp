#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RintfSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RintfSuite
*/

using namespace std;
using namespace testing::ext;
class RintfSuite: public testing::Test {
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
 * @tc.name      : RintfSuite001
 * @tc.desc      : Test LroundSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct f_f t[] = {
#include "sanity/rintf.h"
#include "special/rintf.h"

};

HWTEST_F(RintfSuite, RintfTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	float y;
	float d;
	int e, i, err = 0;
	struct f_f *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = rintf(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
		if (!checkexceptall(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s rintf(%a)=%a, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrf(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s rintf(%a) want %a got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
