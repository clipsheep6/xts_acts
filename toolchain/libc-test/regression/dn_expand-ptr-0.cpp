#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <resolv.h>
#include <string.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class DnExpandPtr0Suite : public testing::Test {};

/**
 * @tc.name      : DnExpandPtr0Test
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(DnExpandPtr0Suite, DnExpandPtr0Test, Function | MediumTest | Level2)
{
    unsigned char packet[] = {2, 'p', 'q', 0xc0, 5, 0};
    char name[] = "XXXX";
    int r;

    /* non-empty name with pointer to 0 */
    r = dn_expand(packet, packet + 6, packet, name, 3);
    EXPECT_EQ(5, r) << "dn_expand(\"\\2pq\\xc0\\5\", name, 3) returned " << r << ", wanted 5" << endl;
    EXPECT_FALSE(strcmp(name, "pq")) << "dn_expand(\"\\2pq\\xc0\\5\", name, 3) failed: got \"" << name << "\" name, wanted \"pq\"" << endl;

    /* empty name with pointer to 0 */
    memcpy(packet, "\xc0\2", 3);
    memcpy(name, "XXXX", 5);
    r = dn_expand(packet, packet + 3, packet, name, 1);
    EXPECT_EQ(r, 2) << "dn_expand(\"\\xc0\\2\", name, 1) returned " << r << ", wanted 2" << endl;
    EXPECT_FALSE(name[0]) << "dn_expand(\"\\xc0\\2\", name, 1) failed: got \"" << name << "\" name, wanted \"\"" << endl;
}
