#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#define _GNU_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LgammarSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LgammarSuite
*/

using namespace std;
using namespace testing::ext;
class LgammarSuite: public testing::Test {
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
 * @tc.name      : LgammarSuite001
 * @tc.desc      : Test LgammarSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct d_di t[] = {
#include "sanity/lgamma_r.h"
#include "special/lgamma_r.h"

};

HWTEST_F(LgammarSuite, LgammarTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	int yi;
	double y;
	float d;
	int e, i, bad, err = 0;
	struct d_di *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = lgamma_r(p->x, &yi);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s lgamma_r(%a)=%a,%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperr(y, p->y, p->dy);
		bad = !isnan(p->x) && p->x!=-inf && !(p->e&DIVBYZERO) && yi != p->i;
		if (bad || !checkulp(d, p->r)) {
			if (!bad && fabsf(d) < 11.0f)
				printf("X ");
			else
				err++;
			printf("%s:%d: %s lgamma_r(%a) want %a,%lld got %a,%d ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d-p->dy, p->dy);
		}
	}
}
