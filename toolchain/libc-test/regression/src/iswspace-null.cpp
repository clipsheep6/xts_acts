// commit: d8e8f1464cb02d6a62f01c7153ca4d7b0cd5c5e6 2013-11-11
// iswspace(0) should be 0
#include <wctype.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "IswspaceNullSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  IswspaceNullSuite
*/

using namespace std;
using namespace testing::ext;
class IswspaceNullSuite: public testing::Test {
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
 * @tc.name      : IswspaceNullSuite001
 * @tc.desc      : Test IswspaceNullSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(IswspaceNullSuite, IswspaceNullTest, Function | MediumTest | Level2)
{
    EXPECT_EQ(0,iswspace(0)) << "iswspace(0) returned non-zero" << endl;
}
