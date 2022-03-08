#include "gtest/gtest.h"
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include "test.h"
/**  
* @brief  register a test suit named "PopenSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  PopenSuite
*/

using namespace std;
using namespace testing::ext;
//namespace {
class PopenSuite: public testing::Test {
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
 * @tc.name      : PopenSuite001
 * @tc.desc      : Test PopenSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

#define TEST1(r, f, x, m) do { \
	((r) = (f)) == (x) || (t_error("%s failed (" m ")\n", #f, r, x), 0); \
	EXPECT_EQ((i) , (x)); \
} while(0)

#define TEST_E(f) do {\
	(errno = 0); \
	EXPECT_TRUE(f) << #f << " failed (errno = " << errno << ")" << endl; \
} while(0)

#define TEST_S(s, x, m) EXPECT_TRUE(!strcmp((s),(x))) << "[" << s << "] != [" << x << "] (" << m << endl;

static sig_atomic_t got_sig;

static void handler(int sig) {
	got_sig = 1;
}


HWTEST_F(PopenSuite, PopenSuite001, Function | MediumTest | Level2)
{
    int i;
	char foo[6];
	char cmd[64];
	FILE *f;

	TEST_E(f = popen("echo hello", "r"));
	printf("popen:%p\n",f);
	if (f) {
		TEST_E(fgets(foo, sizeof foo, f));
		TEST_S(foo, "hello", "child process did not say hello");
		int h = pclose(f);
		TEST1(i, h, 0, "exit status %04x != %04x");
		printf("pclose:%p h:%d\n",f,h);
	}

	signal(SIGUSR1, handler);
	snprintf(cmd, sizeof cmd, "read a ; test \"x$a\" = xhello && kill -USR1 %d", getpid());
	TEST_E(f = popen(cmd, "w"));
	if (f) {
		TEST_E(fputs("hello", f) >= 0);
		TEST1(i, pclose(f), 0, "exit status %04x != %04x");
		TEST1(i, got_sig, 1, "child process did not send signal");
	}
	signal(SIGUSR1, SIG_DFL);
}
