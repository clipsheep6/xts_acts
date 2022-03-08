#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 10
#include <stdio.h>
#include "mtest.h"
//#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "J0fSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  J0fSuite
*/

using namespace std;
using namespace testing::ext;
class J0fSuite: public testing::Test {
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
 * @tc.name      : J0fSuite001
 * @tc.desc      : Test J0fSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct f_f t[] = {
#include "sanity/j0f.h"
#include "special/j0f.h"

};
HWTEST_F(J0fSuite, J0fTest, Function | MediumTest | Level2)
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
		y = j0f(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s j0f(%a)=%a, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrf(y, p->y, p->dy);
		if (!checkulp(d, p->r)) {
			if (fabsf(d) < 0x1p23f)
				printf("X ");
			else
				err++;
			printf("%s:%d: %s j0f(%a) want %a got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, y, d, d-p->dy, p->dy);
		}
	}
}
