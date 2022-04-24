#include <cstdio>
#include <cstring>
#include <cerrno>
#include <climits>
#include <cmath>

#include "gtest/gtest.h"

#include "test.h"

#define DISABLE_SLOW_TESTS

#define TESTT(r, f, x, m) do { \
    ((r) = (f)) == (x) || (t_error("%s failed (" m ")\n", #f, r, x), 0); \
    EXPECT_EQ((r), (x)); \
} while (0)

#define TEST_S(s, x, m) do { \
    EXPECT_TRUE(!strcmp((s), (x))) << "[" << s << "] != [" << (x) << "] (" << (m) << ")" << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class Snprintf : public testing::Test {};

static const struct {
    const char *fmt;
    int i;
    const char *expect;
} int_tests[] = {
    {"%04d", 12, "0012"},
    {"%.3d", 12, "012"},
    {"%3d", 12, " 12"},
    {"%-3d", 12, "12 "},
    {"%+3d", 12, "+12"},
    {"%+-5d", 12, "+12  "},
    {"%+- 5d", 12, "+12  "},
    {"%- 5d", 12, " 12  "},
    {"% d", 12, " 12"},
    {"%0-5d", 12, "12   "},
    {"%-05d", 12, "12   "},

    {"%.0d", 0, ""},
    {"%.0o", 0, ""},
    {"%#.0d", 0, ""},
    {"%#.0o", 0, "0"},
    {"%#.0x", 0, ""},

    {"%2.0u", 0, "  "},
    {"%02.0u", 0, "  "},
    {"%2.0d", 0, "  "},
    {"%02.0d", 0, "  "},
    {"% .0d", 0, " "},
    {"%+.0d", 0, "+"},

    {"%x", 63, "3f"},
    {"%#x", 63, "0x3f"},
    {"%X", 63, "3F"},

    {"%o", 15, "17"},
    {"%#o", 15, "017"},

    {"%#o", 0, "0"},
    {"%#.0o", 0, "0"},
    {"%#.1o", 0, "0"},
    {"%#o", 1, "01"},
    {"%#.0o", 1, "01"},
    {"%#.1o", 1, "01"},
    {"%#04o", 1, "0001"},
    {"%#04.0o", 1, "  01"},
    {"%#04.1o", 1, "  01"},
    {"%04o", 1, "0001"},
    {"%04.0o", 1, "   1"},
    {"%04.1o", 1, "   1"},
    {nullptr, 0.0, nullptr}};

static const struct {
    const char *fmt;
    double f;
    const char *expect;
} fp_tests[] = {
    {"%a", 0.0, "0x0p+0"},
    {"%e", 0.0, "0.000000e+00"},
    {"%f", 0.0, "0.000000"},
    {"%g", 0.0, "0"},
    {"%#g", 0.0, "0.00000"},
    {"%la", 0.0, "0x0p+0"},
    {"%le", 0.0, "0.000000e+00"},
    {"%lf", 0.0, "0.000000"},
    {"%lg", 0.0, "0"},
    {"%#lg", 0.0, "0.00000"},

    {"%f", 1.1, "1.100000"},
    {"%f", 1.2, "1.200000"},
    {"%f", 1.3, "1.300000"},
    {"%f", 1.4, "1.400000"},
    {"%f", 1.5, "1.500000"},
    {"%.4f", 1.06125, "1.0613"},
    {"%.4f", 1.03125, "1.0312"},
    {"%.2f", 1.375, "1.38"},
    {"%.1f", 1.375, "1.4"},
    {"%.1lf", 1.375, "1.4"},
    {"%.15f", 1.1, "1.100000000000000"},
    {"%.16f", 1.1, "1.1000000000000001"},
    {"%.17f", 1.1, "1.10000000000000009"},
    {"%.2e", 1500001.0, "1.50e+06"},
    {"%.2e", 1505000.0, "1.50e+06"},
    {"%.2e", 1505000.00000095367431640625, "1.51e+06"},
    {"%.2e", 1505001.0, "1.51e+06"},
    {"%.2e", 1506000.0, "1.51e+06"},

    {"%.15g", 1.23456789012345, "1.23456789012345"},

    {"%g", 0.0001, "0.0001"},
    {"%g", 0.00001, "1e-05"},
    {"%g", 123456, "123456"},
    {"%g", 1234567, "1.23457e+06"},
    {"%.7g", 1234567, "1234567"},
    {"%.7g", 12345678, "1.234568e+07"},
    {"%.8g", 0.1, "0.1"},
    {"%.9g", 0.1, "0.1"},
    {"%.10g", 0.1, "0.1"},
    {"%.11g", 0.1, "0.1"},

    {"%.15f", M_PI, "3.141592653589793"},
    {"%.18f", M_PI, "3.141592653589793116"},

    {"%.0f", 340282366920938463463374607431768211456.0,
     "340282366920938463463374607431768211456"},
    {nullptr, 0.0, nullptr}};

/**
 * @tc.name      : SnprintfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Snprintf, SnprintfTest, Function | MediumTest | Level2)
{
    int i, j, k;
    char b[2000];

    TESTT(i, snprintf(0, 0, "%d", 123456), 6, "length returned %d != %d");
    TESTT(i, snprintf(0, 0, "%.4s", "hello"), 4, "length returned %d != %d");
    TESTT(i, snprintf(b, 0, "%.0s", "goodbye"), 0, "length returned %d != %d");

    strcpy(b, "xxxxxxxx");
    TESTT(i, snprintf(b, 4, "%d", 123456), 6, "length returned %d != %d");
    TEST_S(b, "123", "incorrect output");
    TESTT(i, b[5], 'x', "buffer overrun");

    TESTT(i, snprintf(b, sizeof b, "%.1022f", 0x1p-1021), 1024, "%d != %d");
    b[1] = '0';
    for (i = 0; i < 1021; i++) {
        for (k = 0, j = 1023; j > 0; j--) {
            if (b[j] < '5') {
                b[j] += b[j] - '0' + k, k = 0;
            }
            else {
                b[j] += b[j] - '0' - 10 + k, k = 1;
            }
        }
    }
    TESTT(i, b[1], '1', "'%c' != '%c'");
    for (j = 2; b[j] == '0'; j++) {}
    TESTT(i, j, 1024, "%d != %d");

#ifndef DISABLE_SLOW_TESTS
    errno = 0;
    TESTT(i, snprintf(nullptr, 0, "%.*u", 2147483647, 0), 2147483647, "cannot print max length %d");
    TESTT(i, snprintf(nullptr, 0, "%.*u ", 2147483647, 0), -1, "integer overflow %d");
    TESTT(i, errno, EOVERFLOW, "after overflow: %d != %d");
#endif
    for (j = 0; int_tests[j].fmt; j++) {
        i = snprintf(b, sizeof b, int_tests[j].fmt, int_tests[j].i);
        EXPECT_EQ(i, strlen(int_tests[j].expect)) << "snprintf(b, sizeof b, \"" << int_tests[j].fmt <<
            "\", " << int_tests[j].i << ") returned " << i << " wanted " << strlen(int_tests[j].expect) << endl;
        EXPECT_EQ(0, strcmp(b, int_tests[j].expect)) << "bad integer conversion: got \"" << b << "\", want \""
                                                     << int_tests[j].expect << "\"" << endl;
    }

    for (j = 0; fp_tests[j].fmt; j++) {
        i = snprintf(b, sizeof b, fp_tests[j].fmt, fp_tests[j].f);
        EXPECT_EQ(i, strlen(fp_tests[j].expect)) << "snprintf(b, sizeof b, \"" << fp_tests[j].fmt <<
            "\", " << fp_tests[j].f << ") returned " << i << " wanted " << strlen(fp_tests[j].expect) << endl;
        EXPECT_EQ(0, strcmp(b, fp_tests[j].expect)) <<
            "bad floating-point conversion: got \"" << b << "\", want \"" << fp_tests[j].expect << "\"\"" << endl;
    }

    TESTT(i, snprintf(0, 0, "%.4a", 1.0), 11, "%d != %d");
}
