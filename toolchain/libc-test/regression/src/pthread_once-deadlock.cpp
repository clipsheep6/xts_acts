// commit: 7e6be42a77989c01155bdc7333ea58206e1563d4 2011-03-08
// pthread_once should not deadlock
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "pthread_onceDeadlockSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  pthread_onceDeadlockSuite
*/

using namespace std;
using namespace testing::ext;
class pthread_onceDeadlockSuite: public testing::Test {
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
 * @tc.name      : pthread_onceDeadlockSuite001
 * @tc.desc      : Test pthread_onceDeadlockSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(f) if ((r=(f))) t_error(#f " failed: %s\n", strerror(r))
#define E(f) if (f) t_error(#f " failed: %s\n", strerror(errno))

static int countt;

static void init(void)
{
	countt++;
}

static void *start(void *arg)
{
	void **a = (void **)arg;
	int r;
	E(sem_post((sem_t *)a[1]));
	T(pthread_once((pthread_once_t *)a[0], init));
	E(sem_post((sem_t *)a[1]));
	return 0;
}

static int deadlocked(sem_t *s)
{
	struct timespec ts;

	E(sem_wait(s));
	E(clock_gettime(CLOCK_REALTIME, &ts));
	ts.tv_nsec += 100*1000*1000;
	if (ts.tv_nsec >= 1000*1000*1000) {
		ts.tv_nsec -= 1000*1000*1000;
		ts.tv_sec += 1;
	}
	errno = 0;
	E(sem_timedwait(s,&ts));
	if (errno != ETIMEDOUT)
		return 0;
	t_error("pthread_once deadlocked\n");
	return 1;
}

HWTEST_F(pthread_onceDeadlockSuite,pthread_onceDeadlockTest, Function | MediumTest | Level2)
{
    pthread_t t1,t2,t3;
	pthread_once_t once = PTHREAD_ONCE_INIT;
	sem_t s1,s2,s3;
	void *p;
	int r;

	E(sem_init(&s1,0,0));
	E(sem_init(&s2,0,0));
	E(sem_init(&s3,0,0));
	T(pthread_create(&t1, 0, start, (void*[]){&once,&s1}));
	T(pthread_create(&t2, 0, start, (void*[]){&once,&s2}));
	T(pthread_create(&t3, 0, start, (void*[]){&once,&s3}));
	if (!deadlocked(&s1)) T(pthread_join(t1,&p));
	if (!deadlocked(&s2)) T(pthread_join(t2,&p));
	if (!deadlocked(&s3)) T(pthread_join(t3,&p));
	if (countt != 1)
		t_error("pthread_once ran init %d times instead of once\n", countt);
	E(sem_destroy(&s1));
	E(sem_destroy(&s2));
	E(sem_destroy(&s3));
}
