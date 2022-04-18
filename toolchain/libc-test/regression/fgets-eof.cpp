#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "gtest/gtest.h"

#define ASSERTT(c) do {                           \
    EXPECT_FALSE(!(c)) << #c << " failed" << endl;\
} while (0)

using namespace std;
using namespace testing::ext;
class FgetsEof : public testing::Test {};

/*
 * @tc.name      : FgetsEofTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(FgetsEof, FgetsEofTest, Function | MediumTest | Level2)
{
    char buf[] = "test";
    char s[10];
    FILE *f;

    ASSERTT((f = fmemopen(buf, sizeof buf, "r")) != 0);
    ASSERTT(fgets(s, sizeof s, f) == s);
    ASSERTT(strcmp(s, buf) == 0);
    ASSERTT(fgets(s, sizeof s, f) == 0);
    EXPECT_EQ(s[0], 't') << "fgets modified the buffer after eof" << endl;
}
