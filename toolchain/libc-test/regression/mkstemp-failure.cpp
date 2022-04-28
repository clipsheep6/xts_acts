#include <cstdlib>
#include <cstring>
#include <cerrno>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MkstempFailure : public testing::Test {};

int mkstemp(char *p);
const char *S_S = "/dev/null/fooXXXX";
/**
 * @tc.name      : MkstempFailureTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MkstempFailure, MkstempFailureTest, Function | MediumTest | Level2)
{
    char p[] = "/dev/null/fooXXXX";
    int r;

    r = mkstemp(p);
    EXPECT_FALSE(r != -1) << "mkstemp(/dev/null/fooXXXX) did not fail" << endl;
    EXPECT_EQ(0, memcmp(p, S_S, sizeof p)) << "mkstemp(/dev/null/fooXXXX) modified the template: " << p << endl;
    EXPECT_FALSE(r == -1 && errno != EINVAL) << "mkstemp(/dev/null/fooXXXX) failed with " << errno <<
        " [" << strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
