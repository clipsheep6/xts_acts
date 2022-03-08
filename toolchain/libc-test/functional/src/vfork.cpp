// #define _GNU_SOURCE
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "VforkSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  VforkSuite
*/

using namespace std;
using namespace testing::ext;
class VforkSuite: public testing::Test {
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
 * @tc.name      : VforkSuite001
 * @tc.desc      : Test VforkSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

/* We use this instead of memcmp because some broken C libraries
 * add additional nonstandard fields to struct tm... */
#define TEST1(c, ...) { \
	(c) || (t_error(#c " failed: " __VA_ARGS__),0); \
	EXPECT_TRUE(c); \
}

static int w(pid_t pid)
{
	int r, s;
	r = waitpid(pid, &s, 0);
	if (r == -1) {
		EXPECT_NE(-1 , r);
		t_error("waitpid failed: %s\n", strerror(errno));
	}
	else if (r != pid) {
		EXPECT_EQ(r , pid);
		t_error("child pid was %d, waitpid returned %d\n", pid, r);
	}
	else
		return s;
	return -1;
}

static void test_exit(int code)
{
	pid_t pid;
	if((pid = vfork()) == 0) {
		_exit(code);
		EXPECT_NE(0 , pid);
		t_error("exit failed: %s\n", strerror(errno));
	}
	if (pid == -1) {
		EXPECT_NE(-1 , pid);
		t_error("vfork failed: %s\n", strerror(errno));
		return;
	}
	int r = w(pid);
	TEST1(WIFEXITED(r), "child terminated abnormally\n");
	TEST1(WEXITSTATUS(r) == code, "child exited with %d, expected %d\n", WEXITSTATUS(r), code);
}

static int sh(const char *cmd)
{
	pid_t pid;
	if((pid = vfork()) == 0) {
		execl("/bin/sh", "/bin/sh", "-c", cmd, (char*)0);
		EXPECT_NE(0 , pid);
		t_error("execl failed: %s\n", strerror(errno));
		_exit(1);
	}
	if (pid == -1) {
		EXPECT_NE(-1 , pid);
		t_error("vfork failed: %s\n", strerror(errno));
		return -1;
	}
	return w(pid);
}

static void test_shell_exit(const char *cmd, int code)
{
	int r = sh(cmd);
	TEST1(WIFEXITED(r), "child terminated abnormally\n");
	TEST1(WEXITSTATUS(r) == code, "child exited with %d, expected %d\n", WEXITSTATUS(r), code);
}

static void test_shell_kill(const char *cmd, int sig)
{
	int r = sh(cmd);
	TEST1(WIFSIGNALED(r), "child did not get killed\n");
	TEST1(WTERMSIG(r) == sig, "child is killed by %d, expected %d\n", WTERMSIG(r), sig);
}

HWTEST_F(VforkSuite, VforkTest, Function | MediumTest | Level2)
{
    test_exit(0);
	test_exit(1);
	test_shell_exit("exit 0", 0);
	test_shell_exit("exit 1", 1);
	test_shell_kill("kill -9 $$", 9);
}
