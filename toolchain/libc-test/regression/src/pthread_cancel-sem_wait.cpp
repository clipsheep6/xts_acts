// sem_wait and sem_timedwait are cancellation points
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadCancelSemWaitSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadCancelSemWaitSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadCancelSemWaitSuite: public testing::Test {
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
 * @tc.name      : PthreadCancelSemWaitSuite001
 * @tc.desc      : Test PthreadCancelSemWaitSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TESTC(c, m) EXPECT_TRUE(c) << #c << " failed ( " << m << ")" << endl;
#define TESTR(r, f, m) EXPECT_TRUE(((r) = (f)) == 0) << #f << " failed: " << strerror(r) << "(" << m << ")" << endl;

static sem_t sem1, sem2;

static int seqno;

static void wait_cancel(void *arg)
{
	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, 0);
	while (sem_wait(&sem1));
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, 0);
	seqno = 1;
}

static void *start_sem_wait(void *arg)
{
	wait_cancel(arg);
	sem_wait(&sem2);
	seqno = 2;
	return 0;
}

static void *start_sem_timedwait(void *arg)
{
	wait_cancel(arg);
    struct timespec ts;
    ts.tv_sec = 1;
    ts.tv_nsec = 0;
	sem_timedwait(&sem2, &ts);
	seqno = 2;
	return 0;
}

HWTEST_F(PthreadCancelSemWaitSuite, PthreadCancelSemWaitTest, Function | MediumTest | Level2)
{
    pthread_t td;
	int r;
	void *res;

	TESTR(r, sem_init(&sem1, 0, 0), "creating semaphore");
	TESTR(r, sem_init(&sem2, 0, 1), "creating semaphore");

	/* Cancellation on uncontended sem_wait */
	seqno = 0;
	TESTR(r, pthread_create(&td, 0, start_sem_wait, 0), "failed to create thread");
	TESTR(r, pthread_cancel(td), "canceling");
	sem_post(&sem1);
	TESTR(r, pthread_join(td, &res), "joining canceled thread after uncontended sem_wait");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status after uncontended sem_wait");
	TESTC(seqno == 1, "uncontended sem_wait");

	/* Cancellation on blocking sem_wait */
	seqno = 0;
	sem_trywait(&sem2);
	TESTR(r, pthread_create(&td, 0, start_sem_wait, 0), "failed to create thread");
	TESTR(r, pthread_cancel(td), "canceling");
	sem_post(&sem1);
	TESTR(r, pthread_join(td, &res), "joining canceled thread after blocking sem_wait");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status after blocking sem_wait");
	TESTC(seqno == 1, "blocking sem_wait");

	/* Cancellation on uncontended sem_timedwait */
	seqno = 0;
	sem_post(&sem2);
	TESTR(r, pthread_create(&td, 0, start_sem_timedwait, 0), "failed to create thread");
	TESTR(r, pthread_cancel(td), "canceling");
	sem_post(&sem1);
	TESTR(r, pthread_join(td, &res), "joining canceled thread after uncontended sem_timedwait");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status after uncontended sem_timedwait");
	TESTC(seqno == 1, "uncontended sem_timedwait");

	/* Cancellation on blocking sem_timedwait */
	seqno = 0;
	sem_trywait(&sem2);
	TESTR(r, pthread_create(&td, 0, start_sem_timedwait, 0), "failed to create thread");
	TESTR(r, pthread_cancel(td), "canceling");
	sem_post(&sem1);
	TESTR(r, pthread_join(td, &res), "joining canceled thread after blocking sem_timedwait");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status after blocking sem_timedwait");
	TESTC(seqno == 1, "blocking sem_timedwait");
}
