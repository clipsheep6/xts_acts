#include <cstdio>
#include <cstring>
#include <cerrno>
#include <climits>
#include <unistd.h>

#include "gtest/gtest.h"

#include "test.h"

#define TEST1(r, f, x, m) do{                                                      \
    errno = 0, ((r) = (f)) == (x) ||                                               \
                    (t_error("%s failed (" m ")\n", #f, r, x, strerror(errno)), 0);\
    EXPECT_EQ(r, x);                                                               \
} while(0)

#define TEST_S(s, x, m) EXPECT_TRUE(!strcmp((s), (x))) << "[" << a << "] != [" << x << "] (" << m << ")" << endl;

using namespace std;
using namespace testing::ext;
class Ungetc : public testing::Test {};

/**
 * @tc.name      : UngetcTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Ungetc, UngetcTest, Function | MediumTest | Level2)
{
    int i;
    char a[100];
    FILE *f;

    TEST1(i, !(f = tmpfile()), 0, "failed to create temp file %d!=%d (%s)");

    ASSERT_FALSE(!f);

    TEST1(i, fprintf(f, "hello, world\n"), 13, "%d != %d (%m)");
    TEST1(i, fseek(f, 0, SEEK_SET), 0, "%d != %d (%m)");

    TEST1(i, feof(f), 0, "%d != %d");
    TEST1(i, fgetc(f), 'h', "'%c' != '%c'");
    TEST1(i, ftell(f), 1, "%d != %d");
    TEST1(i, ungetc('x', f), 'x', "%d != %d");
    TEST1(i, ftell(f), 0, "%d != %d");
    TEST1(i, fscanf(f, "%[h]", a), 0, "got %d fields, expected %d");
    TEST1(i, ftell(f), 0, "%d != %d");
    TEST1(i, fgetc(f), 'x', "'%c' != '%c'");
    TEST1(i, ftell(f), 1, "%d != %d");

    TEST1(i, fseek(f, 0, SEEK_SET), 0, "%d != %d");
    TEST1(i, ungetc('x', f), 'x', "%d != %d");
    TEST1(i, fread(a, 1, sizeof a, f), 14, "read %d, expected %d");
    a[14] = 0;
    TEST_S(a, "xhello, world\n", "mismatch reading ungot character");

    TEST1(i, fseek(f, 0, SEEK_SET), 0, "%d != %d");
    TEST1(i, fscanf(f, "%[x]", a), 0, "got %d fields, expected %d");
    TEST1(i, ungetc('x', f), 'x', "unget failed after fscanf: %d != %d");
    TEST1(i, fgetc(f), 'x', "'%c' != '%c'");
    TEST1(i, fgetc(f), 'h', "'%c' != '%c'");

    fclose(f);
}
