#include <wchar.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "WcsstrSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  WcsstrSuite
*/

using namespace std;
using namespace testing::ext;
class WcsstrSuite: public testing::Test {
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
 * @tc.name      : WcsstrSuite001
 * @tc.desc      : Test WcsstrSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

/* We use this instead of memcmp because some broken C libraries
 * add additional nonstandard fields to struct tm... */

#define N(s, sub) { \
	wchar_t *p = s; \
	wchar_t *q = wcsstr(p, sub); \
	EXPECT_FALSE(q) << "wcsstr(" << #s << "," << #sub << ") returned str+" << q-p << ", wanted 0" << endl;\
}
#define T(s, sub, n) { \
	wchar_t *p = s; \
	wchar_t *q = wcsstr(p, sub); \
	EXPECT_STRNE(q , 0) << "wcsstr(" << #s << "," << #sub << ") returned 0, wanted str+" << q-p << endl;\
	EXPECT_EQ(q - p , n) << "wcsstr(" << #s << "," << #sub <<") returned str+" << q-p << ", wanted str+" << n << endl;\
}

HWTEST_F(WcsstrSuite, WcsstrTest, Function | MediumTest | Level2)
{
    N((wchar_t *)L"", L"a")
	N((wchar_t *)L"a", L"aa")
	N((wchar_t *)L"a", L"b")
	N((wchar_t *)L"aa", L"ab")
	N((wchar_t *)L"aa", L"aaa")
	N((wchar_t *)L"abba", L"aba")
	N((wchar_t *)L"abc abc", L"abcd")
	N((wchar_t *)L"0-1-2-3-4-5-6-7-8-9", L"-3-4-56-7-8-")
	N((wchar_t *)L"0-1-2-3-4-5-6-7-8-9", L"-3-4-5+6-7-8-")
	N((wchar_t *)L"_ _ _\xff_ _ _", L"_\x7f_")
	N((wchar_t *)L"_ _ _\x7f_ _ _", L"_\xff_")

	T((wchar_t *)L"", L"", 0)
	T((wchar_t *)L"abcd", L"", 0)
	T((wchar_t *)L"abcd", L"a", 0)
	T((wchar_t *)L"abcd", L"b", 1)
	T((wchar_t *)L"abcd", L"c", 2)
	T((wchar_t *)L"abcd", L"d", 3)
	T((wchar_t *)L"abcd", L"ab", 0)
	T((wchar_t *)L"abcd", L"bc", 1)
	T((wchar_t *)L"abcd", L"cd", 2)
	T((wchar_t *)L"ababa", L"baba", 1)
	T((wchar_t *)L"ababab", L"babab", 1)
	T((wchar_t *)L"abababa", L"bababa", 1)
	T((wchar_t *)L"abababab", L"bababab", 1)
	T((wchar_t *)L"ababababa", L"babababa", 1)
	T((wchar_t *)L"abbababab", L"bababa", 2)
	T((wchar_t *)L"abbababab", L"ababab", 3)
	T((wchar_t *)L"abacabcabcab", L"abcabcab", 4)
	T((wchar_t *)L"nanabanabanana", L"aba", 3)
	T((wchar_t *)L"nanabanabanana", L"ban", 4)
	T((wchar_t *)L"nanabanabanana", L"anab", 1)
	T((wchar_t *)L"nanabanabanana", L"banana", 8)
	T((wchar_t *)L"_ _\xff_ _", L"_\xff_", 2)
}
