#include <stdio.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class ScanfMatchLiteralEofSuite : public testing::Test {};

/**
 * @tc.name      : ScanfMatchLiteralEofTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(ScanfMatchLiteralEofSuite, ScanfMatchLiteralEofTest, Function | MediumTest | Level2)
{
    char buf[] = {0};
    int match_count;

    match_count = sscanf(buf, "a");
    EXPECT_EQ(EOF, match_count) << "scanf reported match failure instead of input failure on literal EOF match" << endl;
}
