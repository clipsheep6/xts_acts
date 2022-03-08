// commit 543787039098c121917cb5f3e129d84b61afa61b 2013-10-04
// setenv should not crash on oom
#include <stdlib.h>
#include <sys/resource.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SetenvOomSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SetenvOomSuite
*/

using namespace std;
using namespace testing::ext;
class SetenvOomSuite: public testing::Test {
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
 * @tc.name      : SetenvOomSuite001
 * @tc.desc      : Test SetenvOomSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(SetenvOomSuite,SetenvOomTest, Function | MediumTest | Level2)
{
    char buf[10000];
    EXPECT_GE(t_memfill() , 0) << memfill failed << endl;
	memset(buf, 'x', sizeof buf);
	buf[sizeof buf - 1] = 0;

	errno = 0;
    EXPECT_EQ(setenv("TESTVAR", buf, 1) , -1) << "setenv was successful" << endl;
    EXPECT_EQ(errno , ENOMEM) << "expected ENOMEM, got " << strerror(errno) << endl;
}
