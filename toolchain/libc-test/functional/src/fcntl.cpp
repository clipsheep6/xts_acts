#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FcntlSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  FcntlSuite
*/

using namespace std;
using namespace testing::ext;
class FcntlSuite: public testing::Test {
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
 * @tc.name      : FcntlSuite001
 * @tc.desc      : Test LibcTestCase001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTT(c, ...) ((c) ? 1 : (t_error(#c" failed: " __VA_ARGS__),0))
#define TESTE(c) (errno=0, TESTT(c, "errno = %s\n", strerror(errno)))

HWTEST_F(FcntlSuite, FcntlSuite001, Function | MediumTest | Level2)
{
    struct flock fl = {0};
	FILE *f;
	int fd;
	pid_t pid;
	int status;

	errno=0;
	ASSERT_TRUE((f=tmpfile())) << "errno = " << strerror(errno) << endl;
	fd = fileno(f);

	fl.l_type = F_WRLCK;
	fl.l_whence = SEEK_SET;
	fl.l_start = 0;
	fl.l_len = 0;
	errno=0;
	EXPECT_TRUE(fcntl(fd, F_SETLK, &fl)==0) << "errno = " << strerror(errno) << endl;

	pid = fork();
	if (!pid) {
		fl.l_type = F_RDLCK;
		_exit(fcntl(fd, F_SETLK, &fl)==0 ||
			(errno!=EAGAIN && errno!=EACCES));
	}
	while (waitpid(pid, &status, 0)<0 && errno==EINTR);
	EXPECT_EQ(0 , status) << "child failed to detect lock held by parent" << endl;
	pid = fork();
	if (!pid) {
		fl.l_type = F_WRLCK;
		_exit(fcntl(fd, F_GETLK, &fl) || fl.l_pid != getppid());
	}
	while (waitpid(pid, &status, 0)<0 && errno==EINTR);
	EXPECT_EQ(0 , status) << "child failed to detect lock held by parent" << endl;

	fclose(f);
}
