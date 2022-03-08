// commit fc5a96c9c8aa186effad7520d5df6b616bbfd29d
// getpwnam_r should not crash on nonexistant users when errno is 0

#include <pwd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Getpwnam_rCrashSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Getpwnam_rCrashSuite
*/

using namespace std;
using namespace testing::ext;
class Getpwnam_rCrashSuite: public testing::Test {
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
 * @tc.name      : Getpwnam_rCrashSuite001
 * @tc.desc      : Test Getpwnam_rCrashSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(Getpwnam_rCrashSuite, Getpwnam_rCrashTest, Function | MediumTest | Level2)
{
    struct passwd *pw, pwbuf;
	char buf[1024];
	getpwnam_r("nonsensical_user", &pwbuf, buf, sizeof buf, &pw);
}
