#include <cstdio>
#include <cstring>
#include <cerrno>
#include <climits>
#include <cmath>
#include <cwchar>
#include <clocale>
#include <langinfo.h>

#include "gtest/gtest.h"

#include "test.h"

#define TEST_T(r, f, x, m) do {                        \
    ((r) = (f)) == (x) ||                              \
        (t_error("%s failed (" m ")\n", #f, r, x), 0); \
    EXPECT_EQ((r), (x));                               \
} while(0)

#define TEST_S(s, x, m) EXPECT_TRUE(!wcscmp((s), (x))) << "[" << s << "] != [" << x << "] (" << m << ")" << endl;

using namespace std;
using namespace testing::ext;
class Swprintf : public testing::Test {};

static const struct
{
    const wchar_t *fmt;
    int i;
    const wchar_t *expect;
} int_tests[] = {
    /* width, precision, alignment */
    {L"%04d", 12, L"0012"},
    {L"%.3d", 12, L"012"},
    {L"%3d", 12, L" 12"},
    {L"%-3d", 12, L"12 "},
    {L"%+3d", 12, L"+12"},
    {L"%+-5d", 12, L"+12  "},
    {L"%+- 5d", 12, L"+12  "},
    {L"%- 5d", 12, L" 12  "},
    {L"% d", 12, L" 12"},
    {L"%0-5d", 12, L"12   "},
    {L"%-05d", 12, L"12   "},

    /* ...explicit precision of 0 shall be no characters except for alt-octal. */
    {L"%.0d", 0, L""},
    {L"%.0o", 0, L""},
    {L"%#.0d", 0, L""},
    {L"%#.0o", 0, L"0"},
    {L"%#.0x", 0, L""},

    /* hex: test alt form and case */
    {L"%x", 63, L"3f"},
    {L"%#x", 63, L"0x3f"},
    {L"%X", 63, L"3F"},

    /* octal: test alt form */
    {L"%o", 15, L"17"},
    {L"%#o", 15, L"017"},

    {nullptr, 0.0, nullptr}};

static const struct {
    const wchar_t *fmt;
    double f;
    const wchar_t *expect;
} fp_tests[] = {
    /* basic form, handling of exponent/precision for 0 */
    {L"%e", 0.0, L"0.000000e+00"},
    {L"%f", 0.0, L"0.000000"},
    {L"%g", 0.0, L"0"},
    {L"%#g", 0.0, L"0.00000"},

    /* rounding */
    {L"%f", 1.1, L"1.100000"},
    {L"%f", 1.2, L"1.200000"},
    {L"%f", 1.3, L"1.300000"},
    {L"%f", 1.4, L"1.400000"},
    {L"%f", 1.5, L"1.500000"},

    /* correctness in DBL_DIG places */
    {L"%.15g", 1.23456789012345, L"1.23456789012345"},

    /* correct choice of notation for %g */
    {L"%g", 0.0001, L"0.0001"},
    {L"%g", 0.00001, L"1e-05"},
    {L"%g", 123456, L"123456"},
    {L"%g", 1234567, L"1.23457e+06"},
    {L"%.7g", 1234567, L"1234567"},
    {L"%.7g", 12345678, L"1.234568e+07"},

    /* pi in double precision, printed to a few extra places */
    {L"%.15f", M_PI, L"3.141592653589793"},
    {L"%.18f", M_PI, L"3.141592653589793116"},

    /* exact conversion of large integers */
    {L"%.0f", 340282366920938463463374607431768211456.0,
     L"340282366920938463463374607431768211456"},

    {nullptr, 0.0, nullptr}};

/**
 * @tc.name      : SwprintfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Swprintf, SwprintfTest, Function | MediumTest | Level2)
{
    int i, j;
    wchar_t b[500];

    (void)(setlocale(LC_CTYPE, "en_US.UTF-8") ||
           setlocale(LC_CTYPE, "en_GB.UTF-8") ||
           setlocale(LC_CTYPE, "en.UTF-8") ||
           setlocale(LC_CTYPE, "POSIX.UTF-8") ||
           setlocale(LC_CTYPE, "C.UTF-8") ||
           setlocale(LC_CTYPE, "UTF-8") ||
           setlocale(LC_CTYPE, ""));

    TEST_T(i, strcmp(nl_langinfo(CODESET), "UTF-8"), 0, "no UTF-8 locale; test_Ts might fail");

    TEST_T(i, swprintf(0, 0, L"%d", 123456) < 0, 1, "%d != %d");

    TEST_T(i, swprintf(b, 2, L"%lc", 0xc0), 1, "%d != %d");
    TEST_T(i, b[0], 0xc0, "wrong character %x != %x");
    TEST_T(i, swprintf(b, 2, L"%lc", 0x20ac), 1, "%d != %d");
    TEST_T(i, b[0], 0x20ac, "wrong character %x != %x");
    TEST_T(i, swprintf(b, 3, L"%s", "\xc3\x80!"), 2, "%d != %d");
    TEST_T(i, b[0], 0xc0, "wrong character %x != %x");
    TEST_T(i, swprintf(b, 2, L"%.1s", "\xc3\x80!"), 1, "%d != %d");
    TEST_T(i, b[0], 0xc0, "wrong character %x != %x");

    wcscpy(b, L"xxxxxxxx");
    TEST_T(i, swprintf(b, 4, L"%d", 123456) < 0, 1, "%d != %d");
    TEST_S(b, L"123", "incorrect output");
    TEST_T(i, b[5], 'x', "buffer overrun");

    for (j = 0; int_tests[j].fmt; j++) {
        i = swprintf(b, sizeof b, int_tests[j].fmt, int_tests[j].i);
        EXPECT_EQ(i, wcslen(int_tests[j].expect)) << "swprintf(b, sizeof b, \"" << int_tests[j].fmt 
            << "\", "  << int_tests[j].i << ") returned " << i << " wanted " << wcslen(int_tests[j].expect) << endl;
        EXPECT_EQ(wcscmp(b, int_tests[j].expect), 0) 
           << "bad integer conversion: got \"" << b << "\", want \"" << int_tests[j].expect << "\"" << endl;
    }

    for (j = 0; fp_tests[j].fmt; j++) {
        i = swprintf(b, sizeof b, fp_tests[j].fmt, fp_tests[j].f);
        EXPECT_EQ(i, wcslen(fp_tests[j].expect)) << "swprintf(b, sizeof b, \"" << fp_tests[j].fmt << "\", "
            << fp_tests[j].f << "\", " << ") returned " << i << " wanted " << wcslen(fp_tests[j].expect) << endl;
        EXPECT_EQ(wcscmp(b, fp_tests[j].expect), 0) 
            << "bad floating-point conversion: got \"" << b << "\", want \"" << fp_tests[j].expect << "\"" << endl;
    }
}
