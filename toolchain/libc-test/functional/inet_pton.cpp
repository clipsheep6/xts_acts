#include <iostream>
#include <cerrno>
#include <cstring>
#include <cstdio>
#include <arpa/inet.h>
#include <securec.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class InetPton : public testing::Test {};

static int digit(int c)
{
    int cmp = 9, cont = 10;
    c -= '0';
    if (c > cmp) {
        c -= 'a' - '0' - cont;
    }
    return c;
}

static void tobin(void *d,const char *s)
{
    int i, cont = 2, cont2 = 16;
    unsigned char *p = (unsigned char *)d;
    for (i = 0; s[cont * i]; i++) {
        p[i] = digit(s[cont * i]) * cont2 + digit(s[cont * i + 1]);
    }
}

static void tohex(char *d, void *s, int n)
{
    int i, strSize = 1024, cont = 2;
    unsigned char *p = (unsigned char *)s;
    for (i = 0; i < n; i++) {
        EXPECT_TRUE(snprintf_s(d + cont * i, strSize, strSize, "%02x", p[i]) != -1);
    }
}

void V6(string src_c, int ret, string hex_x)
{
    int r , n = 16, n2 = 24;
    char binaddr[16] = {0};
    char hexaddr[40] = {0};
    char txtaddr[60] = {0};

    r = inet_pton(AF_INET6, src_c.c_str(), binaddr);
    EXPECT_EQ(r, ret) <<
        "inet_pton(AF_INET6, " << src_c.c_str() << ", addr) returned " << r << ", want " << ret << endl;
    if (ret != 1) {
        return;
    }
    tohex(hexaddr, binaddr, n);
    EXPECT_FALSE(strcmp(hexaddr, hex_x.c_str())) << "inet_pton(AF_INET6, " << src_c.c_str()
                                       << ", addr) got addr " << hexaddr << ", want " << hex_x.c_str() << endl;
    tobin(binaddr, hex_x.c_str());
    EXPECT_EQ(txtaddr, inet_ntop(AF_INET6, binaddr, txtaddr, sizeof txtaddr)) <<
        "inet_ntop(AF_INET6, <" << hex_x.c_str() << ">, buf, size) did not return buf" << endl;
    EXPECT_EQ(1, inet_pton(AF_INET6, txtaddr, binaddr)) << "inet_ntop(AF_INET6, <"<< hex_x.c_str() <<
        ">, buf, size) got " << txtaddr << ", it is rejected by inet_pton" << endl;

    tohex(hexaddr, binaddr, n);
    EXPECT_FALSE(strcmp(hexaddr, hex_x.c_str())) << "inet_ntop(AF_INET6, <" << hex_x.c_str() <<
        ">, buf, size) got "<< txtaddr << " that is " << hexaddr << ", want " << hex_x.c_str() << endl;

    EXPECT_FALSE(strncmp(hex_x.c_str(), "00000000000000000000ffff", n2) == 0 && !strchr(txtaddr, '.')) <<
        "inet_ntop(AF_INET6, <" << hex_x.c_str() <<
            ">, buf, size) got "<< txtaddr << ", should be ipv4 mapped" << endl;
}


// ret and hex are the results of inet_pton and inet_addr respectively
void V4(string src_c, int ret, string hex_x)
{
    int r;
    uint32_t a, n = 4;
    struct in_addr in;
    char buf[20] = {0};
    char *p;

    a = inet_addr(src_c.c_str());
    tohex(buf, &a, n);
    EXPECT_FALSE(strcmp(buf, hex_x.c_str())) << 
        "inet_addr(" << src_c.c_str() << ") returned " << buf << ", want " << hex_x.c_str() << endl;

    r = inet_pton(AF_INET, src_c.c_str(), &a);
    EXPECT_EQ(r, ret) <<
        "inet_pton(AF_INET, " << src_c.c_str() << ", addr) returned " << r << ", want " << ret << endl;

    if (ret != 1) {
        return;
    }

    tohex(buf, &a, n);
    EXPECT_FALSE(strcmp(buf, hex_x.c_str())) <<
        "inet_pton(AF_INET, " << src_c.c_str() << ", addr) got addr " << buf << ", want " << hex_x.c_str() << endl;
    tobin(&a, hex_x.c_str());
    EXPECT_FALSE(inet_ntop(AF_INET, &a, buf, sizeof buf) != buf) << 
        "inet_pton(AF_INET, " << hex_x.c_str() << ", buf, size) did not return buf " << endl;
    EXPECT_FALSE(strcmp(buf, src_c.c_str())) <<
        "inet_pton(AF_INET, " << hex_x.c_str() << ", buf , size) got " << buf << ", want " << src_c.c_str() << endl;
    in.s_addr = a;
    p = inet_ntoa(in);
    EXPECT_FALSE(strcmp(p, src_c.c_str())) << 
        "inet_ntoa(<" << hex_x.c_str() << ">) returned " << p << ", want " << src_c.c_str() << endl;
}

