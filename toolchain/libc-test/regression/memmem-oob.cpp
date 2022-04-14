#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MemmemOob : public testing::Test {};

/**
 * @tc.name      : MemmemOobTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MemmemOob, MemmemOobTest, Function | MediumTest | Level2)
{
    char *p = (char *)memmem("abcde", 4, "cde", 3);
    EXPECT_FALSE(p) << "memmem(abcde,4,cde,3) returned " << p << ", want NULL" << endl;
}
