// commit 89740868c9f1c84b8ee528468d12df1fa72cd392 2014-04-07
// %g should not print trailing zeros
#include <stdio.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PrintfFmtzeroSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PrintfFmtzeroSuite
*/

using namespace std;
using namespace testing::ext;
class PrintfFmtzeroSuite: public testing::Test {
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
 * @tc.name      : PrintfFmtzeroSuite001
 * @tc.desc      : Test PrintfFmtzeroSuite001 3 items whth async flush
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

HWTEST_F(PrintfFmtzeroSuite, PrintfFmtzeroTest, Function | MediumTest | Level2)
{
    t("%.50g", 100000000000000.5, "100000000000000.5");
	t("%.50g", 987654321098765.0, "987654321098765");
}
