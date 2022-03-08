// commit 0afef1aa24b784c86ae6121ca39e999824086c7c
// preexisting errno should not be interpreted by passwd/group functions

#include <pwd.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Getpwnam_rErrnoSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Getpwnam_rErrnoSuite
*/

using namespace std;
using namespace testing::ext;
class Getpwnam_rErrnoSuite: public testing::Test {
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
 * @tc.name      : Getpwnam_rErrnoSuite001
 * @tc.desc      : Test Getpwnam_rErrnoSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(Getpwnam_rErrnoSuite, Getpwnam_rErrnoTest, Function | MediumTest | Level2)
{
    int baderr = EOWNERDEAD; // arbitrary absurd error
	struct passwd *pw, pwbuf;
	char buf[1024];
	errno = baderr;
    EXPECT_NE(baderr , getpwnam_r("nonsensical_user", &pwbuf, buf, sizeof buf, &pw)) 
    << "getpwnam_r used preexisting errno for nonexisting user" << endl;
}
