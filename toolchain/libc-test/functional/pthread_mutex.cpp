/* testing pthread mutex behaviour with various attributes */
#include <cstdio>
#include <cerrno>
#include <cstring>
#include <pthread.h>
#include <semaphore.h>  

#include "gtest/gtest.h"

#define T(f) do { \
    EXPECT_FALSE((r = (f))) << #f << " failed: " << strerror(r) << endl; \
} while (0)

#define E(f) do { \
    EXPECT_FALSE(f) << #f << #f << " failed: " << strerror(errno) << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class PthreadMutex : public testing::Test {};

static void *relock(void *arg)
{
    void **a = (void **)arg;
    int r, n = 2;

    T(pthread_mutex_lock((pthread_mutex_t *)a[0]));
    EXPECT_FALSE(sem_post((sem_t *)a[1]));
    *(int *)a[n] = pthread_mutex_lock((pthread_mutex_t *)a[0]);
    EXPECT_FALSE(sem_post((sem_t *)a[1]));

    T(pthread_mutex_unlock((pthread_mutex_t *)a[0]));
    if (*(int *)a[n] == 0) {
        T(pthread_mutex_unlock((pthread_mutex_t *)a[0]));
    }
    return nullptr;
}

static int test_relock(int mtype)
{
    struct timespec ts;
    pthread_t t;
    pthread_mutex_t m;
    pthread_mutexattr_t ma;
    sem_t s;
    int i, n = 100, n2 = 100;
    int r;
    void *p;
    void *a[] = {&m, &s, &i};

    T(pthread_mutexattr_init(&ma));
    T(pthread_mutexattr_settype(&ma, mtype));
    T(pthread_mutex_init((pthread_mutex_t *)a[0], &ma));
    T(pthread_mutexattr_destroy(&ma));
    E(sem_init((sem_t *)a[1], 0, 0));
    T(pthread_create(&t, 0, relock, a));
    EXPECT_FALSE(sem_wait((sem_t *)a[1]));
    EXPECT_FALSE(clock_gettime(CLOCK_REALTIME, &ts));
    ts.tv_nsec += n * n2 * n2;
    if (ts.tv_nsec >= n2 * n2 * n2) {
        ts.tv_nsec -= n2 * n2 * n2;
        ts.tv_sec += 1;
    }
    r = sem_timedwait((sem_t *)a[1], &ts);
    if (r == -1) {
        EXPECT_EQ(errno, ETIMEDOUT) << "sem_timedwait failed with unexpected error: " << strerror(errno) << endl;
        /* leave the deadlocked relock thread running */
        return -1;
    }
    T(pthread_join(t, &p));
    T(pthread_mutex_destroy((pthread_mutex_t *)a[0]));
    EXPECT_FALSE(sem_destroy((sem_t *)a[1]));
    return i;
}

static void *unlock(void *arg)
{
    void **a = (void **)arg;

    *(int *)a[1] = pthread_mutex_unlock((pthread_mutex_t *)a[0]);
    return nullptr;
}

static int test_unlock(int mtype)
{
    pthread_t t;
    pthread_mutex_t m;
    pthread_mutexattr_t ma;
    int i;
    int r;
    void *p;
    void *a[] = {&m, &i};

    T(pthread_mutexattr_init(&ma));
    T(pthread_mutexattr_settype(&ma, mtype));
    T(pthread_mutex_init((pthread_mutex_t *)a[0], &ma));
    T(pthread_mutexattr_destroy(&ma));
    T(pthread_create(&t, 0, unlock, a));
    T(pthread_join(t, &p));
    T(pthread_mutex_destroy((pthread_mutex_t *)a[0]));
    return i;
}

static int test_unlock_other(int mtype)
{
    pthread_t t;
    pthread_mutex_t m;
    pthread_mutexattr_t ma;
    int i;
    int r;
    void *p;
    void *a[] = {&m, &i};

    T(pthread_mutexattr_init(&ma));
    T(pthread_mutexattr_settype(&ma, mtype));
    T(pthread_mutex_init((pthread_mutex_t *)a[0], &ma));
    T(pthread_mutexattr_destroy(&ma));
    T(pthread_mutex_lock((pthread_mutex_t *)a[0]));
    T(pthread_create(&t, 0, unlock, a));
    T(pthread_join(t, &p));
    T(pthread_mutex_unlock((pthread_mutex_t *)a[0]));
    T(pthread_mutex_destroy((pthread_mutex_t *)a[0]));
    return i;
}

static void test_mutexattr()
{
    pthread_mutexattr_t a;
    int r;
    int i;

    T(pthread_mutexattr_init(&a));
    T(pthread_mutexattr_gettype(&a, &i));
    EXPECT_EQ(i, PTHREAD_MUTEX_DEFAULT) << "default mutex type is " << i << ", wanted PTHREAD_MUTEX_DEFAULT ("
                                        << PTHREAD_MUTEX_DEFAULT << ")" << endl;

    T(pthread_mutexattr_settype(&a, PTHREAD_MUTEX_ERRORCHECK));
    T(pthread_mutexattr_gettype(&a, &i));
    EXPECT_EQ(i, PTHREAD_MUTEX_ERRORCHECK) << "setting error check mutex type failed failed: got " << i << ", wanted "
                                           << PTHREAD_MUTEX_ERRORCHECK << endl;

    T(pthread_mutexattr_destroy(&a));
}

/**
 * @tc.name      : PthreadMutexTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PthreadMutex, PthreadMutexTest, Function | MediumTest | Level2)
{
    int i;

    test_mutexattr();

    i = test_relock(PTHREAD_MUTEX_NORMAL);
    EXPECT_EQ(i, -1) << "PTHREAD_MUTEX_NORMAL relock did not deadlock, got " << strerror(i) << endl;

    i = test_relock(PTHREAD_MUTEX_ERRORCHECK);
    EXPECT_EQ(i, EDEADLK) <<
        "PTHREAD_MUTEX_ERRORCHECK relock did not return EDEADLK, got " << (i == -1 ? "deadlock" : strerror(i)) << endl;

    i = test_relock(PTHREAD_MUTEX_RECURSIVE);
    EXPECT_EQ(i, 0) <<
        "PTHREAD_MUTEX_RECURSIVE relock did not succed, got " << (i == -1 ? "deadlock" : strerror(i)) << endl;

    i = test_unlock(PTHREAD_MUTEX_ERRORCHECK);
    EXPECT_EQ(i, EPERM) << "PTHREAD_MUTEX_ERRORCHECK unlock did not return EPERM, got " << strerror(i) << endl;

    i = test_unlock(PTHREAD_MUTEX_RECURSIVE);
    EXPECT_EQ(i, EPERM) << "PTHREAD_MUTEX_RECURSIVE unlock did not return EPERM, got " << strerror(i) << endl;

    i = test_unlock_other(PTHREAD_MUTEX_ERRORCHECK);
    EXPECT_EQ(i, EPERM) << "PTHREAD_MUTEX_ERRORCHECK unlock did not return EPERM, got " << strerror(i) << endl;

    i = test_unlock_other(PTHREAD_MUTEX_RECURSIVE);
    EXPECT_EQ(i, EPERM) << "PTHREAD_MUTEX_RECURSIVE unlock did not return EPERM, got " << strerror(i) << endl;
}
