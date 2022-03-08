#include "gtest/gtest.h"
#include <pthread.h>
#include <string.h>
#include "test.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "PthreadCondSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  PthreadCondSuite
*/

using namespace std;
using namespace testing::ext;
//namespace {
class PthreadCondSuite: public testing::Test {
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
 * @tc.name      : PthreadCondSuite001
 * @tc.desc      : Test PthreadCondSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTT(r, f, m) { \
	((r) = (f)) == 0 || (t_error("%s failed: %s (" m ")\n", #f, strerror(r)), 0); \
	EXPECT_EQ(0 , (r)); \
}


static void *start_signal(void *arg)
{
	void **args = (void **)arg;
	pthread_mutex_lock((pthread_mutex_t *)args[1]);
	pthread_cond_signal((pthread_cond_t *)(args[0]));
	pthread_mutex_unlock((pthread_mutex_t *)args[1]);
	return 0;
}

static void *start_wait(void *arg)
{
	void **args = (void **)arg;
	pthread_mutex_t *m = (pthread_mutex_t *)(args[1]);
	pthread_cond_t *c = (pthread_cond_t *)(args[0]);
	int *x = (int *)args[2];

	pthread_mutex_lock(m);
	while (*x) pthread_cond_wait(c, m);
	pthread_mutex_unlock(m);

	return 0;
}

HWTEST_F(PthreadCondSuite, PthreadCondSuite001, Function | MediumTest | Level2)
{printf("line:%d\n",__LINE__);
    pthread_t td, td1, td2, td3;
	int r;
	void *res;
	pthread_mutex_t mtx;
	pthread_cond_t cond;
	int foo[1];
printf("line:%d\n",__LINE__);
	/* Condition variables */
	TESTT(r, pthread_mutex_init(&mtx, 0), "");
	TESTT(r, pthread_cond_init(&cond, 0), "");
	TESTT(r, pthread_mutex_lock(&mtx), "");
	TESTT(r, pthread_create(&td, 0, start_signal, (void *[]){ &cond, &mtx }), "");
	TESTT(r, pthread_cond_wait(&cond, &mtx), "");
	TESTT(r, pthread_join(td, &res), "");
	TESTT(r, pthread_mutex_unlock(&mtx), "");
	TESTT(r, pthread_mutex_destroy(&mtx), "");
	TESTT(r, pthread_cond_destroy(&cond), "");
printf("line:%d\n",__LINE__);
	/* Condition variables with multiple waiters */
	TESTT(r, pthread_mutex_init(&mtx, 0), "");
	TESTT(r, pthread_cond_init(&cond, 0), "");
	TESTT(r, pthread_mutex_lock(&mtx), "");
	foo[0] = 1;
printf("line:%d\n",__LINE__);	
	TESTT(r, pthread_create(&td1, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_create(&td2, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_create(&td3, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_unlock(&mtx), "");
    struct timespec pec;
    pec.tv_nsec=1000000 ;
	nanosleep(&pec, 0);
	foo[0] = 0;
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_lock(&mtx), "");
	TESTT(r, pthread_cond_signal(&cond), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_unlock(&mtx), "");
	TESTT(r, pthread_mutex_lock(&mtx), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_cond_signal(&cond), "");
	TESTT(r, pthread_mutex_unlock(&mtx), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_lock(&mtx), "");
	TESTT(r, pthread_cond_signal(&cond), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_unlock(&mtx), "");
printf("line:%d\n",__LINE__);
	int p = pthread_join(td1, 0);
printf("line:%d p :%d\n",__LINE__ , p);
	TESTT(r, p, "");
printf("line:%d\n",__LINE__);
printf("line:%d\n",__LINE__);
	p = pthread_join(td2, 0);
printf("line:%d p :%d\n",__LINE__ , p);
	TESTT(r, p, "");
	TESTT(r, pthread_join(td3, 0), "");
printf("line:%d\n",__LINE__);
	TESTT(r, pthread_mutex_destroy(&mtx), "");
	TESTT(r, pthread_cond_destroy(&cond), "");
printf("line:%d\n",__LINE__);
	/* Condition variables with broadcast signals */
	TESTT(r, pthread_mutex_init(&mtx, 0), "");
	TESTT(r, pthread_cond_init(&cond, 0), "");
	TESTT(r, pthread_mutex_lock(&mtx), "");
	foo[0] = 1;
	TESTT(r, pthread_create(&td1, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
	TESTT(r, pthread_create(&td2, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
	TESTT(r, pthread_create(&td3, 0, start_wait, (void *[]){ &cond, &mtx, foo }), "");
	TESTT(r, pthread_mutex_unlock(&mtx), "");
	nanosleep(&pec, 0);
	TESTT(r, pthread_mutex_lock(&mtx), "");
	foo[0] = 0;
	TESTT(r, pthread_mutex_unlock(&mtx), "");
	TESTT(r, pthread_cond_broadcast(&cond), "");
	TESTT(r, pthread_join(td1, 0), "");
	TESTT(r, pthread_join(td2, 0), "");
	TESTT(r, pthread_join(td3, 0), "");
	TESTT(r, pthread_mutex_destroy(&mtx), "");
	TESTT(r, pthread_cond_destroy(&cond), "");
printf("line:%d finish running\n",__LINE__);
}
