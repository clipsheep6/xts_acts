#include <cerrno>
#include <pwd.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Getpwnam_rErrno : public testing::Test {};

/**
 * @tc.name      : Getpwnam_rErrnoTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Getpwnam_rErrno, Getpwnam_rErrnoTest, Function | MediumTest | Level2)
{
    int baderr = EOWNERDEAD; // arbitrary absurd error
    struct passwd *pw, pwbuf;
    char buf[1024];
    errno = baderr;
    EXPECT_NE(baderr, getpwnam_r("nonsensical_user", &pwbuf, buf, sizeof buf, &pw)) << "getpwnam_r used preexisting errno for nonexisting user" << endl;
}
