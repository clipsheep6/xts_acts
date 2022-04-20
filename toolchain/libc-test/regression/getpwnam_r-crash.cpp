#include <pwd.h>

#include "gtest/gtest.h"

using namespace testing::ext;
class GetpwnamRcrash : public testing::Test {};

/**
 * @tc.name      : GetpwnamRcrashTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(GetpwnamRcrash, GetpwnamRcrashTest, Function | MediumTest | Level2)
{
    struct passwd *pw, pwbuf;
    char buf[1024];
    getpwnam_r("nonsensical_user", &pwbuf, buf, sizeof buf, &pw);
}
