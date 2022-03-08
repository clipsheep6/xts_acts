// commit: 5efc6af4ebb9d50eb978d0338835544fdfea0396 2011-04-25
// scanf misreports literal match as input failure when reading EOF (null for sscanf)
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ScanfMatchLiteralEofSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ScanfMatchLiteralEofSuite
*/

using namespace std;
using namespace testing::ext;
class ScanfMatchLiteralEofSuite: public testing::Test {
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
 * @tc.name      : ScanfMatchLiteralEofSuite001
 * @tc.desc      : Test ScanfMatchLiteralEofSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(ScanfMatchLiteralEofSuite,ScanfMatchLiteralEofTest, Function | MediumTest | Level2)
{
    char buf[] = { 0 };
	int match_count;

	match_count = sscanf(buf, "a");
    EXPECT_EQ(EOF,match_count) << "scanf reported match failure instead of input failure on literal EOF match" << endl;
}
