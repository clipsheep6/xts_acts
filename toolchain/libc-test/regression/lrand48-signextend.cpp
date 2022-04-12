#define _XOPEN_SOURCE 700
#include <stdlib.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Lrand48SignextendSuite : public testing::Test {};

/**
 * @tc.name      : Lrand48SignextendTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Lrand48SignextendSuite, Lrand48SignextendTest, Function | MediumTest | Level2)
{
    long r;
    r = lrand48();
    EXPECT_EQ(0, r) << "1st lrand48() got " << r << " want 0" << endl;
    r = lrand48();
    EXPECT_EQ(2116118, r) << "2nd lrand48() got " << r << " want 2116118" << endl;
    r = lrand48();
    EXPECT_EQ(89401895, r) << "3rd lrand48() got " << r << " want 89401895" << endl;
}
