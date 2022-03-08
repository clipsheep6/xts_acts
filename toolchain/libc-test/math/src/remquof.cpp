#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RemquofSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RemquofSuite
*/

using namespace std;
using namespace testing::ext;
class RemquofSuite: public testing::Test {
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
 * @tc.name      : RemquofSuite001
 * @tc.desc      : Test LroundSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct ff_fi t[] = {
#include "sanity/remquof.h"
#include "special/remquof.h"
};

HWTEST_F(RemquofSuite, RemquofTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	int yi;
	float y;
	float d;
	int e, i, err = 0;
	struct ff_fi *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = remquof(p->x, p->x2, &yi);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s remquof(%a,%a)=%a,%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r) ||
		(!isnan(p->y) && (yi & 7) != (p->i & 7)) ||
		(!isnan(p->y) && (yi < 0) != (p->i < 0)));

		if (!checkcr(y, p->y, p->r) ||
		(!isnan(p->y) && (yi & 7) != (p->i & 7)) ||
		(!isnan(p->y) && (yi < 0) != (p->i < 0))) {
			printf("%s:%d: %s remquof(%a,%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, p->i, y, yi, d, d-p->dy, p->dy);
			err++;
		}
	}
}
