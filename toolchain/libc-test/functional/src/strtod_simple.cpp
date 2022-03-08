#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "StrtodSimpleSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StrtodSimpleSuite
*/

using namespace std;
using namespace testing::ext;
class StrtodSimpleSuite: public testing::Test {
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
 * @tc.name      : StrtodSimpleSuite001
 * @tc.desc      : Test StrtodSimpleSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
/* r = place to store result
 * f = function call to test (or any expression)
 * x = expected result
 * m = message to print on failure (with formats for r & x)
 */

#define TEST_T(r, f, x, m) { \
	((r) = (f)) == (x) || \
	(t_error("%s failed (" m ")\n", #f, r, x, r-x), 0);\
    EXPECT_DOUBLE_EQ((r) , (x));\
}

HWTEST_F(StrtodSimpleSuite, StrtodSimpleTest, Function | MediumTest | Level2)
{
    int i;
	double d, d2;
	char buf[1000];

	for (i=0; i<100; i++) {
		d = sin(i);
		snprintf(buf, sizeof buf, "%.300f", d);
		TEST_T(d2, strtod(buf, 0), d, "round trip fail %a != %a (%a)");
	}

	TEST_T(d, strtod("0x1p4", 0), 16.0, "hex float %a != %a");
	TEST_T(d, strtod("0x1.1p4", 0), 17.0, "hex float %a != %a");
}
