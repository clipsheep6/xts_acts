#include <csignal>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cerrno>

#include "gtest/gtest.h"


#define T(f) do { \
    EXPECT_EQ(0, (f)) << #f << " failed: " << strerror(errno) << endl;\
} while (0)

using namespace std;
using namespace testing::ext;
class Sigaltstack : public testing::Test {};

static char stack[SIGSTKSZ];

static void handler(int sig)
{
    uintptr_t i;
    stack_t ss;

    i = (uintptr_t)&i;
    EXPECT_FALSE(i < (uintptr_t)stack || i >= (uintptr_t)stack + SIGSTKSZ) 
        << "signal handler was not invoked on the altstack" << endl;
    T(sigaltstack(0, &ss));
    EXPECT_FALSE(ss.ss_flags != SS_ONSTACK) << "ss_flags is not SS_ONSTACK in the signal handler" << endl;
}

/**
 * @tc.name      : SigaltstackTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Sigaltstack, SigaltstackTest, Function | MediumTest | Level2)
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
    ss.ss_size = MINSIGSTKSZ - 1;
    EXPECT_FALSE(sigaltstack(&ss, 0) != -1 || errno != ENOMEM) 
        <<"sigaltstack with stack size < MINSIGSTKSZ should have failed with ENOMEM, ""got"<< strerror(errno) << endl;
    errno = 0;
    ss.ss_flags = -1;
    ss.ss_size = MINSIGSTKSZ;
    EXPECT_FALSE(sigaltstack(&ss, 0) != -1 || errno != EINVAL) << 
        "sigaltstack with bad ss_flags should have failed with EINVAL, ""got "<< strerror(errno) << endl;
    errno = 0;
    T(sigaltstack(0, 0));
}
