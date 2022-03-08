// commit: 19e35c500bd2b5e6146e42705ab9b69c155a2006 2011-02-17
// commit: 187fe29d5b89644b68cade75a34257a1c32a75f6 2011-02-17
// non-standard musl specific behaviour
// daemon should not fork in case of failure of chdir or open, but
// since setsid and fork may still fail after fork this behaviour
// is not very useful
#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "DaemonFailureSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  DaemonFailureSuite
*/

using namespace std;
using namespace testing::ext;
class DaemonFailureSuite: public testing::Test {
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
 * @tc.name      : DaemonFailureSuite001
 * @tc.desc      : Test DaemonFailureSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
int daemon(int, int);

HWTEST_F(DaemonFailureSuite, DaemonFailureTest, Function | MediumTest | Level2)
{
    int r, pid, fd[2], fdout, s;
	char c;

	r = pipe(fd);
	ASSERT_NE(-1 , r) << "pipe failed: " << strerror(errno) << endl;
	fdout = dup(1);
	ASSERT_NE(-1 , fdout) << "dup(1) failed: " << strerror(errno) << endl;
	r = fork();
	ASSERT_NE(-1 , r) << "fork failed: " << strerror(errno) << endl;

	if (r == 0) {
		/* exhausting all fds makes open("/dev/null") fail in daemon */
		t_fdfill();
		pid = getpid();
		errno = 0;
		r = daemon(0, 0);
		if (dup2(fdout,1) == -1) {
			write(fdout, "ERROR:\n", 7);
			EXPECT_NE(-1 , dup2(fdout,1)) << "failed to dup pipe fd for communicating results: " << strerror(errno) << endl;
		}
		EXPECT_EQ(-1 , r) << "daemon should have failed" << endl;
		EXPECT_EQ(EMFILE , errno) << "daemon should have failed with " << EMFILE << " [EMFILE] got " 
		<< errno <<" [" << strerror(errno) << "]" << endl;
		EXPECT_FALSE(getpid() != pid || getppid() == 1) << "daemon forked despite failure: ppid is "
		<< getppid() << ", pid is " << getpid() << ", old pid is " << pid << endl;
		EXPECT_EQ(-1 , write(fd[1], (char *)"1" + !t_status, 1)) << "write failed: " << strerror(errno) << endl;
		return;
	}
	close(fd[1]);
	EXPECT_EQ(r , waitpid(r, &s, 0)) << strerror(errno) << endl;
	EXPECT_FALSE(!WIFEXITED(s)) << "child exited abnormally (signal " <<  WIFSIGNALED(s) ? WTERMSIG(s) : 0 << ")" << endl;
	EXPECT_FALSE(WEXITSTATUS(s)) << "child exited with " << WEXITSTATUS(s) << endl;
	r = read(fd[0], &c, 1);
	EXPECT_NE(-1 , r) << "read failed: " << strerror(errno)<< endl;
	EXPECT_EQ(0 , r) << "read failed: child did not send its exit status" << endl;
	EXPECT_NE(0 , c) << "child failed" << endl;
}
