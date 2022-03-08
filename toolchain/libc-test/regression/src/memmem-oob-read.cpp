// commit cef0f289f666b6c963bfd11537a6d80916ff889e 2014-06-19
// memmem should not access oob data
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MemmemOobReadSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MemmemOobReadSuite
*/

using namespace std;
using namespace testing::ext;
class MemmemOobReadSuite: public testing::Test {
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
 * @tc.name      : MemmemOobReadSuite001
 * @tc.desc      : Test MemmemOobReadSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(MemmemOobReadSuite, MemmemOobReadTest, Function | MediumTest | Level2)
{
    const unsigned char haystack[] = { 0,0,0,0,0,0,0,1,2 };
	const unsigned char needle[] =   { 0,0,0,0,0,0,0,1,3 };
	unsigned char *p = (unsigned char *)memmem(haystack, 8, needle, 8);
    EXPECT_FALSE(!p) << "memmem(A,8,A,8) returned 0, want A" << endl;
}
