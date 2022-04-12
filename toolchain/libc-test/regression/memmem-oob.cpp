#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <string.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MemmemOobSuite : public testing::Test {};

/**
 * @tc.name      : MemmemOobTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MemmemOobSuite, MemmemOobTest, Function | MediumTest | Level2)
{
    char *p = (char *)memmem("abcde", 4, "cde", 3);
    EXPECT_FALSE(p) << "memmem(abcde,4,cde,3) returned " << p << ", want NULL" << endl;
}
