// commit 3af2edee150484940916eba1984f78c3b965dd05 2014-02-07
// fix ftello result for append streams with unflushed output
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FtelloUnflushedAppendSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FtelloUnflushedAppendSuite
*/

using namespace std;
using namespace testing::ext;
class FtelloUnflushedAppendSuite: public testing::Test {
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
 * @tc.name      : FtelloUnflushedAppendSuite001
 * @tc.desc      : Test FtelloUnflushedAppendSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define ASSERT(c) do { \
	errno = 0;EXPECT_FALSE(!(c)) << #c << "failed (errno: " << strerror(errno) << ")" << endl;\
} while(0)


HWTEST_F(FtelloUnflushedAppendSuite, FtelloUnflushedAppendTest, Function | MediumTest | Level2)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
	int fd;
	FILE *f;
	off_t off;

	ASSERT((fd = mkstemp(tmp)) > 2);
	ASSERT(write(fd, "abcd", 4) == 4);
	ASSERT(close(fd) == 0);

	ASSERT((fd = open(tmp, O_WRONLY)) > 2);
	ASSERT(f = fdopen(fd, "a"));
	if (f) {
		ASSERT(fwrite("efg", 1, 3, f) == 3);
		ASSERT((off = ftello(f)) != -1);
		EXPECT_EQ(7,off) << "ftello is broken before flush: got " << (long long)off << ", want 7" << endl;
		ASSERT(fflush(f) == 0);
		ASSERT((off = ftello(f)) != -1);
		EXPECT_EQ(7,off) << "ftello is broken before flush: got " << (long long)off << ", want 7" << endl;	
		ASSERT(fclose(f) == 0);
	}
	if (fd > 2)
		ASSERT(unlink(tmp) == 0);
}
