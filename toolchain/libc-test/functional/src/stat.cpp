#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <unistd.h>
#include "gtest/gtest.h"
#include "test.h"

/**  
* @brief  register a test suit named "StatSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StatSuite
*/

using namespace std;
using namespace testing::ext;
class StatSuite: public testing::Test {
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
 * @tc.name      : StatSuite001
 * @tc.desc      : Test StatSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TEST_T(c, ...) ((c) ? 1 : (t_error(#c" failed: " __VA_ARGS__),0))

HWTEST_F(StatSuite, StatTest, Function | MediumTest | Level2)
{
	struct stat st;
	FILE *f;
	time_t t;
	
	int fg = stat(".",&st);
    if (TEST_T(fg==0, "errno = %s\n", strerror(errno))) {
		EXPECT_EQ(0 , fg);
		EXPECT_TRUE(S_ISDIR(st.st_mode)) << endl;
		EXPECT_GT(st.st_nlink , 0) << (uintmax_t)st.st_nlink << endl;
		t = time(0);
		EXPECT_LE(st.st_ctime , t) << (intmax_t)st.st_ctime << " > " << (intmax_t)t << endl;
		EXPECT_LE(st.st_mtime , t) << (intmax_t)st.st_mtime << " > " << (intmax_t)t << endl;
		EXPECT_LE(st.st_atime , t) << (intmax_t)st.st_atime << " > " << (intmax_t)t << endl;
	}
	fg = stat("/dev/null",&st);
	if (TEST_T(fg==0, "errno = %s\n", strerror(errno))) {
		EXPECT_EQ(0 , fg);
		TEST_T(S_ISCHR(st.st_mode), "\n");
		EXPECT_TRUE(S_ISCHR(st.st_mode)) << endl;
	}

	if ((f = tmpfile())) {
		fputs("hello", f);
		fflush(f);
		fg = fstat(fileno(f),&st);
		if (TEST_T(fg==0, "errnp = %s\n", strerror(errno))) {
			EXPECT_EQ(0 , fg);
			EXPECT_EQ(st.st_uid , geteuid()) << (int)st.st_uid << " vs " << (int)geteuid() << endl;
			EXPECT_EQ(st.st_gid , getegid()) << (int)st.st_uid << " vs " << (int)geteuid() << endl;
			EXPECT_EQ(5 , st.st_size) << (intmax_t)st.st_size << " vs 5" << endl;
		}
		fclose(f);
	}
}
