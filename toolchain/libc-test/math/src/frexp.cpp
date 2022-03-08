#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FrexpSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FrexpSuite
*/

using namespace std;
using namespace testing::ext;
class FrexpSuite: public testing::Test {
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
 * @tc.name      : FrexpSuite001
 * @tc.desc      : Test FrexpSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct d_di t[] = {
#include "sanity/frexp.h"
#include "special/frexp.h"

};

HWTEST_F(FrexpSuite, FrexpTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	int yi;
	double y;
	float d;
	int e, i, err = 0;
	struct d_di *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = frexp(p->x, &yi);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexceptall(e, p->e, p->r));
		if (!checkexceptall(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s frexp(%a)=%a,%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r) || (isfinite(p->x) && yi != p->i));
		if (!checkcr(y, p->y, p->r) || (isfinite(p->x) && yi != p->i)) {
			printf("%s:%d: %s frexp(%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d-p->dy, p->dy);
			err++;
		}
	}
}
