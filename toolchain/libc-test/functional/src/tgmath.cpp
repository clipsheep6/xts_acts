#include <tgmath.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "TgmathSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  TgmathSuite
*/

using namespace std;
using namespace testing::ext;
class TgmathSuite: public testing::Test {
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
 * @tc.name      : TgmathSuite001
 * @tc.desc      : Test TgmathSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(TgmathSuite, TgmathTest, Function | MediumTest | Level2)
{
    long i;

	i = lrint(123456789.1f) & 0x7fffffff;
	if (i != 123456792)
		t_error("lrint(123456789.1f)&0x7fffffff want 123456792 got %ld\n", i);
	i = lrint(123456789.1) & 0x7fffffff;
	if (i != 123456789)
		t_error("lrint(123456789.1)&0x7fffffff want 123456789 got %ld\n", i);

	if (sqrt(2.0f) != 1.41421353816986083984375)
		t_error("sqrt(2.0f) want 0x1.6a09e6p+0 got %a\n", sqrt(2.0f));
	if (sqrt(2.0) != 1.414213562373095145474621858738828450441360)
		t_error("sqrt(2.0) want 0x1.6a09e667f3bcdp+0 got %a\n", sqrt(2.0));
	if (sqrt(2) != 1.414213562373095145474621858738828450441360)
		t_error("sqrt(2) want 0x1.6a09e667f3bcdp+0 got %a\n", sqrt(2.0));

	if (sizeof pow(sqrt(8),0.5f) != sizeof(double))
		t_error("sizeof pow(sqrt(8),0.5f) want %d got %d\n", (int)sizeof(double), (int)sizeof pow(sqrt(8),0.5f));
	if (sizeof pow(2.0,0.5) != sizeof(double))
		t_error("sizeof pow(2.0,0.5) want %d got %d\n", (int)sizeof(double), (int)sizeof pow(2.0,0.5));
	if (sizeof pow(2.0f,0.5f) != sizeof(float))
		t_error("sizeof pow(2.0f,0.5f) want %d got %d\n", (int)sizeof(float), (int)sizeof pow(2.0f,0.5f));
	if (sizeof pow(2.0,0.5+0*i) != sizeof(double complex))
		t_error("sizeof pow(2.0,0.5+0*I) want %d got %d\n", (int)sizeof(double complex), (int)sizeof pow(2.0,0.5+0*i));

	if (pow(2.0,0.5) != 1.414213562373095145474621858738828450441360)
		t_error("pow(2.0,0.5) want 0x1.6a09e667f3bcdp+0 got %a\n", pow(2.0,0.5));
	if (pow(2,0.5) != 1.414213562373095145474621858738828450441360)
		t_error("pow(2,0.5) want 0x1.6a09e667f3bcdp+0 got %a\n", pow(2,0.5));
	if (pow(2,0.5f) != 1.414213562373095145474621858738828450441360)
		t_error("pow(2,0.5f) want 0x1.6a09e667f3bcdp+0 got %a\n", pow(2,0.5f));
}
