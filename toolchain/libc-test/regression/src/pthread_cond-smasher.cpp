// by Jens Gustedt from http://www.openwall.com/lists/musl/2014/08/11/1
// c11 threads test was removed and t_error messages were added
// the test deadlocks with a broken cond var implementation so
// cond_waits were changed to cond_timedwaits with short timeout
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
//#include "test.h"
# include <pthread.h>
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PthreadCondSmasherSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PthreadCondSmasherSuite
*/

using namespace std;
using namespace testing::ext;
class PthreadCondSmasherSuite: public testing::Test {
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
 * @tc.name      : PthreadCondSmasherSuite001
 * @tc.desc      : Test PthreadCondSmasherSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
# define VERSION "POSIX threads"

typedef pthread_mutex_t mutex;
typedef pthread_cond_t condition;
typedef pthread_t thread;
typedef void* thread_ret;

# define mutex_init(M) pthread_mutex_init((M), 0)
# define mutex_destroy pthread_mutex_destroy
# define mutex_lock pthread_mutex_lock
# define mutex_unlock pthread_mutex_unlock

# define condition_init(C) pthread_cond_init((C), 0)
# define condition_destroy pthread_cond_destroy
# define condition_wait pthread_cond_wait
# define condition_timedwait pthread_cond_timedwait
# define condition_signal pthread_cond_signal
# define condition_broadcast pthread_cond_broadcast


# define thread_create(ID, START, ARG) pthread_create(ID, 0, START, ARG)
# define thread_join pthread_join

# define gettime(TS) clock_gettime(CLOCK_REALTIME, (TS))

# define errorstring strerror

#ifdef __GLIBC__
# define LIBRARY "glibc"
#else
# define LIBRARY "unidentified"
#endif

#define trace2(L, ...) fprintf(stderr, __FILE__ ":" #L ": " __VA_ARGS__)
#define trace1(L, ...) trace2(L, __VA_ARGS__)
#ifdef DEBUG
# define trace(...) trace1(__LINE__, __VA_ARGS__)
#else
# define trace(...) do { if (0) trace1(__LINE__, __VA_ARGS__); } while (0)
#endif

//#define tell(...) trace1(__LINE__, __VA_ARGS__)
#define tell(...) trace(__VA_ARGS__)

enum {
  phases = 10,
  threads = 10,
};

static pthread_t id[threads];
static unsigned args[threads];

static pthread_mutex_t mut[phases];
static unsigned inside[phases];

static condition cond_client;
static condition cond_main;
static unsigned volatile phase;

static void settimeout(struct timespec *ts)
{
	EXPECT_FALSE(clock_gettime(CLOCK_REALTIME, ts)) << "clock_gettime failed: " << strerror(errno) << endl;
	ts->tv_nsec += 500*1000*1000;
	if (ts->tv_nsec >= 1000*1000*1000) {
		ts->tv_nsec -= 1000*1000*1000;
		ts->tv_sec++;
	}
}

static void *client(void *arg) {
	struct timespec ts;
	unsigned * number = (unsigned *)arg;
	for (unsigned i = 0; i < phases; ++i) {
		trace("thread %u in phase %u\n", *number, i);
		mutex_lock(&mut[i]);
		++inside[i];
		if (inside[i] == threads) {
			trace("thread %u is last, signalling main\n", *number);
			int ret = condition_signal(&cond_main);
			trace("thread %u is last, signalling main, %s\n", *number, errorstring(ret));
			EXPECT_FALSE(ret) << "thread " << *number << " is last in phase " << i 
			<< ", signalling main failed: " << errorstring(ret) << endl;
		}
		while (i == phase) {
			tell("thread %u in phase %u (%u), waiting\n", *number, i, phase);
			settimeout(&ts);
			int ret = condition_timedwait(&cond_client, &mut[i], &ts);
			trace("thread %u in phase %u (%u), finished, %s\n", *number, i, phase, errorstring(ret));
			EXPECT_FALSE(ret) << 
			"thread " << *number << " in phase " << i << "(" << phase  << ") finished waiting: " << errorstring(ret) << endl;
			//exit(0);
		}
		int ret = mutex_unlock(&mut[i]);
		trace("thread %u in phase %u (%u), has unlocked mutex: %s\n", *number, i, phase, errorstring(ret));
		EXPECT_FALSE(ret) <<  "thread " << *number << " in phase " << i << "(" << phase 
		<< "), failed to unlock: " << errorstring(ret) << endl;
	}
  	return 0;
}

HWTEST_F(PthreadCondSmasherSuite,PthreadCondSmasherTest, Function | MediumTest | Level2)
{
    struct timespec ts;

	tell("start up of main, using %s, library %s\n", VERSION, LIBRARY);
	condition_init(&cond_client);
	condition_init(&cond_main);
	for (unsigned i = 0; i < phases; ++i) {
		mutex_init(&mut[i]);
	}
	mutex_lock(&mut[0]);

	for (unsigned i = 0; i < threads; ++i) {
		args[i] = i;
		thread_create(&id[i], client, &args[i]);
	}

	while (phase < phases) {
		while (inside[phase] < threads) {
		trace("main seeing %u threads in phase %u, waiting\n", inside[phase], phase);
		settimeout(&ts);
		int ret = condition_timedwait(&cond_main, &mut[phase], &ts);
		tell("main seeing %u threads in phase %u, %s\n", inside[phase], phase, errorstring(ret));
		ASSERT_FALSE(ret) << "main thread in phase " << phase << " (" << inside[phase] 
		<< " threads inside), finished waiting: " << errorstring(ret) << endl;
		}
		/* now we know that everybody is waiting inside, lock the next
		mutex, if any, such that nobody can enter the next phase
		without our permission. */
		if (phase < phases-1)
			mutex_lock(&mut[phase+1]);
		/* Now signal all clients, update the phase count and release the
		mutex they are waiting for. */
		int ret = condition_broadcast(&cond_client);
		trace("main has broadcast to %u: %s\n", phase, errorstring(ret));
		EXPECT_FALSE(ret) << "main broadcast in phase " << phase << " failed: " << errorstring(ret) << endl;
		++phase;
		ret = mutex_unlock(&mut[phase-1]);
		trace("main has unlocked mutex %u: %s\n", phase-1, errorstring(ret));
		EXPECT_FALSE(ret) << "main failed to unlock mutex " << phase-1 << ": " << errorstring(ret) << endl;
	}



	trace("main finished loop\n");

	void *pret = (void *){0};
	for (unsigned i = 0; i < threads; ++i) {
		trace("main joining thread %u\n", i);
		int ret = thread_join(id[i], &pret);
		trace("main joining thread %u: %s\n", i, errorstring(ret));
		EXPECT_FALSE(ret) << "main failed join thread " << i << ": " << errorstring(ret) << endl;
	}

	/* C functions to destroy the control structures don't return error
		information, so we can't check for errors, here. */
	for (unsigned i = 0; i < phases; ++i) {
		mutex_destroy(&mut[i]);
	}
	condition_destroy(&cond_main);
	condition_destroy(&cond_client);

	tell("shut down of main, using %s, library %s\n", VERSION, LIBRARY);
}
