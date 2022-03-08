#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FamSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FamSuite
*/

using namespace std;
using namespace testing::ext;
class FmaSuite: public testing::Test {
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
 * @tc.name      : FmaSuite001
 * @tc.desc      : Test FmalSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct ddd_d t[] = {
#include "sanity/fma.h"
#include "special/fma.h"
};

HWTEST_F(FmaSuite, FmaTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	double y;
	float d;
	int e, i, err = 0;
	struct ddd_d *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = fma(p->x, p->x2, p->x3);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		/* do not check inexact by default */
#if defined CHECK_INEXACT || defined CHECK_INEXACT_OMISSION
		if (!checkexceptall(e, p->e, p->r)) {
#else
		EXPECT_FALSE(!checkexceptall(e|INEXACT, p->e|INEXACT, p->r));
		if (!checkexceptall(e|INEXACT, p->e|INEXACT, p->r)) {
#endif
			printf("%s:%d: bad fp exception: %s fma(%a,%a,%a)=%a, want %s",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s fma(%a,%a,%a) want %a got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->x3, p->y, y, d, d-p->dy, p->dy);
			err++;
		}
	}
}
