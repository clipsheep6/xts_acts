#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LroundfSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LroundfSuite
*/

using namespace std;
using namespace testing::ext;
class LroundfSuite: public testing::Test {
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
 * @tc.name      : LroundfSuite001
 * @tc.desc      : Test LroundfSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static struct f_i t[] = {
#include "sanity/lroundf.h"
#include "special/lroundf.h"

};

HWTEST_F(LroundfSuite, LroundfTest, Function | MediumTest | Level2)
{
	//#pragma STDC FENV_ACCESS ON
	long long yi;
	int e, i, err = 0;
	struct f_i *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		yi = lroundf(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		EXPECT_FALSE(!checkexcept(e, p->e, p->r) && (e|INEXACT) != p->e);
		if (!checkexcept(e, p->e, p->r) && (e|INEXACT) != p->e) {
			printf("%s:%d: bad fp exception: %s lroundf(%a)=%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		EXPECT_FALSE(!(p->e&INVALID) && yi != p->i);
		if (!(p->e&INVALID) && yi != p->i) {
			printf("%s:%d: %s lroundf(%a) want %lld got %lld\n",
				p->file, p->line, rstr(p->r), p->x, p->i, yi);
			err++;
		}
	}
}
