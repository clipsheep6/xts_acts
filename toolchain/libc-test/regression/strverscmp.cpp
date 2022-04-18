#include <cstring>
#include <cstdio>

#include "gtest/gtest.h"


#define ASSERT(x) do {                           \
    EXPECT_TRUE((x)) << #x << " failed" << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class StrverscmpSuite : public testing::Test {};

/**
 * @tc.name      : StrverscmpTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(StrverscmpSuite, StrverscmpTest, Function | MediumTest | Level2)
{
    ASSERT(strverscmp("", "") == 0);
    ASSERT(strverscmp("a", "a") == 0);
    ASSERT(strverscmp("a", "b") < 0);
    ASSERT(strverscmp("b", "a") > 0);
    ASSERT(strverscmp("000", "00") < 0);
    ASSERT(strverscmp("00", "000") > 0);
    ASSERT(strverscmp("a0", "a") > 0);
    ASSERT(strverscmp("00", "01") < 0);
    ASSERT(strverscmp("01", "010") < 0);
    ASSERT(strverscmp("010", "09") < 0);
    ASSERT(strverscmp("09", "0") < 0);
    ASSERT(strverscmp("9", "10") < 0);
    ASSERT(strverscmp("0a", "0") > 0);
    ASSERT(strverscmp("foobar-1.1.2", "foobar-1.1.3") < 0);
    ASSERT(strverscmp("foobar-1.1.2", "foobar-1.01.3") > 0);
}
