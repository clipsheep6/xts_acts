#include <cstdio>
#include <cstring>
#include <arpa/inet.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class InetPtonEmptyLastField : public testing::Test {};

static void txt(char *s, unsigned char *buf)
{
    int i;
    snprintf(s, 16, "%04x", buf[0] << 8 | buf[1]);
    for (i = 1; i < 8; i++) {
        sprintf(s + 5 * i, ":%04x", buf[2 * i] << 8 | buf[2 * i + 1]);
    }
}
/**
 * @tc.name      : InetPtonEmptyLastFieldTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(InetPtonEmptyLastField, InetPtonEmptyLastFieldTest, Function | MediumTest | Level2)
{
    char s[50], sw[50];
    unsigned char buf[16];
    unsigned char want[16] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0};
    char *addr;

    addr = (char *)"1:2:3:4:5:6:7::";
    if (inet_pton(AF_INET6, addr, buf) != 1 || memcmp(buf, want, 16) != 0) {
        txt(s, buf);
        txt(sw, want);
        EXPECT_TRUE(inet_pton(AF_INET6, addr, buf) != 1 || memcmp(buf, want, 16) != 0)
            << "inet_pton(" << addr << ") returned " << s << ", wanted " << sw << endl;
    }

    addr = (char *)"1:2:3:4:5:6:7::9:10:11:12:13:14:15:16:17:18:19:20";
    if (inet_pton(AF_INET6, addr, buf) != 0) {
        txt(s, buf);
        EXPECT_TRUE(inet_pton(AF_INET6, addr, buf) != 0)
             << "inet_pton(" << addr << ") returned " << s << ", wanted a failure" << endl;
    }
}
