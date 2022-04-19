#include <cstdio>
#include <cstring>

#include "gtest/gtest.h"


using namespace std;
using namespace testing::ext;
class SetvbufUnget : public testing::Test {};

/**
 * @tc.name      : SetvbufUngetTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SetvbufUnget, SetvbufUngetTest, Function | MediumTest | Level2)
{
    char buf[1024] = "hello world";
    setvbuf(stdin, buf + 12, _IOFBF, sizeof buf - 12);
    while (ungetc('x', stdin) != EOF) {}
    if (strcmp(buf, "hello world")) {
        EXPECT_FALSE(strcmp(buf, "hello world")) << "ungetc clobbered outside buffer: [" << buf << "]" << endl;
    }
}
