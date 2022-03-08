#include "gtest/gtest.h"
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>
#include <locale.h>
#include <langinfo.h>
#include "test.h"

/**  
* @brief  register a test suit named "MbcSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  MbcSuite
*/

using namespace std;
using namespace testing::ext;
//namespace {
class MbcSuite: public testing::Test {
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
 * @tc.name      : MbcSuite001
 * @tc.desc      : Test MbcSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
// (i = (f)) == (x) || \
// 		t_error("%s failed (%s) got %d want %d\n", #f, m, i, x); 
#define T(f, x, m) do { \
	memset(&st, 0, sizeof st); \
	EXPECT_EQ((i = (f)) , (x)) << #f << " failed (" << m << ") got " << i << " want " << x << endl; \
} while(0)
	// (i = (f)) == (x) || \
	// 	t_error("%s failed (%s) got 0x%04x want 0x%04x\n", #f, m, i, x) 
#define TCHAR(f, x, m) do { \
	memset(&st, 0, sizeof st); \
	EXPECT_EQ((i = (f)) , (x)) << #f << " failed (" << m << ") got 0x" << i << " want 0x" << x << endl; \
} while(0)

HWTEST_F(MbcSuite, MbcSuite001 ,Function | MediumTest | Level2)
{
	const char *cs;
	int i;
	mbstate_t st, st2;
	wchar_t wc, wcs[32];

	(void)(
	setlocale(LC_CTYPE, "en_US.UTF-8") ||
	setlocale(LC_CTYPE, "en_GB.UTF-8") ||
	setlocale(LC_CTYPE, "en.UTF-8") ||
	setlocale(LC_CTYPE, "POSIX.UTF-8") ||
	setlocale(LC_CTYPE, "C.UTF-8") ||
	setlocale(LC_CTYPE, "UTF-8") ||
	setlocale(LC_CTYPE, "") );

	T(mbsrtowcs(wcs, (cs="abcdef",&cs), 3, &st), 3, "wrong semantics for wcs buf len");
	T(mbsrtowcs(wcs, (cs="abcdef",&cs), 8, &st), 6, "wrong semantics for wcs buf len");
	T(mbsrtowcs(NULL, (cs="abcdef",&cs), 2, &st), 6, "wrong semantics for NULL wcs");

	ASSERT_FALSE(strcmp(nl_langinfo(CODESET), "UTF-8"));

	T(mbrtowc(&wc, "\x80", 1, &st), -1, "failed to catch error");
	T(mbrtowc(&wc, "\xc0", 1, &st), -1, "failed to catch illegal initial");

	T(mbrtowc(&wc, "\xc0\x80", 2, &st), -1, "aliasing nul");
	T(mbrtowc(&wc, "\xc0\xaf", 2, &st), -1, "aliasing slash");
	T(mbrtowc(&wc, "\xe0\x80\xaf", 3, &st), -1, "aliasing slash");
	T(mbrtowc(&wc, "\xf0\x80\x80\xaf", 4, &st), -1, "aliasing slash");
	T(mbrtowc(&wc, "\xf8\x80\x80\x80\xaf", 5, &st), -1, "aliasing slash");
	T(mbrtowc(&wc, "\xfc\x80\x80\x80\x80\xaf", 6, &st), -1, "aliasing slash");
	T(mbrtowc(&wc, "\xe0\x82\x80", 3, &st), -1, "aliasing U+0080");
	T(mbrtowc(&wc, "\xe0\x9f\xbf", 3, &st), -1, "aliasing U+07FF");
	T(mbrtowc(&wc, "\xf0\x80\xa0\x80", 4, &st), -1, "aliasing U+0800");
	T(mbrtowc(&wc, "\xf0\x8f\xbf\xbd", 4, &st), -1, "aliasing U+FFFD");

	T(mbrtowc(&wc, "\xed\xa0\x80", 3, &st), -1, "failed to catch surrogate");
	T(mbrtowc(&wc, "\xef\xbf\xbe", 3, &st), 3, "failed to accept U+FFFE");
	T(mbrtowc(&wc, "\xef\xbf\xbf", 3, &st), 3, "failed to accept U+FFFF");
	T(mbrtowc(&wc, "\xf4\x8f\xbf\xbe", 4, &st), 4, "failed to accept U+10FFFE");
	T(mbrtowc(&wc, "\xf4\x8f\xbf\xbf", 4, &st), 4, "failed to accept U+10FFFF");

	T(mbrtowc(&wc, "\xc2\x80", 2, &st), 2, "wrong length");
	TCHAR((mbrtowc(&wc, "\xc2\x80", 2, &st),wc), 0x80, "wrong char");
	T(mbrtowc(&wc, "\xe0\xa0\x80", 3, &st), 3, "wrong length");
	TCHAR((mbrtowc(&wc, "\xe0\xa0\x80", 3, &st),wc), 0x800, "wrong char");
	T(mbrtowc(&wc, "\xf0\x90\x80\x80", 4, &st), 4, "wrong length");
	TCHAR((mbrtowc(&wc, "\xf0\x90\x80\x80", 4, &st),wc), 0x10000, "wrong char");

	memset(&st2, 0, sizeof st2);
	T(mbrtowc(&wc, "\xc2", 1, &st2), -2, "failed to accept initial byte");
	T(mbrtowc(&wc, "\x80", 1, &st2), 1, "failed to resume");
	TCHAR(wc, 0x80, "wrong char");

	memset(&st2, 0, sizeof st2);
	T(mbrtowc(&wc, "\xc2", 1, &st2), -2, "failed to accept initial byte");
	T(mbsrtowcs(wcs, (cs="\xa0""abc",&cs), 32, &st2), 4, "failed to resume");
	TCHAR(wcs[0], 0xa0, "wrong char");
	TCHAR(wcs[1], 'a', "wrong char");
	T(!cs, 1, "wrong final position");
}
