#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "gtest/gtest.h"

char *mkdtemp(char *);
#define S "/dev/null/fooXXXX"

using namespace std;
using namespace testing::ext;
class MkdtempFailureSuite : public testing::Test {};

/**
 * @tc.name      : MkdtempFailureTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MkdtempFailureSuite, MkdtempFailureTest, Function | MediumTest | Level2)
{
    char p[] = S;
    char *r;

    r = mkdtemp(p);
    EXPECT_FALSE(r) << "mkdtemp(" S ") did not fail" << endl;
    EXPECT_EQ(0, memcmp(p, S, sizeof p)) << "mkdtemp(" S ") modified the template: " << p << endl;
    EXPECT_FALSE(r == 0 && errno != EINVAL) << "mkdtemp(" S ") failed with " << errno << " ["
                                            << strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
