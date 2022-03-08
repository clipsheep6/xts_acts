// commit 6fbdeff0e51f6afc38fbb1476a4db81322779da4 2014-04-09
// memmem should not access oob data
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <string.h>
#include "test.h"

#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MemmemOobSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MemmemOobSuite
*/

using namespace std;
using namespace testing::ext;
class MemmemOobSuite: public testing::Test {
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
 * @tc.name      : MemmemOobSuite001
 * @tc.desc      : Test MemmemOobSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(MemmemOobSuite, MemmemOobTest, Function | MediumTest | Level2)
{
    char *p = (char *)memmem("abcde", 4, "cde", 3);
    EXPECT_FALSE(p) << "memmem(abcde,4,cde,3) returned " << p << ", want NULL" << endl;
}
