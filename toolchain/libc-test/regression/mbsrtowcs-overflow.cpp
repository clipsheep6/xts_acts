#include <wchar.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class MbsrtowcsOverflowSuite : public testing::Test {};

/**
 * @tc.name      : MbsrtowcsOverflowTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MbsrtowcsOverflowSuite, MbsrtowcsOverflowTest, Function | MediumTest | Level2)
{
    wchar_t ws[] = L"XXXXX";
    const char *src = "abcd";
    const char *want = src + 4;
    size_t r;

    r = mbsrtowcs(ws, &src, 4, 0);
    EXPECT_EQ(4, r) << "mbsrtowcs(ws, &abcd, 4, 0) returned " << r << ", wanted 4" << endl;
    EXPECT_EQ(want, src) << "mbsrtowcs(ws, &abcd, 4, 0) set abcd to " << src << " wanted " << want << endl;
    EXPECT_EQ(0, wcscmp(ws, L"abcdX")) << "ws is L\"" << ws << "\", wanted L\"abcdX\"" << endl;
}
