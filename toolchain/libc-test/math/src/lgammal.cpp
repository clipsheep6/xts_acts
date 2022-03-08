#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#define _XOPEN_SOURCE 700
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LgammalSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LgammalSuite
*/

using namespace std;
using namespace testing::ext;
class LgammalSuite: public testing::Test {
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
 * @tc.name      : LgammalSuite001
 * @tc.desc      : Test LgammalSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_li t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/lgamma.h"
#include "special/lgamma.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/lgammal.h"
#include "special/lgammal.h"

#endif
};


HWTEST_F(LgammalSuite, LgammalTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	int yi;
	long double y;
	float d;
	int e, i, err = 0;
	struct l_li *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = lgammal(p->x);
		yi = signgam;
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s lgammal(%La)=%La,%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		// TODO: 2 ulp errors allowed
		EXPECT_FALSE((p->r==RN && fabs(d) > 2) || (!isnan(p->x) && p->x!=-inf && !(p->e&DIVBYZERO) && yi != p->i));
		if ((p->r==RN && fabs(d) > 2) || (!isnan(p->x) && p->x!=-inf && !(p->e&DIVBYZERO) && yi != p->i)) {
			printf("%s:%d: %s lgammal(%La) want %La,%lld got %La,%d ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d-p->dy, p->dy);
			err++;
		}
	}
}
