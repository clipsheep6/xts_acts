// commit 9543656cc32fda48fc463f332ee20e91eed2b768 2016-03-06
// __putenv could be confused into freeing storage that does not belong to the implementation
#define _XOPEN_SOURCE 700
#include <stdlib.h>
#include <string.h>
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PutenvDoublefreeSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PutenvDoublefreeSuite
*/

using namespace std;
using namespace testing::ext;
class PutenvDoublefreeSuite: public testing::Test {
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
 * @tc.name      : PutenvDoublefreeSuite001
 * @tc.desc      : Test PutenvDoublefreeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(PutenvDoublefreeSuite,PutenvDoublefreeTest, Function | MediumTest | Level2)
{
    setenv("A", "1", 1);
	setenv("A", "2", 1);
	char *c = strdup("A=3");
	putenv(c);
	setenv("A", "4", 1);
	free(c);
}