/**
 * @tc.name      : InetPtonTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(InetPton, InetPtonTest, Function | MediumTest | Level2)
{
    EXPECT_FALSE(inet_pton(12345,"", 0) != -1 || errno !=
        EAFNOSUPPORT) << "inet_pton(12345,,) should fail with EAFNOSUPPORT, got " << strerror(errno) << endl;
    errno = 0;
    EXPECT_FALSE(inet_ntop(AF_INET, "xxxx", (char *)"", 0) != 0 || errno !=
        ENOSPC) << "inet_ntop(,,0,0) should fail with ENOSPC, got " << strerror(errno) << endl;
    errno = 0;

    // dotted-decimal notation
    V4(string("0.0.0.0"), 1, string("00000000"));
    V4(string("127.0.0.1"), 1, string("7f000001"));
    V4(string("10.0.128.31"), 1, string("0a00801f"));
    V4(string("255.255.255.255"), 1, string("ffffffff"));

    // numbers-and-dots notation, but not dotted-decimal
    V4(string("1.2.03.4"), 0, string("01020304"));
    V4(string("1.2.0x33.4"), 0, string("01023304"));
    V4(string("1.2.0XAB.4"), 0, string("0102ab04"));
    V4(string("1.2.0xabcd"), 0, string("0102abcd"));
    V4(string("1.0xabcdef"), 0, string("01abcdef"));
    V4(string("00377.0x0ff.65534"), 0, string("fffffffe"));

    // invalid
    V4(string(".1.2.3"), 0, string("ffffffff"));
    V4(string("1..2.3"), 0, string("ffffffff"));
    V4(string("1.2.3."), 0, string("ffffffff"));
    V4(string("1.2.3.4.5"), 0, string("ffffffff"));
    V4(string("1.2.3.a"), 0, string("ffffffff"));
    V4(string("1.256.2.3"), 0, string("ffffffff"));
    V4(string("1.2.4294967296.3"), 0, string("ffffffff"));
    V4(string("1.2.-4294967295.3"), 0, string("ffffffff"));
    V4(string("1.2. 3.4"), 0, string("ffffffff"));

    // ipv6
    V6(string(":"), 0, string(""));
    V6(string("::"), 1, string("00000000000000000000000000000000"));
    V6(string("::1"), 1, string("00000000000000000000000000000001"));
    V6(string(":::"), 0, string(""));
    V6(string("192.168.1.1"), 0, string(""));
    V6(string(":192.168.1.1"), 0, string(""));
    V6(string("::192.168.1.1"), 1, string("000000000000000000000000c0a80101"));
    V6(string("0:0:0:0:0:0:192.168.1.1"), 1, string("000000000000000000000000c0a80101"));
    V6(string("0:0::0:0:0:192.168.1.1"), 1, string("000000000000000000000000c0a80101"));
    V6(string("::012.34.56.78"), 0, string(""));
    V6(string(":ffff:192.168.1.1"), 0, string(""));
    V6(string("::ffff:192.168.1.1"), 1, string("00000000000000000000ffffc0a80101"));
    V6(string(".192.168.1.1"), 0, string(""));
    V6(string(":.192.168.1.1"), 0, string(""));
    V6(string("a:0b:00c:000d:E:F::"), 1, string("000a000b000c000d000e000f00000000"));
    V6(string("a:0b:00c:000d:0000e:f::"), 0, string(""));
    V6(string("1:2:3:4:5:6::"), 1, string("00010002000300040005000600000000"));
    V6(string("1:2:3:4:5:6:7::"), 1, string("00010002000300040005000600070000"));
    V6(string("1:2:3:4:5:6:7:8::"), 0, string(""));
    V6(string("1:2:3:4:5:6:7::9"), 0, string(""));
    V6(string("::1:2:3:4:5:6"), 1, string("00000000000100020003000400050006"));
    V6(string("::1:2:3:4:5:6:7"), 1, string("00000001000200030004000500060007"));
    V6(string("::1:2:3:4:5:6:7:8"), 0, string(""));
    V6(string("a:b::c:d:e:f"), 1, string("000a000b00000000000c000d000e000f"));
    V6(string("ffff:c0a8:5e4"), 0, string(""));
    V6(string(":ffff:c0a8:5e4"), 0, string(""));
    V6(string("0:0:0:0:0:ffff:c0a8:5e4"), 1, string("00000000000000000000ffffc0a805e4"));
    V6(string("0:0:0:0:ffff:c0a8:5e4"), 0, string(""));
    V6(string("0::ffff:c0a8:5e4"), 1, string("00000000000000000000ffffc0a805e4"));
    V6(string("::0::ffff:c0a8:5e4"), 0, string(""));
    V6(string("c0a8"), 0, string(""));
}
