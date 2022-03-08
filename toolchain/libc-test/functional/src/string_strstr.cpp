#include <string.h>
#include "gtest/gtest.h"
#include "test.h"

/**  
* @brief  register a test suit named "StringStrstrSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StringStrstrSuite
*/

using namespace std;
using namespace testing::ext;
class StringStrstrSuite: public testing::Test {
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
 * @tc.name      : StringStrstrSuite001
 * @tc.desc      : Test StringStrstrSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define N(s, sub) { \
	char *p = s; \
	char *q = strstr(p, sub); \
	EXPECT_FALSE(q) << "strstr(" << #s << "," << #sub << ") returned str+" << q-p << endl; \
}

#define T(s, sub, n) { \
	char *p = s; \
	char *q = strstr(p, sub); \
	EXPECT_STRNE(q , NULL) << "strstr(" << #s << "," << #sub << ") returned 0, wanted str+" << n << endl; \
	EXPECT_EQ(q - p , n) << "strstr(" << #s << "," << #sub << ") returned str+" << n << endl; \
}

HWTEST_F(StringStrstrSuite, StringStrstrTest, Function | MediumTest | Level2)
{
    N((char *)"", "a")
	N((char *)"a", "aa")
	N((char *)"a", "b")
	N((char *)"aa", "ab")
	N((char *)"aa", "aaa")
	N((char *)"abba", "aba")
	N((char *)"abc abc", "abcd")
	N((char *)"0-1-2-3-4-5-6-7-8-9", "-3-4-56-7-8-")
	N((char *)"0-1-2-3-4-5-6-7-8-9", "-3-4-5+6-7-8-")
	N((char *)"_ _ _\xff_ _ _", "_\x7f_")
	N((char *)"_ _ _\x7f_ _ _", "_\xff_")

	T((char *)"", "", 0)
	T((char *)"abcd", "", 0)
	T((char *)"abcd", "a", 0)
	T((char *)"abcd", "b", 1)
	T((char *)"abcd", "c", 2)
	T((char *)"abcd", "d", 3)
	T((char *)"abcd", "ab", 0)
	T((char *)"abcd", "bc", 1)
	T((char *)"abcd", "cd", 2)
	T((char *)"ababa", "baba", 1)
	T((char *)"ababab", "babab", 1)
	T((char *)"abababa", "bababa", 1)
	T((char *)"abababab", "bababab", 1)
	T((char *)"ababababa", "babababa", 1)
	T((char *)"abbababab", "bababa", 2)
	T((char *)"abbababab", "ababab", 3)
	T((char *)"abacabcabcab", "abcabcab", 4)
	T((char *)"nanabanabanana", "aba", 3)
	T((char *)"nanabanabanana", "ban", 4)
	T((char *)"nanabanabanana", "anab", 1)
	T((char *)"nanabanabanana", "banana", 8)
	T((char *)"_ _\xff_ _", "_\xff_", 2)

}
