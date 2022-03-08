// commit 109048e031f39fbb370211fde44ababf6c04c8fb 2014-04-07
// float printf out-of-bounds access
#include <stdio.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Printf1e9OobSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Printf1e9OobSuite
*/

using namespace std;
using namespace testing::ext;
class Printf1e9OobSuite: public testing::Test {
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
 * @tc.name      : Printf1e9OobSuite001
 * @tc.desc      : Test Printf1e9OobSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static void t(const char *fmt, double d, const char *want)
{
	char buf[256];
	int n = strlen(want);
	int r = snprintf(buf, sizeof buf, fmt, d);
    EXPECT_FALSE(r != n || memcmp(buf, want, n+1) != 0) << "snprintf(\"" << fmt 
    << "\"," << d << ") want " << want << " got " << buf << endl;
}

HWTEST_F(Printf1e9OobSuite, Printf1e9OobTest, Function | MediumTest | Level2)
{
    // fill stack with something
	t("%.1f", 123123123123123.0, "123123123123123.0");
	// test for out-of-bounds access
	t("%g", 999999999.0, "1e+09");
	t("%.3e", 999999999.75, "1.000e+09");
}
