#include <cerrno>
#include <string>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class FcntlSuite: public testing::Test {};

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
	int fd, r, exit_code;
	pid_t pid;
	int status;

	if (!TESTE(f=tmpfile())) return ;
	fd = fileno(f);

	fl.l_type = F_WRLCK;
	fl.l_whence = SEEK_SET;
	fl.l_start = 0;
	fl.l_len = 0;
	TESTE(fcntl(fd, F_SETLK, &fl)==0);

	pid = fork();
	if (!pid) {
		fl.l_type = F_RDLCK;
		_exit(fcntl(fd, F_SETLK, &fl)==0 ||
			(errno!=EAGAIN && errno!=EACCES));
	}
	while ((r = waitpid(pid, &status, 0))<0 && errno==EINTR);
	printf("line:%d r:%d \t status:%d \n",__LINE__, r, status);
	TESTT(status==0, "lock failed to work\n");
	if(WIFEXITED(status)) // 如果子进程通过 return, exit, _exit 正常结束, WIFEXITED() 返回 true
	{
		exit_code = WEXITSTATUS(status);
		printf("child's exit_code: %d\n", exit_code);
	}

	pid = fork();
	if (!pid) {
		fl.l_type = F_WRLCK;
		_exit(fcntl(fd, F_GETLK, &fl) || fl.l_pid != getppid());
	}
	while ((r = waitpid(pid, &status, 0))<0 && errno==EINTR);
	printf("line:%d r:%d \t status:%d \n",__LINE__, r, status);
	TESTT(status==0, "child failed to detect lock held by parent\n");
	if(WIFEXITED(status)) // 如果子进程通过 return, exit, _exit 正常结束, WIFEXITED() 返回 true
	{
		exit_code = WEXITSTATUS(status);
		printf("child's exit_code: %d\n", exit_code);
	}
	fclose(f);
}
