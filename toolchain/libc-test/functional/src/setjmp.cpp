#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include "test.h"
#include "gtest/gtest.h"
#include <unistd.h>
/**  
* @brief  register a test suit named "SetJmpSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SetJmpSuite
*/

using namespace std;
using namespace testing::ext;
class SetJmpSuite: public testing::Test {
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
 * @tc.name      : SetJmpSuite001
 * @tc.desc      : Test SetJmpSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TESTT(c, ...) ((c) ? 1 : (t_error(#c" failed: " __VA_ARGS__),0))

HWTEST_F(SetJmpSuite, SetJmpTest, Function | MediumTest | Level2)
{
    int x = 0, r;
	jmp_buf jb;
	sigjmp_buf sjb;
	sigset_t oldset;
	sigset_t set, set2;

	if (!setjmp(jb)) {
		x = 1;
		longjmp(jb, 1);
	}
	TESTT(x==1, "setjmp/longjmp seems to have been bypassed\n");
	x = 0;
	r = setjmp(jb);
sleep(1);
	if (!x) {
		x = 1;
		longjmp(jb, 0);
		cout << 14 << endl;
	}
	TESTT(r==1, "longjmp(jb, 0) caused setjmp to return %d\n", r);
	sigemptyset(&set);
	sigaddset(&set, SIGUSR1);
	sigprocmask(SIG_UNBLOCK, &set, &set2);
	oldset = set2;
	/* Improve the chances of catching failure of sigsetjmp to
	 * properly save the signal mask in the sigjmb_buf. */
	memset(&sjb, -1, sizeof sjb);
	if (!sigsetjmp(sjb, 1)) {
		sigemptyset(&set);
		sigaddset(&set, SIGUSR1);
		sigprocmask(SIG_BLOCK, &set, 0);
		siglongjmp(sjb, 1);
	}
	set = oldset;
	sigprocmask(SIG_SETMASK, &set, &set2);
	TESTT(sigismember(&set2, SIGUSR1)==0, "siglongjmp failed to restore mask\n");
	sigemptyset(&set);
	sigaddset(&set, SIGUSR1);
	sigprocmask(SIG_UNBLOCK, &set, &set2);
	oldset = set2;
	if (!sigsetjmp(sjb, 0)) {
		sigemptyset(&set);
		sigaddset(&set, SIGUSR1);
		sigprocmask(SIG_BLOCK, &set, 0);
		siglongjmp(sjb, 1);
	}
	set = oldset;
	sigprocmask(SIG_SETMASK, &set, &set2);
	TESTT(sigismember(&set2, SIGUSR1)==1, "siglongjmp incorrectly restored mask\n");

}
