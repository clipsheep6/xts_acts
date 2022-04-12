#include <stdio.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class ScanfNullbyteCharSuite : public testing::Test {};

/**
 * @tc.name      : ScanfNullbyteCharTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ScanfNullbyteCharSuite, ScanfNullbyteCharTest, Function | MediumTest | Level2)
{
    char dst[] = {'a', 'a'};
    char src[] = {'b', 'b'};

    EXPECT_EQ(1, sscanf(src, "%c", dst)) << "sscanf %%c failed" << endl;
    EXPECT_EQ('a', dst[1]) << "scanf clobbered the char buffer for %%c conversion" << endl;
}
