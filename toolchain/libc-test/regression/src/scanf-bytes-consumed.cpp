// commit: 5efc6af4ebb9d50eb978d0338835544fdfea0396 2011-04-25
// scanf misreports bytes consumed when EOF is hit (or null for sscanf)
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ScanfBytesConsumedSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ScanfBytesConsumedSuite
*/

using namespace std;
using namespace testing::ext;
class ScanfBytesConsumedSuite: public testing::Test {
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
 * @tc.name      : ScanfBytesConsumedSuite001
 * @tc.desc      : Test ScanfBytesConsumedSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(ScanfBytesConsumedSuite,ScanfBytesConsumedTest, Function | MediumTest | Level2)
{
    char buf[] = { 'a', 'a', 0 };
	char dest[3];
	int read_count;
	int n;

	n = sscanf(buf, "%s%n", dest, &read_count);
	EXPECT_EQ(1,n) << "sscanf matched 1 input items but returned " << n << endl;
	EXPECT_EQ(2,read_count) << "sscanf consumed 2 bytes but reported " << read_count << endl;
}
