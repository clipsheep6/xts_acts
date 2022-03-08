// commit 476cd1d96560aaf7f210319597556e7fbcd60469 2014-04-18
// wcsstr (strstr and memmem) failed to match repetitive needles in some cases
#include <wchar.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "WcsstrFalseNegativeSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  WcsstrFalseNegativeSuite
*/

using namespace std;
using namespace testing::ext;
class WcsstrFalseNegativeSuite: public testing::Test {
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
 * @tc.name      : WcsstrFalseNegativeSuite001
 * @tc.desc      : Test WcsstrFalseNegativeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(WcsstrFalseNegativeSuite,WcsstrFalseNegativeTest, Function | MediumTest | Level2)
{
    wchar_t const *haystack = L"playing play play play always";
	wchar_t const *needle = L"play play play";
	wchar_t *p = (wchar_t *)wcsstr(haystack, needle);
    EXPECT_EQ(p , haystack+8) << "wcsstr(L\"" << haystack << "\",L\"" << needle << "\") failed: got " << p << ", want " << haystack+8 << endl;
}
