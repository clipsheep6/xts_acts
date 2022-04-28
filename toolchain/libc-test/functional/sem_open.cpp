#include <cstdlib>
#include <cstdio>
#include <cerrno>
#include <cstring>
#include <ctime>
#include <semaphore.h>
#include <fcntl.h>
#include <unistd.h>

#include "gtest/gtest.h"

#include "test.h"

#define TEST_T(c, ...) \
    ((c) || (t_error(#c " failed: " __VA_ARGS__), 0))

using namespace std;
using namespace testing::ext;
class SemOpen : public testing::Test {};

/**
 * @tc.name      : SemOpenTest
 * @tc.desc      : 
 * @tc.level     : Level 2
 */
HWTEST_F(SemOpen, SemOpenTest, Function | MediumTest | Level2)
{
    char buf[100];
    struct timespec ts;
    sem_t *sem, *sem2;
    int val;

    clock_gettime(CLOCK_REALTIME, &ts);
    snprintf(buf, sizeof buf, "/testsuite-%d-%d", (int)getpid(), (int)ts.tv_nsec);

    TEST_T((sem = sem_open(buf, O_CREAT | O_EXCL, 0700, 1)) != SEM_FAILED,
           "could not open sem: %s\n", strerror(errno));
    errno = 0;
    TEST_T(sem_open(buf, O_CREAT | O_EXCL, 0700, 1) == SEM_FAILED,
           "reopening should fail with O_EXCL\n");
    TEST_T(errno == EEXIST,
           "after reopen failure errno is \"%s\" (%d); want EEXIST (%d)\n", strerror(errno), errno, EEXIST);

    TEST_T(sem_getvalue(sem, &val) == 0, "failed to get sem value\n");
    TEST_T(val == 1, "wrong initial semaphore value: %d\n", val);

    TEST_T((sem2 = sem_open(buf, 0)) == sem,
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
