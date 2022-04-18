
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <climits>
#include <unistd.h>

#include "test.h"
#include "gtest/gtest.h"

#define TESTT(r, f, x, m) do {                                          \
    errno = 0;                                                          \
    ((r) = (f)) == (x) ||                                               \
        (t_error("%s failed (" m ")\n", #f, r, x, strerror(errno)), 0); \
    EXPECT_EQ((r), (x));                                                \
} while (0)

#define TEST_S(s, x, m) do {                                                                   \
    EXPECT_TRUE(!strcmp((s), (x))) << "[" << s << "] != [" << x << "] (" << m << ")" << endl;  \
} while (0)

using namespace std;
using namespace testing::ext;
class Fscanf : public testing::Test {};

static FILE *writetemp(const char *data)
{
    FILE *f = tmpfile();
    if (!f)
        return nullptr;

    if (!fwrite(data, strlen(data), 1, f)) {
        fclose(f);
        return nullptr;
    }
    rewind(f);
    return f;
}

/**
 * @tc.name      : FscanfTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Fscanf, FscanfTest, Function | MediumTest | Level2)
{
    int i, x, y;
    double u;
    char a[100], b[100];
    FILE *f;
    int p[2];

    TESTT(i, pipe(p), 0, "failed to open pipe %d!=%d (%s)");
    TESTT(i, !(f = fdopen(p[0], "rb")), 0, "failed to fdopen pipe %d!=%d (%s)");

    if (!f) {
        close(p[0]);
        close(p[1]);
        ASSERT_TRUE(f);
    }

    TESTT(i, write(p[1], "hello, world\n", 13), 13, "write error %d!=%d (%s)");
    TESTT(i, fscanf(f, "%s %[own]", a, b), 2, "got %d fields, expected %d");
    TEST_S(a, "hello,", "wrong result for %s");
    TEST_S(b, "wo", "wrong result for %[own]");
    TESTT(i, fgetc(f), 'r', "'%c' != '%c') (%s)");

    TESTT(i, write(p[1], " 0x12 0x34", 10), 10, "write error %d!=%d (%s)");
    TESTT(i, fscanf(f, "ld %5i%2i", &x, &y), 1, "got %d fields, expected %d");
    TESTT(i, x, 0x12, "%d != %d");
    TESTT(i, fgetc(f), '3', "'%c' != '%c'");

    fclose(f);
    close(p[1]);

    TESTT(i, !!(f = writetemp("      42")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        TESTT(i, fscanf(f, " %n%*d%n", &x, &y), 0, "%d != %d");
        TESTT(i, x, 6, "%d != %d");
        TESTT(i, y, 8, "%d != %d");
        TESTT(i, ftell(f), 8, "%d != %d");
        TESTT(i, !!feof(f), 1, "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("[abc123]....x")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        TESTT(i, fscanf(f, "%10[^]]%n%10[].]%n", a, &x, b, &y), 2, "%d != %d");
        TEST_S(a, "[abc123", "wrong result for %[^]]");
        TEST_S(b, "]....", "wrong result for %[].]");
        TESTT(i, x, 7, "%d != %d");
        TESTT(i, y, 12, "%d != %d");
        TESTT(i, ftell(f), 12, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        TESTT(i, fgetc(f), 'x', "%d != %d");
        fclose(f);
    }

    TESTT(i, !!(f = writetemp("0x1p 12")), 1, "failed to make temp file");
    if (f) {
        x = y = -1;
        u = -1;
        TESTT(i, fscanf(f, "%lf%n %d", &u, &x, &y), 0, "%d != %d");
        TESTT(u, u, -1.0, "%g != %g");
        TESTT(i, x, -1, "%d != %d");
        TESTT(i, y, -1, "%d != %d");
        TESTT(i, ftell(f), 4, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        TESTT(i, fgetc(f), ' ', "%d != %d");
        rewind(f);
        TESTT(i, fgetc(f), '0', "%d != %d");
        TESTT(i, fgetc(f), 'x', "%d != %d");
        TESTT(i, fscanf(f, "%lf%n%c %d", &u, &x, a, &y), 3, "%d != %d");
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
        TESTT(i, fscanf(f, "%lf%n %i", &u, &x, &y), 2, "%d != %d");
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
        TESTT(i, fscanf(f, "%x%n", &x, &y), 0, "%d != %d");
        TESTT(i, x, -1, "%d != %d");
        TESTT(i, y, -1, "%d != %d");
        TESTT(i, ftell(f), 2, "%d != %d");
        TESTT(i, feof(f), 0, "%d != %d");
        fclose(f);
    }
}
