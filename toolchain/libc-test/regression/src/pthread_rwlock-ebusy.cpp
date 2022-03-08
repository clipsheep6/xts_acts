// commit: e5dd18319bbd47c89aac5e1571771958a43e067d 2011-03-08
// pthread_rwlock_try* should fail with EBUSY
#include <pthread.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Pthread_rwlockEbusySuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Pthread_rwlockEbusySuite
*/

using namespace std;
using namespace testing::ext;
class Pthread_rwlockEbusySuite: public testing::Test {
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
 * @tc.name      : Pthread_rwlockEbusySuite001
 * @tc.desc      : Test Pthread_rwlockEbusySuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(f) EXPECT_FALSE(r=(f)) << #f << " failed: " << strerror(r)

static void *tryrdlock(void *arg)
{
	int r = pthread_rwlock_tryrdlock((pthread_rwlock_t *)arg);
	EXPECT_EQ(EBUSY,r) << "tryrdlock for wrlocked lock returned " << strerror(r) << ", want EBUSY" << endl;
	return 0;
}

static void *trywrlock(void *arg)
{
	int r = pthread_rwlock_trywrlock((pthread_rwlock_t *)arg);
	EXPECT_EQ(EBUSY,r) << "tryrdlock for rdlocked lock returned " << strerror(r) << ", want EBUSY" << endl;
	return 0;
}

HWTEST_F(Pthread_rwlockEbusySuite,Pthread_rwlockEbusyTest, Function | MediumTest | Level2)
{
    pthread_t t;
	pthread_rwlock_t rw = PTHREAD_RWLOCK_INITIALIZER;
	void *p;
	int r;

	T(pthread_rwlock_rdlock(&rw));
	T(pthread_create(&t, 0, trywrlock, &rw));
	T(pthread_join(t, &p));
	T(pthread_rwlock_unlock(&rw));

	T(pthread_rwlock_wrlock(&rw));
	T(pthread_create(&t, 0, tryrdlock, &rw));
	T(pthread_join(t, &p));
	T(pthread_rwlock_unlock(&rw));

}
