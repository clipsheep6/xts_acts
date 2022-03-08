// commit: 9cad27a3dc1a4eb349b6591e4dc8cc89dce32277
// ungetc after setvbuf should not clobber memory below buffer
#include <stdio.h>
#include <string.h>
#include "test.h"       
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SetvbufUngetSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SetvbufUngetSuite
*/

using namespace std;
using namespace testing::ext;
class SetvbufUngetSuite: public testing::Test {
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
 * @tc.name      : SetvbufUngetSuite001
 * @tc.desc      : Test SetvbufUngetSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(SetvbufUngetSuite,SetvbufUngetTest, Function | MediumTest | Level2)
{
    char buf[1024] = "hello world";
	setvbuf(stdin, buf+12, _IOFBF, sizeof buf - 12);
	while (ungetc('x', stdin)!=EOF);
	if (strcmp(buf, "hello world"))
		EXPECT_FALSE(strcmp(buf, "hello world")) << "ungetc clobbered outside buffer: [" << buf << "]" << endl;   
}
