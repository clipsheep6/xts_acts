#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "gtest/gtest.h"

int mkstemp(char *);
#define S "/dev/null/fooXXXX"

using namespace std;
using namespace testing::ext;
class MkstempFailureSuite : public testing::Test {};

/**
 * @tc.name      : MkstempFailureTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MkstempFailureSuite, MkstempFailureTest, Function | MediumTest | Level2)
{
    char p[] = S;
    int r;

    r = mkstemp(p);
    EXPECT_FALSE(r != -1) << "mkstemp(" S ") did not fail" << endl;
    EXPECT_EQ(0, memcmp(p, S, sizeof p)) << "mkstemp(" S ") modified the template: " << p << endl;
    EXPECT_FALSE(r == -1 && errno != EINVAL) << "mkstemp(" S ") failed with " << errno << " ["
                                             << strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
