// commit: e98136207ad1a6df1cdc1578e4ad56f8f0db4047 2011-05-22
#include <wchar.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "WcsncpyReadOverflowSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  WcsncpyReadOverflowSuite
*/

using namespace std;
using namespace testing::ext;
class WcsncpyReadOverflowSuite: public testing::Test {
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
 * @tc.name      : WcsncpyReadOverflowSuite001
 * @tc.desc      : Test WcsncpyReadOverflowSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(WcsncpyReadOverflowSuite,WcsncpyReadOverflowTest, Function | MediumTest | Level2)
{
    wchar_t dst[] = { 'a', 'a' };
	wchar_t src[] = { 0, 'b' };

	wcsncpy(dst, src, 1);
    EXPECT_EQ('a' , dst[1]) << "wcsncpy copied more than N" << endl;
}
