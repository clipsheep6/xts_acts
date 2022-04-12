#define _XOPEN_SOURCE 700
#include <stdlib.h>
#include <string.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class PutenvDoublefreeSuite : public testing::Test {};

/**
 * @tc.name      : PutenvDoublefreeTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PutenvDoublefreeSuite, PutenvDoublefreeTest, Function | MediumTest | Level2)
{
    setenv("A", "1", 1);
    setenv("A", "2", 1);
    char *c = strdup("A=3");
    putenv(c);
    setenv("A", "4", 1);
    free(c);
}
