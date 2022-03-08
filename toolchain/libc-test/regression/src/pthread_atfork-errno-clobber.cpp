#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadAtforkErrnoClobberSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadAtforkErrnoClobberSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadAtforkErrnoClobberSuite: public testing::Test {
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
 * @tc.name      : PthreadAtforkErrnoClobberSuite001
 * @tc.desc      : Test PthreadAtforkErrnoClobberSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TESTT(c, ...) ((c) ? 1 : (t_error(#c" failed: " __VA_ARGS__),0))

static void handler_errno(void)
{
	errno = 0;
}

HWTEST_F(PthreadAtforkErrnoClobberSuite, PthreadAtforkErrnoClobberTest, Function | MediumTest | Level2)
{
    t_setrlim(RLIMIT_NPROC, 0);
	pthread_atfork(handler_errno, handler_errno, handler_errno);

	pid_t pid;
	if (!TESTT((pid = fork()) == -1, "fork succeeded despite rlimit\n")) {
        EXPECT_EQ(-1,pid);
		if (!pid) _exit(0);
		while (waitpid(pid, NULL, 0)<0 && errno==EINTR);
	} else {
        EXPECT_NE(0,errno) << "fork failed but errno was clobbered" << endl;
	}
}
