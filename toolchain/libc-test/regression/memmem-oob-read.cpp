#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MemmemOobRead : public testing::Test {};

/**
 * @tc.name      : MemmemOobReadTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MemmemOobRead, MemmemOobReadTest, Function | MediumTest | Level2)
{
    const unsigned char haystack[] = {0, 0, 0, 0, 0, 0, 0, 1, 2};
    const unsigned char needle[] = {0, 0, 0, 0, 0, 0, 0, 1, 3};
    unsigned char *p = (unsigned char *)memmem(haystack, 8, needle, 8);
    EXPECT_FALSE(!p) << "memmem(A,8,A,8) returned 0, want A" << endl;
}
