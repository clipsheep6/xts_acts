#include <cstdlib>
#include <cstring>
#include <cerrno>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MkdtempFailure : public testing::Test {};

char *mkdtemp(char *p);
const char *S = "/dev/null/fooXXXX";

/**
 * @tc.name      : MkdtempFailureTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MkdtempFailure, MkdtempFailureTest, Function | MediumTest | Level2)
{
    char p[] = "/dev/null/fooXXXX";
    char *r;

    r = mkdtemp(p);
    EXPECT_FALSE(r) << "mkdtemp(/dev/null/fooXXXX) did not fail" << endl;
    EXPECT_EQ(0, memcmp(p, S, sizeof p)) << "mkdtemp(/dev/null/fooXXXX) modified the template: " << p << endl;
    EXPECT_FALSE(r == 0 && errno != EINVAL) << "mkdtemp(/dev/null/fooXXXX) failed with " << errno << " [" <<
        strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
