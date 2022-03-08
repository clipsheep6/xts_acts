// leading zero handling according to the manual
//#define _GNU_SOURCE
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "StrverscmpSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StrverscmpSuite
*/

using namespace std;
using namespace testing::ext;
class StrverscmpSuite: public testing::Test {
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
 * @tc.name      : StrverscmpSuite001
 * @tc.desc      : Test StrverscmpSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define ASSERT(x) EXPECT_TRUE((x)) << #x << " failed" << endl;

HWTEST_F(StrverscmpSuite,StrverscmpTest, Function | MediumTest | Level2)
{
    ASSERT(strverscmp("", "") == 0);
	ASSERT(strverscmp("a", "a") == 0);
	ASSERT(strverscmp("a", "b") < 0);
	ASSERT(strverscmp("b", "a") > 0);
	ASSERT(strverscmp("000", "00") < 0);
	ASSERT(strverscmp("00", "000") > 0);
	ASSERT(strverscmp("a0", "a") > 0);
	ASSERT(strverscmp("00", "01") < 0);
	ASSERT(strverscmp("01", "010") < 0);
	ASSERT(strverscmp("010", "09") < 0);
	ASSERT(strverscmp("09", "0") < 0);
	ASSERT(strverscmp("9", "10") < 0);
	ASSERT(strverscmp("0a", "0") > 0);
	ASSERT(strverscmp("foobar-1.1.2", "foobar-1.1.3") < 0);
	ASSERT(strverscmp("foobar-1.1.2", "foobar-1.01.3") > 0);
}
