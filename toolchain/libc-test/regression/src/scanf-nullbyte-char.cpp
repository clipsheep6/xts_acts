// commit: ef5507867b59d19f21437970e87b5d0415c07b2e 2013-06-22
// scanf should not append null byte after scanning %c
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ScanfNullbyteCharSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ScanfNullbyteCharSuite
*/

using namespace std;
using namespace testing::ext;
class ScanfNullbyteCharSuite: public testing::Test {
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
 * @tc.name      : ScanfNullbyteCharSuite001
 * @tc.desc      : Test ScanfNullbyteCharSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(ScanfNullbyteCharSuite,ScanfNullbyteCharTest, Function | MediumTest | Level2)
{
    char dst[] = { 'a', 'a' }; 
	char src[] = { 'b', 'b' };

    EXPECT_EQ(1,sscanf(src, "%c", dst)) << "sscanf %%c failed" << endl;
    EXPECT_EQ('a',dst[1]) << "scanf clobbered the char buffer for %%c conversion" << endl;
}
