// gcc 4.9.0 introduced an invalid optimization for local weak alias symbols
// which drops stdout fflush from exit in musl
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=61144
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FflushExitSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FflushExitSuite
*/

using namespace std;
using namespace testing::ext;
class FflushExitSuite: public testing::Test {
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
 * @tc.name      : FflushExitSuite001
 * @tc.desc      : Test FflushExitSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define ASSERT(c) do { \
	errno = 0;EXPECT_FALSE(!(c)) << #c << "failed (errno: " << strerror(errno) << ")" << endl;\
} while(0)

HWTEST_F(FflushExitSuite, FflushExitTest, Function | MediumTest | Level2)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
	int fd, pid, status;
	char c;

	ASSERT((fd = mkstemp(tmp)) > 2);
	ASSERT((pid = fork()) >= 0);
	if (pid == 0) {
		ASSERT(close(1) == 0);
		ASSERT(dup(fd) == 1);
		ASSERT(fwrite("x", 1, 1, stdout) == 1);
		exit(t_status);
	}
	ASSERT(waitpid(pid, &status, 0) == pid);
	ASSERT(WIFEXITED(status) && WEXITSTATUS(status) == 0);
	ASSERT(pread(fd, &c, 1, 0) == 1);
	ASSERT(c == 'x');
	ASSERT(unlink(tmp) == 0);
}
