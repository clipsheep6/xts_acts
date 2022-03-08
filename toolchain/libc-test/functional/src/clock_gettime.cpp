#include <time.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include <stdio.h>
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ClockGettimeSuite001"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  ClockGettimeSuite001
*/

using namespace std;
using namespace testing::ext;
class ClockGettimeSuite: public testing::Test {
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
 * @tc.name      :ClockGettimeSuite001
 * @tc.desc      :ClockGettimeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */


HWTEST_F(ClockGettimeSuite, ClockGettimeSuite001, Function | MediumTest | Level2)
{
    struct timespec ts;
	EXPECT_TRUE(clock_gettime(CLOCK_REALTIME, &ts) == 0);
}
