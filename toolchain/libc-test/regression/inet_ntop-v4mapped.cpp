#include <string.h>
#include <arpa/inet.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class InetNtopV4mappedSuite : public testing::Test {};

/**
 * @tc.name      : InetNtopV4mappedTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(InetNtopV4mappedSuite, InetNtopV4mappedTest, Function | MediumTest | Level2)
{
    char *expect = (char *)"::ffff:192.168.0.1";
    char buf[100];
    char addr[16];
    if (inet_pton(AF_INET6, expect, addr) == 1) {
        EXPECT_FALSE(!inet_ntop(AF_INET6, addr, buf, sizeof buf)) << "inet_ntop failed" << endl;
        EXPECT_FALSE(!strchr(buf, '.')) << "inet_ntop produced " << buf << " instead of " << expect << endl;
    }
    else
        EXPECT_TRUE(inet_pton(AF_INET6, expect, addr) == 1) << "inet_pton failed" << endl;
}
