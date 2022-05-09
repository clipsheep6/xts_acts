#include <cstdlib>
#include <cstdio>
#include <cerrno>
#include <cstring>
#include <ctime>
#include <semaphore.h>
#include <fcntl.h>
#include <unistd.h>
#include <securec.h>

#include "gtest/gtest.h"

#include "test.h"

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
    snprintf_s(buf, sizeof buf, sizeof buf, "/testsuite-%d-%d",
        static_cast<int>(getpid()), static_cast<int>(ts.tv_nsec));

    EXPECT_TRUE((sem = sem_open(buf, O_CREAT | O_EXCL, 0700, 1)) != SEM_FAILED) <<
        "could not open sem: " << strerror(errno) << endl;
    errno = 0;
    EXPECT_TRUE(sem_open(buf, O_CREAT | O_EXCL, 0700, 1) == SEM_FAILED) << "reopening should fail with O_EXCL" << endl;
    EXPECT_TRUE(errno == EEXIST) << "after reopen failure errno is \"" <<
        strerror(errno) << "\" (" << errno << "); want EEXIST (" << EEXIST << ")" << endl;

    EXPECT_TRUE(sem_getvalue(sem, &val) == 0) << "failed to get sem value" << endl;
    EXPECT_TRUE(val == 1) << "wrong initial semaphore value: " << val << endl;

    EXPECT_TRUE((sem2 = sem_open(buf, 0)) == sem) << "could not reopen sem: got " << sem2 << ", want " << sem << endl;

    errno = 0;
    EXPECT_TRUE(sem_wait(sem) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(sem_getvalue(sem2, &val) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(val == 0) << "wrong semaphore value on second handle: " << val << endl;

    errno = 0;
    EXPECT_TRUE(sem_trywait(sem) == -1 && errno == EAGAIN) << "trywait on locked sem: got errno \"" <<
        strerror(errno) << "\" (" << errno << "), want EAGAIN (" << EAGAIN << ")" << endl;

    EXPECT_TRUE(sem_post(sem) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(sem_getvalue(sem2, &val) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(val == 1) << "wrong semaphore value on second handle: " << val << endl;

    EXPECT_TRUE(sem_close(sem) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(sem_close(sem) == 0) << strerror(errno) << endl;
    EXPECT_TRUE(sem_unlink(buf) == 0) << strerror(errno) << endl;
}
