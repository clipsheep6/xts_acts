// commit 7c8c86f6308c7e0816b9638465a5917b12159e8f 2015-03-20
// backref is not valid in ere
#include <regex.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RegexEreBackrefSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RegexEreBackrefSuite
*/

using namespace std;
using namespace testing::ext;
class RegexEreBackrefSuite: public testing::Test {
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
 * @tc.name      : RegexEreBackrefSuite001
 * @tc.desc      : Test RegexEreBackrefSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RegexEreBackrefSuite,RegexEreBackrefTest, Function | MediumTest | Level2)
{
    char buf[200];
	char pat[] = "(a)\\1";
	regex_t r;
	int n;

	n = regcomp(&r, pat, REG_EXTENDED);
	if (n) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_FALSE(n) << "regcomp(" << pat << ") returned " << n << " (" << buf << ") wanted 0" << endl; 
	}

	n = regexec(&r, "aa", 0, 0, 0);
	if (n != REG_NOMATCH) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_EQ(REG_NOMATCH,n) << "regexec(/" << pat << "/ ~ \"aa\") returned " 
		<< n << " (" << buf << "), wanted REG_NOMATCH" << endl;
	}

	n = regexec(&r, "a1", 0, 0, 0);
	if (n) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_FALSE(n) << "regexec(/" << pat << "/ ~ \"a1\") returned " 
		<< n << " (" << buf << "), wanted 0" << endl;
	}
}
