#include <resolv.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class DnExpandEmpty : public testing::Test {};

/**
 * @tc.name      : DnExpandEmptyTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(DnExpandEmpty, DnExpandEmptyTest, Function | MediumTest | Level2)
{
    unsigned char packet[] = "";
    char name[] = "XX";
    int r;

    /* empty name in packet */
    r = dn_expand(packet, packet + 1, packet, name, 1);
    EXPECT_EQ(1, r) << "dn_expand(\"\", name, 1) returned " << r << ", wanted 1" << endl;
    EXPECT_FALSE(name[0]) << "dn_expand(\"\", name, 1) failed: got \"" << name << "\" name, wanted \"\"" << endl;
}
