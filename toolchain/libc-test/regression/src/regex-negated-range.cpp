// negated overlapping ranges in a regex bracket
// were not handled correctly by tre
#include <regex.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RegexnegatedRangeSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RegexnegatedRangeSuite
*/

using namespace std;
using namespace testing::ext;
class RegexnegatedRangeSuite: public testing::Test {
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
 * @tc.name      : RegexnegatedRangeSuite001
 * @tc.desc      : Test RegexnegatedRangeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RegexnegatedRangeSuite,RegexnegatedRangeTest, Function | MediumTest | Level2)
{
    char buf[200];
	regex_t r;
	int n;

	n = regcomp(&r, "[^aa-z]", 0);
	if (n) {
		regerror(n, &r, buf, sizeof buf);
        EXPECT_FALSE(n) << "regcomp returned " << n << " (" << buf << ")" << endl;
	}

	n = regexec(&r, "k", 0, 0, 0);
	if (n != REG_NOMATCH) {
		regerror(n, &r, buf, sizeof buf);
        EXPECT_EQ(REG_NOMATCH,n) << "regexec(/[^aa-z]/ ~ \"k\") returned " << n << " (" << "), wanted REG_NOMATCH" << endl;
	}
}
