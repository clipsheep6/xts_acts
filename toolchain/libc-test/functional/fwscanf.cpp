#include <cstdio>
#include <cstring>
#include <cerrno>
#include <climits>
#include <cwchar>
#include <unistd.h>

#include "gtest/gtest.h"

#include "test.h"

#define TESTT(r, f, x, m) do { \
    errno = 0; \
    ((r) = (f)) == (x) || \
        (t_error("%s failed (" m ")\n", #f, r, x, strerror(errno)), 0); \
    EXPECT_EQ((r), (x)); \
} while (0)
    
#define TEST_S(s, x, m) do { \
    EXPECT_TRUE(!strcmp((s), (x))) << "[" << (s) << "] != [" << (x) << "] (" << (m) << ")" << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class Fwscanf : public testing::Test {};

static FILE *writetemp(const char *data)
{
    FILE *f = tmpfile();
    size_t n = strlen(data);
    if (!f) {
        return nullptr;  
    }
    if (write(fileno(f), data, n) != n) {
        EXPECT_EQ(write(fileno(f), data, n), n) << "write: " << strerror(errno) << endl;
        fclose(f);
        return nullptr;
    }
    if (lseek(fileno(f), 0, SEEK_SET) != 0) {
        EXPECT_EQ(lseek(fileno(f), 0, SEEK_SET), 0) << "lseek: " << strerror(errno) << endl;
        fclose(f);
        return nullptr;
    }
    return f;
}

/**
 * @tc.name      : FwscanfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Fwscanf, FwscanfTest, Function | MediumTest | Level2)
{
    int i, x, y;
    double u;
    char a[100], b[100];
    FILE *f;

    TESTT(i, !!(f = writetemp("      42")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        TESTT(i, fwscanf(f, L" %n%*d%n", &x, &y), 0, "%d != %d");
        TESTT(i, x, 6, "%d != %d");
        TESTT(i, y, 8, "%d != %d");
        TESTT(i, ftell(f), 8, "%d != %d");
        TESTT(i, !!feof(f), 1, "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("[abc123]....x")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        TESTT(i, fwscanf(f, L"%10[^]]%n%10[].]%n", a, &x, b, &y), 2, "%d != %d");
        TEST_S(a, "[abc123", "wrong result for %[^]]");
        TEST_S(b, "]....", "wrong result for %[].]");
        TESTT(i, x, 7, "%d != %d");
        TESTT(i, y, 12, "%d != %d");
        TESTT(i, ftell(f), 12, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        TESTT(i, fgetwc(f), 'x', "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("0x1p 12")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        u = -1;
        TESTT(i, fwscanf(f, L"%lf%n %d", &u, &x, &y), 0, "%d != %d");
        TESTT(u, u, -1.0, "%g != %g");
        TESTT(i, x, -1, "%d != %d");
        TESTT(i, y, -1, "%d != %d");
        TESTT(i, ftell(f), 4, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        TESTT(i, fgetwc(f), ' ', "%d != %d");
        rewind(f);
        TESTT(i, fgetwc(f), '0', "%d != %d");
        TESTT(i, fgetwc(f), 'x', "%d != %d");
        TESTT(i, fwscanf(f, L"%lf%n%c %d", &u, &x, a, &y), 3, "%d != %d");
        TESTT(u, u, 1.0, "%g != %g");
        TESTT(i, x, 1, "%d != %d");
        TESTT(i, a[0], 'p', "%d != %d");
        TESTT(i, y, 12, "%d != %d");
        TESTT(i, ftell(f), 7, "%d != %d");
        TESTT(i, !!feof(f), 1, "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("0x.1p4    012")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        u = -1;
        TESTT(i, fwscanf(f, L"%lf%n %i", &u, &x, &y), 2, "%d != %d");
        TESTT(u, u, 1.0, "%g != %g");
        TESTT(i, x, 6, "%d != %d");
        TESTT(i, y, 10, "%d != %d");
        TESTT(i, ftell(f), 13, "%d != %d");
        TESTT(i, !!feof(f), 1, "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("0xx")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        TESTT(i, fwscanf(f, L"%x%n", &x, &y), 0, "%d != %d");
        TESTT(i, x, -1, "%d != %d");
        TESTT(i, y, -1, "%d != %d");
        TESTT(i, ftell(f), 2, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        fclose(f);
    }
}
