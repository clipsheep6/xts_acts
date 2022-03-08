// commit 39dfd58417ef642307d90306e1c7e50aaec5a35c 2015-03-20
// backslash followed by high byte should be parsed as a normal sequence
#include <locale.h>
#include <regex.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RegexEscapedHighByteSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RegexEscapedHighByteSuite
*/

using namespace std;
using namespace testing::ext;
class RegexEscapedHighByteSuite: public testing::Test {
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
 * @tc.name      : RegexEscapedHighByteSuite001
 * @tc.desc      : Test RegexEscapedHighByteSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RegexEscapedHighByteSuite,RegexEscapedHighByteTest, Function | MediumTest | Level2)
{
    char buf[200];
	regex_t r;
	int n;

	setlocale(LC_CTYPE, "C.UTF-8");

	// illegal sequence (not U+00FC)
	n = regcomp(&r, "\\\xfc", 0);
	if (n != REG_BADPAT) {
		regerror(n, &r, buf, sizeof buf);
		EXPECT_EQ(REG_BADPAT,n) << "regcomp(\\\\\\xfc) returned " << n << " (" << buf << ") wanted REG_BADPAT" << endl;
	}
}
