/* testing pthread mutex behaviour with various attributes */
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadMutexSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadMutexSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadMutexSuite: public testing::Test {
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
 * @tc.name      : PthreadMutexSuite001
 * @tc.desc      : Test PthreadMutexSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define T(f) EXPECT_FALSE((r=(f))) << #f << " failed: " << strerror(r) << endl;
#define E(f) EXPECT_FALSE(f) << #f << #f << " failed: " << strerror(errno) << endl;	

static void *relock(void *arg)
{
	void **a = (void **)arg;
	int r;

	T(pthread_mutex_lock((pthread_mutex_t *)a[0]));
	EXPECT_FALSE(sem_post((sem_t *)a[1]));
	*(int*)a[2] = pthread_mutex_lock((pthread_mutex_t *)a[0]);
	EXPECT_FALSE(sem_post((sem_t *)a[1]));

	T(pthread_mutex_unlock((pthread_mutex_t *)a[0]));
	if (*(int*)a[2] == 0)
		T(pthread_mutex_unlock((pthread_mutex_t *)a[0]));
	return 0;
}

static int test_relock(int mtype)
{
	struct timespec ts;
	pthread_t t;
	pthread_mutex_t m;
	pthread_mutexattr_t ma;
	sem_t s;
	int i;
	int r;
	void *p;
	void *a[] = {&m,&s,&i};

	T(pthread_mutexattr_init(&ma));
	T(pthread_mutexattr_settype(&ma, mtype));
	T(pthread_mutex_init((pthread_mutex_t *)a[0], &ma));
	T(pthread_mutexattr_destroy(&ma));
	E(sem_init((sem_t *)a[1], 0, 0));
	T(pthread_create(&t, 0, relock, a));
	EXPECT_FALSE(sem_wait((sem_t *)a[1]));
	EXPECT_FALSE(clock_gettime(CLOCK_REALTIME, &ts));
	ts.tv_nsec += 100*1000*1000;
	if (ts.tv_nsec >= 1000*1000*1000) {
		ts.tv_nsec -= 1000*1000*1000;
		ts.tv_sec += 1;
	}
	r = sem_timedwait((sem_t *)a[1],&ts);
	if (r == -1) {
		if (errno != ETIMEDOUT)
			t_error("sem_timedwait failed with unexpected error: %s\n", strerror(errno));
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

	*(int*)a[1] = pthread_mutex_unlock((pthread_mutex_t *)a[0]);
	return 0;
}

static int test_unlock(int mtype)
{
	pthread_t t;
	pthread_mutex_t m;
	pthread_mutexattr_t ma;
	int i;
	int r;
	void *p;
	void *a[] = {&m,&i};

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
	void *a[] = {&m,&i};

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
	//pthread_mutex_t m;
	pthread_mutexattr_t a;
	int r;
	int i;

	T(pthread_mutexattr_init(&a));
	T(pthread_mutexattr_gettype(&a, &i));
	if (i != PTHREAD_MUTEX_DEFAULT)
		t_error("default mutex type is %d, wanted PTHREAD_MUTEX_DEFAULT (%d)\n", i, PTHREAD_MUTEX_DEFAULT);
	T(pthread_mutexattr_settype(&a, PTHREAD_MUTEX_ERRORCHECK));
	T(pthread_mutexattr_gettype(&a, &i));
	if (i != PTHREAD_MUTEX_ERRORCHECK)
		t_error("setting error check mutex type failed failed: got %d, wanted %d\n", i, PTHREAD_MUTEX_ERRORCHECK);
	T(pthread_mutexattr_destroy(&a));
}

HWTEST_F(PthreadMutexSuite, PthreadMutexSuite001, Function | MediumTest | Level2)
{
	int i;

	test_mutexattr();

	i = test_relock(PTHREAD_MUTEX_NORMAL);
	if (i != -1)
		t_error("PTHREAD_MUTEX_NORMAL relock did not deadlock, got %s\n", strerror(i));
	i = test_relock(PTHREAD_MUTEX_ERRORCHECK);
	if (i != EDEADLK)
		t_error("PTHREAD_MUTEX_ERRORCHECK relock did not return EDEADLK, got %s\n", i==-1?"deadlock":strerror(i));
	i = test_relock(PTHREAD_MUTEX_RECURSIVE);
	if (i != 0)
		t_error("PTHREAD_MUTEX_RECURSIVE relock did not succed, got %s\n", i==-1?"deadlock":strerror(i));

	i = test_unlock(PTHREAD_MUTEX_ERRORCHECK);
	if (i != EPERM)
		t_error("PTHREAD_MUTEX_ERRORCHECK unlock did not return EPERM, got %s\n", strerror(i));
	i = test_unlock(PTHREAD_MUTEX_RECURSIVE);
	if (i != EPERM)
		t_error("PTHREAD_MUTEX_RECURSIVE unlock did not return EPERM, got %s\n", strerror(i));

	i = test_unlock_other(PTHREAD_MUTEX_ERRORCHECK);
	if (i != EPERM)
		t_error("PTHREAD_MUTEX_ERRORCHECK unlock did not return EPERM, got %s\n", strerror(i));
	i = test_unlock_other(PTHREAD_MUTEX_RECURSIVE);
	if (i != EPERM)
		t_error("PTHREAD_MUTEX_RECURSIVE unlock did not return EPERM, got %s\n", strerror(i));

}
