// commit: 370f78f2c80c64b7b0780a01e672494a26b5678e 2011-03-09
// commit: 0bed7e0acfd34e3fb63ca0e4d99b7592571355a9 2011-03-09
// raise should be robust against async fork in a signal handler
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RaiseRaceSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RaiseRaceSuite
*/

using namespace std;
using namespace testing::ext;
class RaiseRaceSuite: public testing::Test {
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
 * @tc.name      : RaiseRaceSuite001
 * @tc.desc      : Test RaiseRaceSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static volatile int c0;
static volatile int c1;
static volatile int child;

static void handler0(int sig)
{
	c0++;
}

static void handler1(int sig)
{
	c1++;
    pid_t pid = fork();
	switch (pid) {
	case 0: child=1; break;
	case -1: EXPECT_NE(-1,pid) << "fork failed: " << strerror(errno) << endl;
}

static void *start(void *arg)
{
	int i,r,s;

	for (i = 0; i < 1000; i++) {
		r = raise(SIGRTMIN);
        EXPECT_FALSE(r) << "raise failed: " << strerror(errno) << endl; 
	}
    EXPECT_EQ(1000,c0) << "lost signals: got " << c0 
    << ", wanted 1000 (ischild " << child << " forks " << c1 << endl;
	if (child)
		_exit(0);

	/* make sure we got all pthread_kills, then wait the forked children */
	while (c1 < 100);
	for (i = 0; i < 100; i++) {
		r = wait(&s);
        EXPECT_NE(-1,r) << "wait failed: " << strerror(errno) << endl;
        EXPECT_FALSE(!WIFEXITED(s) || WTERMSIG(s)) << "child failed: pid:" << r << " status:" << s << endl;
	}
	return 0;
}

HWTEST_F(RaiseRaceSuite,RaiseRaceTest, Function | MediumTest | Level2)
{
    pthread_t t;
	void *p;
	int r, i;// s;

    EXPECT_NE(SIG_ERR,signal(SIGRTMIN, handler0)) << "registering signal handler failed: " << strerror(errno) << endl;
    EXPECT_NE(SIG_ERR,signal(SIGRTMIN+1, handler1)) << "registering signal handler failed: " << strerror(errno) << endl;

	r = pthread_create(&t, 0, start, 0);
    EXPECT_FALSE(r) << "pthread_create failed: " << strerror(r) << endl;

	for (i = 0; i < 100; i++) {
		r = pthread_kill(t, SIGRTMIN+1);
        EXPECT_FALSE(r) << "phread_kill failed: " << strerror(r) << endl;

	}
	r = pthread_join(t,&p);
    EXPECT_FALSE(r) << "pthread_join failed: " << strerror(r) << endl;
}
