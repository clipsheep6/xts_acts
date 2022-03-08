#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>
#include <langinfo.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "SwprintfSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SwprintfSuite
*/

using namespace std;
using namespace testing::ext;
class SwprintfSuite: public testing::Test {
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
 * @tc.name      : SwprintfSuite001
 * @tc.desc      : Test SwprintfSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TEST_T(r, f, x, m) { \
	((r) = (f)) == (x) || \
	(t_error("%s failed (" m ")\n", #f, r, x), 0); \
	EXPECT_EQ((r) , (x)); \
}

#define TEST_S(s, x, m) EXPECT_TRUE(!wcscmp((s),(x))) << "[" << s << "] != [" << x << "] (" << m << ")" << endl;

static const struct {
	const wchar_t *fmt;
	int i;
	const wchar_t *expect;
} int_tests[] = {
	/* width, precision, alignment */
	{ L"%04d", 12, L"0012" },
	{ L"%.3d", 12, L"012" },
	{ L"%3d", 12, L" 12" },
	{ L"%-3d", 12, L"12 " },
	{ L"%+3d", 12, L"+12" },
	{ L"%+-5d", 12, L"+12  " },
	{ L"%+- 5d", 12, L"+12  " },
	{ L"%- 5d", 12, L" 12  " },
	{ L"% d", 12, L" 12" },
	{ L"%0-5d", 12, L"12   " },
	{ L"%-05d", 12, L"12   " },

	/* ...explicit precision of 0 shall be no characters except for alt-octal. */
	{ L"%.0d", 0, L"" },
	{ L"%.0o", 0, L"" },
	{ L"%#.0d", 0, L"" },
	{ L"%#.0o", 0, L"0" },
	{ L"%#.0x", 0, L"" },

	/* hex: test alt form and case */
	{ L"%x", 63, L"3f" },
	{ L"%#x", 63, L"0x3f" },
	{ L"%X", 63, L"3F" },

	/* octal: test alt form */
	{ L"%o", 15, L"17" },
	{ L"%#o", 15, L"017" },

	{ NULL, 0.0, NULL }
};

static const struct {
	const wchar_t *fmt;
	double f;
	const wchar_t *expect;
} fp_tests[] = {
	/* basic form, handling of exponent/precision for 0 */
	{ L"%e", 0.0, L"0.000000e+00" },
	{ L"%f", 0.0, L"0.000000" },
	{ L"%g", 0.0, L"0" },
	{ L"%#g", 0.0, L"0.00000" },

	/* rounding */
	{ L"%f", 1.1, L"1.100000" },
	{ L"%f", 1.2, L"1.200000" },
	{ L"%f", 1.3, L"1.300000" },
	{ L"%f", 1.4, L"1.400000" },
	{ L"%f", 1.5, L"1.500000" },
	
	/* correctness in DBL_DIG places */
	{ L"%.15g", 1.23456789012345, L"1.23456789012345" },

	/* correct choice of notation for %g */
	{ L"%g", 0.0001, L"0.0001" },
	{ L"%g", 0.00001, L"1e-05" },
	{ L"%g", 123456, L"123456" },
	{ L"%g", 1234567, L"1.23457e+06" },
	{ L"%.7g", 1234567, L"1234567" },
	{ L"%.7g", 12345678, L"1.234568e+07" },

	/* pi in double precision, printed to a few extra places */
	{ L"%.15f", M_PI, L"3.141592653589793" },
	{ L"%.18f", M_PI, L"3.141592653589793116" },

	/* exact conversion of large integers */
	{ L"%.0f", 340282366920938463463374607431768211456.0,
	         L"340282366920938463463374607431768211456" },

	{ NULL, 0.0, NULL }
};

HWTEST_F(SwprintfSuite, SwprintfTest, Function | MediumTest | Level2)
{
    int i, j;
	wchar_t b[500];

	(void)(
	setlocale(LC_CTYPE, "en_US.UTF-8") ||
	setlocale(LC_CTYPE, "en_GB.UTF-8") ||
	setlocale(LC_CTYPE, "en.UTF-8") ||
	setlocale(LC_CTYPE, "POSIX.UTF-8") ||
	setlocale(LC_CTYPE, "C.UTF-8") ||
	setlocale(LC_CTYPE, "UTF-8") ||
	setlocale(LC_CTYPE, "") );

	TEST_T(i, strcmp(nl_langinfo(CODESET), "UTF-8"), 0, "no UTF-8 locale; test_Ts might fail");

	TEST_T(i, swprintf(0, 0, L"%d", 123456)<0, 1, "%d != %d");

	TEST_T(i, swprintf(b, 2, L"%lc", 0xc0), 1, "%d != %d");
	TEST_T(i, b[0], 0xc0, "wrong character %x != %x");
	TEST_T(i, swprintf(b, 2, L"%lc", 0x20ac), 1, "%d != %d");
	TEST_T(i, b[0], 0x20ac, "wrong character %x != %x");
	TEST_T(i, swprintf(b, 3, L"%s", "\xc3\x80!"), 2, "%d != %d");
	TEST_T(i, b[0], 0xc0, "wrong character %x != %x");
	TEST_T(i, swprintf(b, 2, L"%.1s", "\xc3\x80!"), 1, "%d != %d");
	TEST_T(i, b[0], 0xc0, "wrong character %x != %x");

	wcscpy(b, L"xxxxxxxx");
	TEST_T(i, swprintf(b, 4, L"%d", 123456)<0, 1, "%d != %d");
	TEST_S(b, L"123", "incorrect output");
	TEST_T(i, b[5], 'x', "buffer overrun");

	for (j=0; int_tests[j].fmt; j++) {
		i = swprintf(b, sizeof b, int_tests[j].fmt, int_tests[j].i);
		if (i != wcslen(int_tests[j].expect)) {
			t_error("swprintf(b, sizeof b, \"%ls\", %d) returned %d wanted %d\n",
				int_tests[j].fmt, int_tests[j].i, i, wcslen(int_tests[j].expect));
		}
		if (wcscmp(b, int_tests[j].expect) != 0)
			t_error("bad integer conversion: got \"%ls\", want \"%ls\"\n", b, int_tests[j].expect);
	}

	for (j=0; fp_tests[j].fmt; j++) {
		i = swprintf(b, sizeof b, fp_tests[j].fmt, fp_tests[j].f);
		if (i != wcslen(fp_tests[j].expect)) {
			t_error("swprintf(b, sizeof b, \"%ls\", %f) returned %d wanted %d\n",
				fp_tests[j].fmt, fp_tests[j].f, i, wcslen(fp_tests[j].expect));
		}
		if (wcscmp(b, fp_tests[j].expect) != 0)
			t_error("bad floating-point conversion: got \"%ls\", want \"%ls\"\n", b, fp_tests[j].expect);
	}
}
