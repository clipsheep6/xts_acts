#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "UngetcSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  UngetcSuite
*/

using namespace std;
using namespace testing::ext;
class UngetcSuite: public testing::Test {
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
 * @tc.name      : UngetcSuite001
 * @tc.desc      : Test UngetcSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

/* We use this instead of memcmp because some broken C libraries
 * add additional nonstandard fields to struct tm... */
#define TEST1(r, f, x, m) { \
	errno = 0, ((r) = (f)) == (x) || \
	(t_error("%s failed (" m ")\n", #f, r, x, strerror(errno)), 0); \
	EXPECT_EQ(r , x); \
}

#define TEST_S(s, x, m) EXPECT_TRUE(!strcmp((s),(x))) << "[" << a << "] != [" << x << "] (" << m << ")" << endl;

HWTEST_F(UngetcSuite, UngetcTest, Function | MediumTest | Level2)
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
