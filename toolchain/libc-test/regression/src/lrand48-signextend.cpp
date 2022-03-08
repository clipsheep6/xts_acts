// lrand48 should give deterministic results
#define _XOPEN_SOURCE 700
#include <stdlib.h>
//#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Lrand48SignextendSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Lrand48SignextendSuite
*/

using namespace std;
using namespace testing::ext;
class Lrand48SignextendSuite: public testing::Test {
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
 * @tc.name      : Lrand48SignextendSuite001
 * @tc.desc      : Test Lrand48SignextendSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(Lrand48SignextendSuite, Lrand48SignextendTest, Function | MediumTest | Level2)
{
    long r;
	r = lrand48();
    EXPECT_EQ(0,r) << "1st lrand48() got " << r << " want 0" << endl;
	r = lrand48();
    EXPECT_EQ(2116118,r) << "2nd lrand48() got " << r << " want 2116118" << endl;
	r = lrand48();
    EXPECT_EQ(89401895,r) << "3rd lrand48() got " << r << " want 89401895" << endl;
}
