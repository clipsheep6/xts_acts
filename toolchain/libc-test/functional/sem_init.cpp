/* unnamed semaphore sanity check */
#include <ctime>
#include <cstring>
#include <cerrno>
#include <pthread.h>
#include <semaphore.h>

#include "gtest/gtest.h"

#define T(f) do {                                                   \
    EXPECT_FALSE(f) << #f << " failed: " << strerror(errno) << endl;\
} while (0)

#define T2(r, f) do {                                                   \
    EXPECT_FALSE((r = (f))) << #f << " failed: " << strerror(r) << endl;\
} while (0)

using namespace std;
using namespace testing::ext;
class SemInit : public testing::Test {};

static void *start(void *arg)
{
    struct timespec ts;
    sem_t *s = (sem_t *)arg;
    T(clock_gettime(CLOCK_REALTIME, &ts));
    ts.tv_sec += 1;
    T(sem_post(s));
    T(sem_timedwait(s + 1, &ts));
    return nullptr;
}

static void many_waiters()
{
    pthread_t t[3];
    sem_t s[2];
    int r;
    void *p;

    T(sem_init(s, 0, 0));
    T(sem_init(s + 1, 0, 0));
    T2(r, pthread_create(t, 0, start, s));
    T2(r, pthread_create(t + 1, 0, start, s));
    T2(r, pthread_create(t + 2, 0, start, s));
    T(sem_wait(s));
    T(sem_wait(s));
    T(sem_wait(s));
    T(sem_getvalue(s, &r));
    EXPECT_FALSE(r) << "sem value should be 0, got " << r << endl;
    T(sem_post(s + 1));
    T(sem_post(s + 1));
    T(sem_post(s + 1));
    T2(r, pthread_join(t[0], &p));
    T2(r, pthread_join(t[1], &p));
    T2(r, pthread_join(t[2], &p));
    T(sem_getvalue(s + 1, &r));
    EXPECT_FALSE(r) << "sem value should be 0, got " << r << endl;
    T(sem_destroy(s));
    T(sem_destroy(s + 1));
}

static void single_thread()
{
    struct timespec ts;
    sem_t s;
    int r;

    T(sem_init(&s, 0, 1));
    T(sem_wait(&s));
    T(sem_getvalue(&s, &r));

    EXPECT_FALSE(r) << "sem value should be 0, got " << r << endl;
    EXPECT_FALSE(sem_trywait(&s) != -1 || errno != EAGAIN) 
        << "sem_trywait should fail with EAGAIN, got " << strerror(errno) << endl;
    errno = 0;
    T(clock_gettime(CLOCK_REALTIME, &ts));

    EXPECT_FALSE(sem_timedwait(&s, &ts) != -1 || errno != ETIMEDOUT) 
        << "sem_timedwait should fail with ETIMEDOUT, got " << strerror(errno) << endl;
    T(sem_destroy(&s));
}

/**
 * @tc.name      : SemInitTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SemInit, SemInitTest, Function | MediumTest | Level2)
{
    single_thread();
    many_waiters();
}
