#include "gtest/gtest.h"
#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include "test.h"
/**  
* @brief  register a test suit named "PthreadGettidNpSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  PthreadGettidNpSuite
* @param  test suit name is  PthreadGettidNpSuiteSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadGettidNpSuite: public testing::Test {
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
 * @tc.name      : PthreadGettidNpSuite001
 * @tc.desc      : Test PthreadGettidNpSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TESTT(c, ...) EXPECT_TRUE((c)) << #c << " failed: " << __VA_ARGS__ << endl;

static pthread_mutex_t mutex_t;

void* pthread_test(void* arg)
{
    pthread_mutex_lock(&mutex_t);
    *((pid_t *)arg) = gettid();
    pthread_mutex_unlock(&mutex_t);
    return NULL;
}

HWTEST_F(PthreadGettidNpSuite, PthreadGettidNpSuite001, Function | MediumTest | Level2)
{
    pthread_mutex_init(&mutex_t, NULL);
    TESTT(gettid() == pthread_gettid_np(pthread_self()),"pthread_gettid_np() is failed\n");

    pthread_mutex_lock(&mutex_t);
    pid_t tid;
    pthread_t t;
    pthread_create(&t,NULL,pthread_test,&tid);
    pid_t recv_result = pthread_gettid_np(t);
    
    pthread_mutex_unlock(&mutex_t);
    TESTT(0 == pthread_join(t,NULL),"pthread_join is failed\n");
    TESTT(tid == recv_result,"the tid of pthread or tid of pthread_gettid_np() is wrong\n");
}
