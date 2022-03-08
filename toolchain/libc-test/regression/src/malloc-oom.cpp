// malloc should set errno on oom
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MallocOomSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MallocOomSuite
*/

using namespace std;
using namespace testing::ext;
class MallocOomSuite: public testing::Test {
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
 * @tc.name      : MallocOomSuite001
 * @tc.desc      : Test MallocOomSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(MallocOomSuite, MallocOomTest, Function | MediumTest | Level2)
{
    EXPECT_GE(t_memfill() , 0) << "memfill failed" << endl;
	errno = 0;

    EXPECT_FALSE (malloc(50000)) << "malloc was successful" << endl;
    EXPECT_EQ(ENOMEM , errno) << "expected ENOMEM, got " << strerror(errno) << endl;
}
