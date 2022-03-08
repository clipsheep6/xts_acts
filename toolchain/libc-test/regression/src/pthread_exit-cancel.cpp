// commit: 1a9a2ff7b0daf99100db53440a0b18b2801566ca 2011-02-13
// pthread_exit should call cancelation handlers
#include <pthread.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Pthread_exitCancelSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Pthread_exitCancelSuite
*/

using namespace std;
using namespace testing::ext;
class Pthread_exitCancelSuite: public testing::Test {
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
 * @tc.name      : Pthread_exitCancelSuite001
 * @tc.desc      : Test Pthread_exitCancelSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TEST_T(r, f) EXPECT_FALSE(r=(f))  << #f << " failed: " << strerror(r)

static void cleanup(void *arg)
{
	*(int *)arg = 1;
}

static void *start(void *arg)
{
	pthread_cleanup_push(cleanup, arg);
	pthread_exit(0);
	pthread_cleanup_pop(0);
	return arg;
}

HWTEST_F(Pthread_exitCancelSuite,Pthread_exitCancelTest, Function | MediumTest | Level2)
{
    pthread_t td;
	void *status;
	int arg = 0;
	int r;

	TEST_T(r, pthread_create(&td, 0, start, &arg));
	TEST_T(r, pthread_join(td, &status));
    EXPECT_FALSE(status) << "expected 0 thread exit status, got 0x" << hex << (long)status << endl;
    EXPECT_EQ(1,arg) << "cleanup handler failed to run" << endl;
}
