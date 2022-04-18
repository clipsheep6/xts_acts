#include <cerrno>
#include <cstring>
#include <pthread.h>

#include "gtest/gtest.h"

#define T(f) do {                                              \
    EXPECT_FALSE(r = (f)) << #f << " failed: " << strerror(r); \
} while (0)

using namespace std;
using namespace testing::ext;
class Pthread_rwlockEbusy : public testing::Test {};

static void *tryrdlock(void *arg)
{
    int r = pthread_rwlock_tryrdlock((pthread_rwlock_t *)arg);
    EXPECT_EQ(EBUSY, r) << "tryrdlock for wrlocked lock returned " << strerror(r) << ", want EBUSY" << endl;
    return nullptr;
}

static void *trywrlock(void *arg)
{
    int r = pthread_rwlock_trywrlock((pthread_rwlock_t *)arg);
    EXPECT_EQ(EBUSY, r) << "tryrdlock for rdlocked lock returned " << strerror(r) << ", want EBUSY" << endl;
    return nullptr;
}

/**
 * @tc.name      : Pthread_rwlockEbusyTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Pthread_rwlockEbusy, Pthread_rwlockEbusyTest, Function | MediumTest | Level2)
{
    pthread_t t;
    pthread_rwlock_t rw = PTHREAD_RWLOCK_INITIALIZER;
    void *p;
    int r;

    T(pthread_rwlock_rdlock(&rw));
    T(pthread_create(&t, 0, trywrlock, &rw));
    T(pthread_join(t, &p));
    T(pthread_rwlock_unlock(&rw));

    T(pthread_rwlock_wrlock(&rw));
    T(pthread_create(&t, 0, tryrdlock, &rw));
    T(pthread_join(t, &p));
    T(pthread_rwlock_unlock(&rw));
}
