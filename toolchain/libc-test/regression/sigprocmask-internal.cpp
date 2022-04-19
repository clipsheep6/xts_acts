#include <csignal>
#include <cstring>
#include <cerrno>
#include <cstdio>

#include "gtest/gtest.h"


using namespace std;
using namespace testing::ext;
class SigprocmaskInternal : public testing::Test {};

/**
 * @tc.name      : SigprocmaskInternalTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SigprocmaskInternal, SigprocmaskInternalTest, Function | MediumTest | Level2)
{
    sigset_t s;
    int i;

    sigemptyset(&s);
    for (i = 32; i < SIGRTMIN; i++) {
        sigaddset(&s, i);
        EXPECT_NE(1, sigismember(&s, i)) 
            << "sigaddset(&s, " << i << ") set implementation internal rt signal" << endl;
    }
    EXPECT_FALSE(sigprocmask(SIG_BLOCK, &s, 0)) << "blocking signals failed: " << strerror(errno) << endl;
    EXPECT_FALSE(sigprocmask(SIG_BLOCK, 0, &s)) << "querying sigmask failed: " << strerror(errno) << endl;
    for (i = 32; i < SIGRTMIN; i++) {
        EXPECT_NE(1, sigismember(&s, i)) << "implementation internal rt signal " << i << " can be blocked" << endl;
    }
}
