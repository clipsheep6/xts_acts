#define _GNU_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LgammalrSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LgammalrSuite
*/

using namespace std;
using namespace testing::ext;
class LgammalrSuite: public testing::Test {
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
 * @tc.name      : LgammalrSuite001
 * @tc.desc      : Test LgammalrSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct l_li t[] = {
#if LDBL_MANT_DIG == 53
#include "sanity/lgamma_r.h"
#include "special/lgamma_r.h"

#elif LDBL_MANT_DIG == 64
#include "sanity/lgammal_r.h"
#include "special/lgammal_r.h"

#endif
};


HWTEST_F(LgammalrSuite, LgammalrTest, Function | MediumTest | Level2)
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
		y = lgammal_r(p->x, &yi);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s lgammal_r(%La)=%La,%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrl(y, p->y, p->dy);
		// TODO: 2 ulp errors allowed
		EXPECT_FALSE((p->r==RN && fabs(d)>2) || (!isnan(p->x) && p->x!=-inf && !(p->e&DIVBYZERO) && yi != p->i));
		if ((p->r==RN && fabs(d)>2) || (!isnan(p->x) && p->x!=-inf && !(p->e&DIVBYZERO) && yi != p->i)) {
			printf("%s:%d: %s lgammal_r(%La) want %La,%lld got %La,%d ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->y, p->i, y, yi, d, d-p->dy, p->dy);
			err++;
		}
	}
}
