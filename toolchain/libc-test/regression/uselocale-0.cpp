#include <clocale>
#include <cstdio>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Uselocale0 : public testing::Test {};

/**
 * @tc.name      : Uselocale0Test
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Uselocale0, Uselocale0Test, Function | MediumTest | Level2)
{
    locale_t c = newlocale(LC_ALL_MASK, "C", nullptr);

    ASSERT_FALSE(!c) << "newlocale failed" << endl;
    EXPECT_FALSE(!uselocale(c)) << "uselocale(c) failed" << endl;

    locale_t l1 = uselocale(nullptr);
    EXPECT_EQ(c, l1) << "uselocale failed to set locale: "<< (void *)l1 << " != " << (void *)c << endl;

    locale_t l2 = uselocale(nullptr);
    EXPECT_EQ(l2, l1) << "uselocale(0) changed locale: "<< (void *)l2 << " != " << (void *)l1 << endl;
}
