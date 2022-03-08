// commit: 59666802fba592a59f2f4ea4dcb053287fd55826 2011-02-15
// pthread_create should return EAGAIN on failure
#include <pthread.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadCreateOomSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadCreateOomSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadCreateOomSuite: public testing::Test {
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
 * @tc.name      : PthreadCreateOomSuite001
 * @tc.desc      : Test PthreadCreateOomSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static void *start(void *arg)
{
	return 0;
}

HWTEST_F(PthreadCreateOomSuite,PthreadCreateOomTest, Function | MediumTest | Level2)
{
    pthread_t td;
	int r, arg;

	EXPECT_GE(t_memfill() , 0) << "memfill failed" << endl;
	r = pthread_create(&td, 0, start, &arg);
	EXPECT_NE(r , 0) << "pthread_create succeeded" << endl;
	EXPECT_EQ(EAGAIN , r) << "pthread_create should fail with EAGAIN but failed with " 
	<< r << " (" << strerror(r) << ")" <<endl;
}
