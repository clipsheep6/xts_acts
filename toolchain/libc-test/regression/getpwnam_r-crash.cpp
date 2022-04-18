#include <pwd.h>

#include "gtest/gtest.h"

using namespace testing::ext;
class Getpwnam_rCrash : public testing::Test {};

/**
 * @tc.name      : Getpwnam_rCrashTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Getpwnam_rCrash, Getpwnam_rCrashTest, Function | MediumTest | Level2)
{
    struct passwd *pw, pwbuf;
    char buf[1024];
    getpwnam_r("nonsensical_user", &pwbuf, buf, sizeof buf, &pw);
}
