#include <cstdio>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class ScanfBytesConsumed : public testing::Test {};

/**
 * @tc.name      : ScanfBytesConsumedTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ScanfBytesConsumed, ScanfBytesConsumedTest, Function | MediumTest | Level2)
{
    char buf[] = {'a', 'a', 0};
    char dest[3];
    int read_count;
    int n;

    n = sscanf(buf, "%s%n", dest, &read_count);
    EXPECT_EQ(1, n) << "sscanf matched 1 input items but returned " << n << endl;
    EXPECT_EQ(2, read_count) << "sscanf consumed 2 bytes but reported " << read_count << endl;
}
