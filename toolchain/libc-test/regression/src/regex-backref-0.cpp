// \0 is not a valid backref, it is undefined by the standard
// we treat such cases as literal char
#include <regex.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RegexBackref0Suite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RegexBackref0Suite
*/

using namespace std;
using namespace testing::ext;
class RegexBackref0Suite: public testing::Test {
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
 * @tc.name      : RegexBackref0Suite001
 * @tc.desc      : Test RegexBackref0Suite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RegexBackref0Suite,RegexBackref0Test, Function | MediumTest | Level2)
{
    char buf[200];
	char pat[] = "a\\0";
	regex_t r;
	int n;

	n = regcomp(&r, pat, 0);
	if (n) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_FALSE(n) << "regcomp(" << pat << ") returned " << n << " (" << buf << ") wanted 0" << endl;
	}
	n = regexec(&r, "a0", 0, 0, 0);
	if (n) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_FALSE(n) << "regexec(/" << pat << "/ ~ \"a0\") returned " << n << " (" << buf << "), wanted 0" << endl;
	}
}
