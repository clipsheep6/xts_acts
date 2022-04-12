#include <wctype.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class IswspaceNullSuite : public testing::Test {};

/**
 * @tc.name      : IswspaceNullTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(IswspaceNullSuite, IswspaceNullTest, Function | MediumTest | Level2)
{
    EXPECT_EQ(0, iswspace(0)) << "iswspace(0) returned non-zero" << endl;
}
