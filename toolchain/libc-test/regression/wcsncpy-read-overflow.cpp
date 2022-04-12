#include <wchar.h>
#include "gtest/gtest.h"
#include <stdio.h>

using namespace std;
using namespace testing::ext;
class WcsncpyReadOverflowSuite : public testing::Test {};

/**
 * @tc.name      : WcsncpyReadOverflowTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(WcsncpyReadOverflowSuite, WcsncpyReadOverflowTest, Function | MediumTest | Level2)
{
    wchar_t dst[] = {'a', 'a'};
    wchar_t src[] = {0, 'b'};

    wcsncpy(dst, src, 1);
    EXPECT_EQ('a', dst[1]) << "wcsncpy copied more than N" << endl;
}
