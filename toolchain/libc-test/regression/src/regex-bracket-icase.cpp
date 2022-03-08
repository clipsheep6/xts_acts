// [^aBcC] with REG_ICASE should match d,D but not a,A,b,B,c,C according to
// http://austingroupbugs.net/view.php?id=872
#include <regex.h>
#include <limits.h>
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RegexBracketIcaseSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RegexBracketIcaseSuite
*/

using namespace std;
using namespace testing::ext;
class RegexBracketIcaseSuite: public testing::Test {
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
 * @tc.name      : RegexBracketIcaseSuite001
 * @tc.desc      : Test RegexBracketIcaseSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RegexBracketIcaseSuite,RegexBracketIcaseTest, Function | MediumTest | Level2)
{
    char buf[100];
	char *pat;
	regex_t re;
	int n, i;
	struct {
		char *s;
		int n;
	} t[] = {
		{(char *)"a", REG_NOMATCH},
		{(char *)"A", REG_NOMATCH},
		{(char *)"b", REG_NOMATCH},
		{(char *)"B", REG_NOMATCH},
		{(char *)"c", REG_NOMATCH},
		{(char *)"C", REG_NOMATCH},
		{(char *)"d", 0},
		{(char *)"D", 0},
		{0,0}
	};

	pat = (char *)"[^aBcC]";
	n = regcomp(&re, pat, REG_ICASE);
	if (n) {
		regerror(n, &re, buf, sizeof buf);
		t_error("regcomp(\"%s\") failed: %d (%s)\n", pat, n, buf);
	}

	for (i = 0; t[i].s; i++) {
		n = regexec(&re, t[i].s, 0, 0, 0);
		if (n != t[i].n) {
			regerror(n, &re, buf, sizeof buf);
			t_error("regexec(/%s/, \"%s\") returned %d (%s), wanted %d\n",
				pat, t[i].s, n, buf, t[i].n);
		}
	}
}
