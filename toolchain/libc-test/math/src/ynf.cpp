#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "YnfSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  YnfSuite
*/

using namespace std;
using namespace testing::ext;
class YnfSuite: public testing::Test {
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
 * @tc.name      : YnfSuite001
 * @tc.desc      : Test LYnfSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct fi_f t[] = {
#include "sanity/ynf.h"
#include "special/ynf.h"
};

HWTEST_F(YnfSuite, YnfTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	double y;
	float d;
	int e, i, bad, err = 0;
	struct fi_f *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		y = ynf(p->i, p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r));
		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s ynf(%lld, %a)=%a, want %s",
				p->file, p->line, rstr(p->r), p->i, p->x, p->y, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		d = ulperrf(y, p->y, p->dy);
		bad = p->x < 0 && !isnan(y) && y != -inf;
		EXPECT_FALSE(bad || (!(p->x < 0) && !checkulp(d, p->r)));
		if (bad || (!(p->x < 0) && !checkulp(d, p->r))) {
			if (!bad && fabsf(d) < 2.5f)
				printf("X ");
			else
				err++;
			printf("%s:%d: %s ynf(%lld, %a) want %a got %a, ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->i, p->x, p->y, y, d, d-p->dy, p->dy);
		}
	}
}
