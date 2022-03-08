// commit e94d0692864ecf9522fd6a97610a47a2f718d3de 2014-04-07
// %g midpoint cases should be rounded to even
#include <stdio.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PrintfFmtgroundSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PrintfFmtgroundSuite
*/

using namespace std;
using namespace testing::ext;
class PrintfFmtgroundSuite: public testing::Test {
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
 * @tc.name      : PrintfFmtgroundSuite001
 * @tc.desc      : Test PrintfFmtgroundSuite001 3 items whth async flush
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


HWTEST_F(PrintfFmtgroundSuite, PrintfFmtgroundTest, Function | MediumTest | Level2)
{
    t("%.12g", 1000000000005.0, "1e+12");
	t("%.12g", 100000000002500.0, "1.00000000002e+14");
}
