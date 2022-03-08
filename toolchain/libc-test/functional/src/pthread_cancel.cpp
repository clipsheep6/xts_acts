#include "gtest/gtest.h"
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include "test.h"
#include <stdio.h>

/**  
* @brief  register a test suit named "PthreadCancelSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  PthreadCancelSuite
*/

using namespace std;
using namespace testing::ext;
//namespace {
class PthreadCancelSuite: public testing::Test {
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
 * @tc.name      : PthreadCancelSuite001
 * @tc.desc      : Test PthreadCancelSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTC(c, m) EXPECT_TRUE((c)) << #c << " failed (" << m << ")" << endl; 
#define TESTR(r, f, m) EXPECT_EQ(((r) = (f)) , 0) << #f << " failed: " << strerror(r) << " (" << m << ")" << endl;

static void *start_async(void *arg)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, 0);
	sem_post((sem_t *)arg);
	for (;;);
	return 0;
}

static void cleanup1(void *arg)
{
	*(int *)arg = 1;
}

static void cleanup2(void *arg)
{
	*(int *)arg += 2;
}

static void cleanup3(void *arg)
{
	*(int *)arg += 3;
}

static void cleanup4(void *arg)
{
	*(int *)arg += 4;
}

static void *start_single(void *arg)
{
	pthread_cleanup_push(cleanup1, arg);
	sleep(3);
	pthread_cleanup_pop(0);
	return 0;
}

static void *start_nested(void *arg)
{
	int *foo = (int *)arg;
	pthread_cleanup_push(cleanup1, foo);
	pthread_cleanup_push(cleanup2, foo+1);
	pthread_cleanup_push(cleanup3, foo+2);
	pthread_cleanup_push(cleanup4, foo+3);
	sleep(3);
	pthread_cleanup_pop(0);
	pthread_cleanup_pop(0);
	pthread_cleanup_pop(0);
	pthread_cleanup_pop(0);
	return 0;
}

HWTEST_F(PthreadCancelSuite, PthreadCancelSuite001, Function | MediumTest | Level2)
{
    pthread_t td;
	sem_t sem1;
	int r;
	void *res;
	int foo[4];
	
	TESTR(r, sem_init(&sem1, 0, 0), "creating semaphore");

	/* Asynchronous cancellation */
	TESTR(r, pthread_create(&td, 0, start_async, &sem1), "failed to create thread");
	while (sem_wait(&sem1));
	TESTR(r, pthread_cancel(td), "canceling");
	TESTR(r, pthread_join(td, &res), "joining canceled thread");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status");

	/* Cancellation cleanup handlers */
	foo[0] = 0;
	TESTR(r, pthread_create(&td, 0, start_single, foo), "failed to create thread");
	TESTR(r, pthread_cancel(td), "cancelling");
	TESTR(r, pthread_join(td, &res), "joining canceled thread");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status");
	TESTC(foo[0] == 1, "cleanup handler failed to run");

	/* Nested cleanup handlers */
	memset(foo, 0, sizeof foo);
	TESTR(r, pthread_create(&td, 0, start_nested, foo), "failed to create thread");
	TESTR(r, pthread_cancel(td), "cancelling");
	TESTR(r, pthread_join(td, &res), "joining canceled thread");
	TESTC(res == PTHREAD_CANCELED, "canceled thread exit status");
	TESTC(foo[0] == 1, "cleanup handler failed to run");
	TESTC(foo[1] == 2, "cleanup handler failed to run");
	TESTC(foo[2] == 3, "cleanup handler failed to run");
	TESTC(foo[3] == 4, "cleanup handler failed to run");
}
