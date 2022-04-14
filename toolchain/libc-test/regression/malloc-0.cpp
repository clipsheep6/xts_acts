#include <cstdlib>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Malloc0 : public testing::Test {};

/**
 * @tc.name      : Malloc0Test
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Malloc0, Malloc0Test, Function | MediumTest | Level2)
{
    void *p = malloc(0);
    void *q = malloc(0);
    void *r = malloc(0);
    EXPECT_FALSE(!p || !q || !r) << "malloc(0) returned NULL" << endl;
    EXPECT_FALSE(p == q || p == r || q == r) << "malloc(0) returned non-unique pointers: "
                                             << p << "," << q << "," << r << endl;
    free(q);
    free(p);
    free(r);
}
