// commit: 6871fd773dcedbf056317d5d5e87b4859e97c4a4 2011-03-10
// commit: 9505bfbc40fec217820abad7142663eda60cd6be 2014-03-18
// catching stackoverflow SIGSEGV using sigaltstack
// mips stack_t is inconsistent with other archs
#define _XOPEN_SOURCE 700
#include <signal.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SigaltstackSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SigaltstackSuite
*/

using namespace std;
using namespace testing::ext;
class SigaltstackSuite: public testing::Test {
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
 * @tc.name      : SigaltstackSuite001
 * @tc.desc      : Test SigaltstackSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(f)  EXPECT_EQ(0,(f)) << #f << " failed: " << strerror(errno) << endl;

static char stack[SIGSTKSZ];

static void handler(int sig)
{
	uintptr_t i;
	stack_t ss;

	i = (uintptr_t)&i;
	EXPECT_FALSE(i < (uintptr_t)stack || i >= (uintptr_t)stack+SIGSTKSZ) << "signal handler was not invoked on the altstack" << endl;
	T(sigaltstack(0, &ss));
	EXPECT_FALSE(ss.ss_flags != SS_ONSTACK) << "ss_flags is not SS_ONSTACK in the signal handler" << endl;
}

HWTEST_F(SigaltstackSuite,SigaltstackTest, Function | MediumTest | Level2)
{
    stack_t ss;
	struct sigaction sa;

	ss.ss_sp = stack;
	ss.ss_size = sizeof stack;
	ss.ss_flags = 0;
	sa.sa_handler = handler;
	sa.sa_flags = SA_ONSTACK;

	T(sigaltstack(&ss, 0));
	T(sigfillset(&sa.sa_mask));
	T(sigaction(SIGUSR1, &sa, 0));
	T(raise(SIGUSR1));

	errno = 0;
	ss.ss_size = MINSIGSTKSZ-1;
	EXPECT_FALSE(sigaltstack(&ss, 0) != -1 || errno != ENOMEM) << "sigaltstack with stack size < MINSIGSTKSZ should have failed with ENOMEM, ""got" << strerror(errno) << endl;
	errno = 0;
	ss.ss_flags = -1;
	ss.ss_size = MINSIGSTKSZ;
	EXPECT_FALSE(sigaltstack(&ss, 0) != -1 || errno != EINVAL) << "sigaltstack with bad ss_flags should have failed with EINVAL, ""got " << strerror(errno) << endl;
	errno = 0;
	T(sigaltstack(0, 0));   
}
