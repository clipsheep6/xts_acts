#include <pthread.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadTsdSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadTsdSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadTsdSuite: public testing::Test {
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
 * @tc.name      : PthreadTsdSuite001
 * @tc.desc      : Test PthreadTsdSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTC(c, m) { \
	(c) || (t_error("%s failed (" m ")\n", #c), 0); \
	EXPECT_TRUE(c); \
}
#define TESTR(r, f, m) { \
	((r) = (f)) == 0 || (t_error("%s failed: %s (" m ")\n", #f, strerror(r)), 0); \
	EXPECT_EQ(0 , ((r) = (f))); \
}

static pthread_key_t k1, k2;

static void dtor(void *p)
{
	*(int *)p = *(int *)1;
}

static void *start(void *arg)
{
	int *p = (int *)arg;
	if (pthread_setspecific(k1, p) || pthread_setspecific(k2, p+1))
		return arg;
	return 0;
}

HWTEST_F(PthreadTsdSuite, PthreadTsdSuite001, Function | MediumTest | Level2)
{
    pthread_t td;
	int r;
	void *res;
	int foo[2], bar[2];
	
	/* Test POSIX thread-specific data */
	TESTR(r, pthread_key_create(&k1, dtor), "failed to create key");
	TESTR(r, pthread_key_create(&k2, dtor), "failed to create key");
	foo[0] = foo[1] = 0;
	TESTR(r, pthread_setspecific(k1, bar), "failed to set tsd");
	TESTR(r, pthread_setspecific(k2, bar+1), "failed to set tsd");
	TESTR(r, pthread_create(&td, 0, start, foo), "failed to create thread");
	TESTR(r, pthread_join(td, &res), "failed to join");
	TESTC(res == 0, "pthread_setspecific failed in thread");
	TESTC(foo[0] == 1, "dtor failed to run");
	TESTC(foo[1] == 1, "dtor failed to run");
	TESTC(pthread_getspecific(k1) == bar, "tsd corrupted");
	TESTC(pthread_getspecific(k2) == bar+1, "tsd corrupted");
	TESTR(r, pthread_setspecific(k1, 0), "failed to clear tsd");
	TESTR(r, pthread_setspecific(k2, 0), "failed to clear tsd");
	TESTR(r, pthread_key_delete(k1), "failed to destroy key");
	TESTR(r, pthread_key_delete(k2), "failed to destroy key");
}
