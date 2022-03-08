// commit: dc3776d445957cd3ea4a682db518701b93d34292 2011-02-13
// sigreturn crash
#include <signal.h>
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SigreturnSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SigreturnSuite
*/

using namespace std;
using namespace testing::ext;
class SigreturnSuite: public testing::Test {
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
 * @tc.name      : SigreturnSuite001
 * @tc.desc      : Test SigreturnSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static volatile sig_atomic_t x;

void handler(int s)
{
	x = 1;
}

HWTEST_F(SigreturnSuite,SigreturnTest, Function | MediumTest | Level2)
{
    signal(SIGINT, handler);
    ASSERT_FALSE(raise(SIGINT));
    ASSERT_EQ(1,x);
}
