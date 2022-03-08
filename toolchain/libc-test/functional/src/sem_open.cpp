/* named semaphore sanity check */
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <semaphore.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SemOpenSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SemOpenSuite
*/

using namespace std;
using namespace testing::ext;
class SemOpenSuite: public testing::Test {
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
 * @tc.name      : SemOpenSuite001
 * @tc.desc      : Test SemOpenSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TEST_T(c, ...) { \
	(c) || (t_error(#c " failed: " __VA_ARGS__),0); \
	EXPECT_TRUE(c); \
}

HWTEST_F(SemOpenSuite, SemOpenTest, Function | MediumTest | Level2)
{
    char buf[100];
	struct timespec ts;
	sem_t *sem, *sem2;
	int val;

	clock_gettime(CLOCK_REALTIME, &ts);
	snprintf(buf, sizeof buf, "/testsuite-%d-%d", (int)getpid(), (int)ts.tv_nsec);

	TEST_T((sem=sem_open(buf, O_CREAT|O_EXCL, 0700, 1)) != SEM_FAILED,
		"could not open sem: %s\n", strerror(errno));
	errno = 0;
	TEST_T(sem_open(buf, O_CREAT|O_EXCL, 0700, 1) == SEM_FAILED,
		"reopening should fail with O_EXCL\n");
	TEST_T(errno == EEXIST,
		"after reopen failure errno is \"%s\" (%d); want EEXIST (%d)\n", strerror(errno), errno, EEXIST);

	TEST_T(sem_getvalue(sem, &val) == 0, "failed to get sem value\n");
	TEST_T(val == 1, "wrong initial semaphore value: %d\n", val);

	TEST_T((sem2=sem_open(buf, 0)) == sem,
		"could not reopen sem: got %p, want %p\n", sem2, sem);

	errno = 0;
	TEST_T(sem_wait(sem) == 0, "%s\n", strerror(errno));
	TEST_T(sem_getvalue(sem2, &val) == 0, "%s\n", strerror(errno));
	TEST_T(val == 0, "wrong semaphore value on second handle: %d\n", val);

	errno = 0;
	TEST_T(sem_trywait(sem) == -1 && errno == EAGAIN,
		"trywait on locked sem: got errno \"%s\" (%d), want EAGAIN (%d)\n", strerror(errno), errno, EAGAIN);

	TEST_T(sem_post(sem) == 0, "%s\n", strerror(errno));
	TEST_T(sem_getvalue(sem2, &val) == 0, "%s\n", strerror(errno));
	TEST_T(val == 1, "wrong semaphore value on second handle: %d\n", val);

	TEST_T(sem_close(sem) == 0, "%s\n", strerror(errno));
	TEST_T(sem_close(sem) == 0, "%s\n", strerror(errno));
	TEST_T(sem_unlink(buf) == 0, "%s\n", strerror(errno));
}
