// commit 2b2aff37aced66e4a50a38a14607a9b1dc0ee001 2013-10-03
// execle should pass env properly
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ExecleEnvSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ExecleEnvSuite
*/

using namespace std;
using namespace testing::ext;
class ExecleEnvSuite: public testing::Test {
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
 * @tc.name      : ExecleEnvSuite001
 * @tc.desc      : Test ExecleEnvSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(ExecleEnvSuite, ExecleEnvTest, Function | MediumTest | Level2)
{
    char *env[] = {(char *)"VAR=abc", 0};

	execle((const char *)"/bin/sh", (const char *)"sh", (char *)"-c",
		(char *)"[ \"$VAR\" = abc ] || { echo '"__FILE__": env is not passed'; exit 1; }",
		(char *)0, env);

	t_error("execle failed: %s\n", strerror(errno));
}
