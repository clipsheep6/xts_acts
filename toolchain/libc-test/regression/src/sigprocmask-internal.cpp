// commit: a49c119276742d7d212fb88f83a8f559ca549e72 2011-02-19
// commit: 96f2197494791f5884c01b5caa908074cc7e90a6 2011-02-20
// commit: 23815f88df6c45247f3755dc7857f4013264c04f 2013-07-18
// implementation signals should not be masked
#include <signal.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SigprocmaskInternalSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SigprocmaskInternalSuite
*/

using namespace std;
using namespace testing::ext;
class SigprocmaskInternalSuite: public testing::Test {
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
 * @tc.name      : SigprocmaskInternalSuite001
 * @tc.desc      : Test SigprocmaskInternalSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(SigprocmaskInternalSuite,SigprocmaskInternalTest, Function | MediumTest | Level2)
{
    sigset_t s;
	int i;

	sigemptyset(&s);
	for (i = 32; i < SIGRTMIN; i++) {
		sigaddset(&s, i);
		EXPECT_NE(1 , sigismember(&s, i)) << "sigaddset(&s, " << i << ") set implementation internal rt signal" << endl;
	}
	EXPECT_FALSE(sigprocmask(SIG_BLOCK, &s, 0)) << "blocking signals failed: " << strerror(errno) << endl;
	EXPECT_FALSE(sigprocmask(SIG_BLOCK, 0, &s)) << "querying sigmask failed: " << strerror(errno) << endl;
	for (i = 32; i < SIGRTMIN; i++)
		EXPECT_NE(1 , sigismember(&s, i)) << "implementation internal rt signal " << i << " can be blocked" << endl;
}
