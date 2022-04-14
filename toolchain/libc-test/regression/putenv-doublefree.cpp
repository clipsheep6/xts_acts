#include <cstdlib>
#include <cstring>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PutenvDoublefree : public testing::Test {};

/**
 * @tc.name      : PutenvDoublefreeTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PutenvDoublefree, PutenvDoublefreeTest, Function | MediumTest | Level2)
{
    setenv("A", "1", 1);
    setenv("A", "2", 1);
    char *c = strdup("A=3");
    putenv(c);
    setenv("A", "4", 1);
    free(c);
}
