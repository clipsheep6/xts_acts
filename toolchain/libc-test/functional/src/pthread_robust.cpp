#include <pthread.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>

/**  
* @brief  register a test suit named "PthreadRobustSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadRobustSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadRobustSuite: public testing::Test {
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
 * @tc.name      : PthreadRobustSuite001
 * @tc.desc      : Test PthreadRobustSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTT(r, f, m) { \
	((r) = (f)) == 0 || (t_error("%s failed: (pshared==%d, pi==%d) %s (" m ")\n", #f, pshared, pi, strerror(r)), 0); \
	EXPECT_EQ(0 , ((r) = (f))); \
}
#define TESTX(r, f, x, m) { \
	((r) = (f)) == (x) || (t_error("%s failed: (pshared==%d, pi==%d) got %d \"%s\" want %d \"%s\" (" m ")\n", #f, pshared, pi, r, strerror(r), x, strerror(x)), 0); \
	EXPECT_EQ((x) , ((r) = (f))); \
}

static void *start_lock(void *arg)
{
	pthread_mutex_lock((pthread_mutex_t *)arg);
	return 0;
}

static void *start_wait(void *arg)
{
	void **args = (void **)arg;
    struct timespec pec;
    pec.tv_nsec = 10000000;
	pthread_mutex_lock((pthread_mutex_t *)args[1]);
	pthread_barrier_wait((pthread_barrier_t *)args[0]);
	nanosleep(&pec, 0);
	return 0;
}

void f(int pshared, int pi)
{
	pthread_t td;
	int r;
	void *res;
	pthread_barrier_t barrier2;
	pthread_mutexattr_t mtx_a;
	pthread_mutex_t mtx;

	TESTT(r, pthread_barrier_init(&barrier2, 0, 2), "creating barrier");

	/* Robust mutexes */
	TESTT(r, pthread_mutexattr_init(&mtx_a), "initializing mutex attr");
	TESTT(r, pthread_mutexattr_setrobust(&mtx_a, PTHREAD_MUTEX_ROBUST), "setting robust attribute");
	if (pshared)
		TESTT(r, pthread_mutexattr_setpshared(&mtx_a, PTHREAD_PROCESS_SHARED), "setting pshared attribute");
	if (pi)
		TESTT(r, pthread_mutexattr_setprotocol(&mtx_a, PTHREAD_PRIO_INHERIT), "setting PI attribute");
	TESTT(r, pthread_mutex_init(&mtx, &mtx_a), "initializing robust mutex");
	TESTT(r, pthread_mutex_lock(&mtx), "locking robust mutex");
	int m = pthread_mutex_unlock(&mtx);
	TESTT(r, pthread_create(&td, 0, start_lock, &mtx), "failed to create thread");
	TESTT(r, pthread_join(td, &res), "joining thread");
	TESTX(r, pthread_mutex_lock(&mtx), EOWNERDEAD, "locking orphaned robust mutex");
	TESTT(r, pthread_mutex_unlock(&mtx), "unlocking orphaned robust mutex");
	TESTX(r, pthread_mutex_lock(&mtx), ENOTRECOVERABLE, "re-locking orphaned robust mutex");
	TESTT(r, pthread_mutex_destroy(&mtx), "destroying unrecoverable mutex");
	TESTT(r, pthread_mutex_init(&mtx, &mtx_a), "initializing robust mutex");
	TESTT(r, pthread_create(&td, 0, start_lock, &mtx), "failed to create thread");
	TESTT(r, pthread_join(td, &res), "joining thread");
	TESTX(r, pthread_mutex_lock(&mtx), EOWNERDEAD, "locking orphaned robust mutex");
	TESTT(r, pthread_mutex_consistent(&mtx), "");
	TESTT(r, pthread_mutex_unlock(&mtx), "unlocking orphaned robust mutex");
	TESTT(r, pthread_mutex_lock(&mtx), "re-locking orphaned robust mutex");
	TESTT(r, pthread_mutex_destroy(&mtx), "destroying mutex");
	TESTT(r, pthread_mutex_init(&mtx, &mtx_a), "");
	TESTT(r, pthread_create(&td, 0, start_wait, (void *[]){ &barrier2, &mtx }), "");
	r = pthread_barrier_wait(&barrier2);
	if (r && r != PTHREAD_BARRIER_SERIAL_THREAD)
		t_error("pthread_barrier_wait failed: got %d \"%s\", wanted either 0 or %d\n",
			r, strerror(r), PTHREAD_BARRIER_SERIAL_THREAD);
	TESTT(r, pthread_barrier_destroy(&barrier2), "");
	TESTX(r, pthread_mutex_lock(&mtx), EOWNERDEAD, "");
	TESTT(r, pthread_join(td, &res), "");
	TESTT(r, pthread_mutex_consistent(&mtx), "");
	TESTT(r, pthread_mutex_unlock(&mtx), "");
	TESTT(r, pthread_mutex_destroy(&mtx), "");
}

HWTEST_F(PthreadRobustSuite, PthreadRobustSuite001, Function | MediumTest | Level2)
{
    for (int pshared=0; pshared<=1; pshared++)
		for (int pi=0; pi<=1; pi++)
			f(pshared, pi);
}
