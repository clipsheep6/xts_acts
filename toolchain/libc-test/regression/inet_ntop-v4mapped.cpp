#include <cstring>
#include <arpa/inet.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class InetNtopV4mapped : public testing::Test {};

/**
 * @tc.name      : InetNtopV4mappedTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(InetNtopV4mapped, InetNtopV4mappedTest, Function | MediumTest | Level2)
{
    const char *expect = "::ffff:192.168.0.1";
    char buf[100];
    char addr[16];
    if (inet_pton(AF_INET6, expect, addr) == 1) {
        EXPECT_FALSE(!inet_ntop(AF_INET6, addr, buf, sizeof buf)) << "inet_ntop failed" << endl;
        EXPECT_FALSE(!strchr(buf, '.')) << "inet_ntop produced " << buf << " instead of " << expect << endl;
    }
    else {
        EXPECT_TRUE(inet_pton(AF_INET6, expect, addr) == 1) << "inet_pton failed" << endl;
    }
}
