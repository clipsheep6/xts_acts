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

static void tobin(void *d, char *s)
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
    const char *src = src_c.c_str();
    char *hex = const_cast<char*>(hex_x.c_str());

    r = inet_pton(AF_INET6, src, binaddr);
    EXPECT_EQ(r, ret) << "inet_pton(AF_INET6, " << src << ", addr) returned " << r << ", want " << ret << endl;
    if (ret != 1) {
        return;
    }
    tohex(hexaddr, binaddr, n);
    EXPECT_FALSE(strcmp(hexaddr, hex)) << "inet_pton(AF_INET6, " << src
                                       << ", addr) got addr " << hexaddr << ", want " << hex << endl;
    tobin(binaddr, hex);
    EXPECT_EQ(txtaddr, inet_ntop(AF_INET6, binaddr, txtaddr, sizeof txtaddr)) <<
        "inet_ntop(AF_INET6, <" << hex << ">, buf, size) did not return buf" << endl;
    EXPECT_EQ(1, inet_pton(AF_INET6, txtaddr, binaddr)) << "inet_ntop(AF_INET6, <"<< hex << ">, buf, size) got "
                                                        << txtaddr << ", it is rejected by inet_pton" << endl;

    tohex(hexaddr, binaddr, n);
    EXPECT_FALSE(strcmp(hexaddr, hex)) << "inet_ntop(AF_INET6, <" << hex << ">, buf, size) got "
                                       << txtaddr << " that is " << hexaddr << ", want " << hex << endl;

    EXPECT_FALSE(strncmp(hex, "00000000000000000000ffff", n2) == 0 && !strchr(txtaddr, '.')) <<
        "inet_ntop(AF_INET6, <" << hex << ">, buf, size) got "<< txtaddr << ", should be ipv4 mapped" << endl;
}


// ret and hex are the results of inet_pton and inet_addr respectively
void V4(string src_c, int ret, string hex_x)
{
    int r;
    uint32_t a, n = 4;
    struct in_addr in;
    char buf[20] = {0};
    char *p;
    const char *src = src_c.c_str();
    char *hex = const_cast<char*>(hex_x.c_str());

    a = inet_addr(src);
    tohex(buf, &a, n);
    EXPECT_FALSE(strcmp(buf, hex)) << "inet_addr(" << src << ") returned " << buf << ", want " << hex << endl;

    r = inet_pton(AF_INET, src, &a);
    EXPECT_EQ(r, ret) << "inet_pton(AF_INET, " << src << ", addr) returned " << r << ", want " << ret << endl;

    if (ret != 1) {
        return;
    }

    tohex(buf, &a, n);
    EXPECT_FALSE(strcmp(buf, hex)) << "inet_pton(AF_INET, "
        << src << ", addr) got addr " << buf << ", want " << hex << endl;
    tobin(&a, hex);
    EXPECT_FALSE(inet_ntop(AF_INET, &a, buf, sizeof buf) != buf)
        << "inet_pton(AF_INET, " << hex << ", buf, size) did not return buf " << endl;
    EXPECT_FALSE(strcmp(buf, src)) << "inet_pton(AF_INET, "
        << hex << ", buf , size) got " << buf << ", want " << src << endl;
    in.s_addr = a;
    p = inet_ntoa(in);
    EXPECT_FALSE(strcmp(p, src)) << "inet_ntoa(<" << hex << ">) returned " << p << ", want " << src << endl;
}

/**
 * @tc.name      : InetPtonTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(InetPton, InetPtonTest, Function | MediumTest | Level2)
{
    string trf1, trf2;
    EXPECT_FALSE(inet_pton(12345,"", 0) != -1 || errno !=
        EAFNOSUPPORT) << "inet_pton(12345,,) should fail with EAFNOSUPPORT, got " << strerror(errno) << endl;
    errno = 0;
    EXPECT_FALSE(inet_ntop(AF_INET, "xxxx", (char *)"", 0) != 0 || errno !=
        ENOSPC) << "inet_ntop(,,0,0) should fail with ENOSPC, got " << strerror(errno) << endl;
    errno = 0;

    // dotted-decimal notation
    V4(trf1 = ("0.0.0.0"), 1, trf2 = ("00000000"));
    V4(trf1 = ("127.0.0.1"), 1, trf2 = ("7f000001"));
    V4(trf1 = ("10.0.128.31"), 1, trf2 = ("0a00801f"));
    V4(trf1 = ("255.255.255.255"), 1, trf2 = ("ffffffff"));

    // numbers-and-dots notation, but not dotted-decimal
    V4(trf1 = ("1.2.03.4"), 0, trf2 = ("01020304"));
    V4(trf1 = ("1.2.0x33.4"), 0, trf2 = ("01023304"));
    V4(trf1 = ("1.2.0XAB.4"), 0, trf2 = ("0102ab04"));
    V4(trf1 = ("1.2.0xabcd"), 0, trf2 = ("0102abcd"));
    V4(trf1 = ("1.0xabcdef"), 0, trf2 = ("01abcdef"));
    V4(trf1 = ("00377.0x0ff.65534"), 0, trf2 = ("fffffffe"));

    // invalid
    V4(trf1 = (".1.2.3"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1..2.3"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2.3."), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2.3.4.5"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2.3.a"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.256.2.3"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2.4294967296.3"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2.-4294967295.3"), 0, trf2 = ("ffffffff"));
    V4(trf1 = ("1.2. 3.4"), 0, trf2 = ("ffffffff"));

    // ipv6
    V6(trf1 = (":"), 0, trf2 = (""));
    V6(trf1 = ("::"), 1, trf2 = ("00000000000000000000000000000000"));
    V6(trf1 = ("::1"), 1, trf2 = ("00000000000000000000000000000001"));
    V6(trf1 = (":::"), 0, trf2 = (""));
    V6(trf1 = ("192.168.1.1"), 0, trf2 = (""));
    V6(trf1 = (":192.168.1.1"), 0, trf2 = (""));
    V6(trf1 = ("::192.168.1.1"), 1, trf2 = ("000000000000000000000000c0a80101"));
    V6(trf1 = ("0:0:0:0:0:0:192.168.1.1"), 1, trf2 = ("000000000000000000000000c0a80101"));
    V6(trf1 = ("0:0::0:0:0:192.168.1.1"), 1, trf2 = ("000000000000000000000000c0a80101"));
    V6(trf1 = ("::012.34.56.78"), 0, trf2 = (""));
    V6(trf1 = (":ffff:192.168.1.1"), 0, trf2 = (""));
    V6(trf1 = ("::ffff:192.168.1.1"), 1, trf2 = ("00000000000000000000ffffc0a80101"));
    V6(trf1 = (".192.168.1.1"), 0, trf2 = (""));
    V6(trf1 = (":.192.168.1.1"), 0, trf2 = (""));
    V6(trf1 = ("a:0b:00c:000d:E:F::"), 1, trf2 = ("000a000b000c000d000e000f00000000"));
    V6(trf1 = ("a:0b:00c:000d:0000e:f::"), 0, trf2 = (""));
    V6(trf1 = ("1:2:3:4:5:6::"), 1, trf2 = ("00010002000300040005000600000000"));
    V6(trf1 = ("1:2:3:4:5:6:7::"), 1, trf2 = ("00010002000300040005000600070000"));
    V6(trf1 = ("1:2:3:4:5:6:7:8::"), 0, trf2 = (""));
    V6(trf1 = ("1:2:3:4:5:6:7::9"), 0, trf2 = (""));
    V6(trf1 = ("::1:2:3:4:5:6"), 1, trf2 = ("00000000000100020003000400050006"));
    V6(trf1 = ("::1:2:3:4:5:6:7"), 1, trf2 = ("00000001000200030004000500060007"));
    V6(trf1 = ("::1:2:3:4:5:6:7:8"), 0, trf2 = (""));
    V6(trf1 = ("a:b::c:d:e:f"), 1, trf2 = ("000a000b00000000000c000d000e000f"));
    V6(trf1 = ("ffff:c0a8:5e4"), 0, trf2 = (""));
    V6(trf1 = (":ffff:c0a8:5e4"), 0, trf2 = (""));
    V6(trf1 = ("0:0:0:0:0:ffff:c0a8:5e4"), 1, trf2 = ("00000000000000000000ffffc0a805e4"));
    V6(trf1 = ("0:0:0:0:ffff:c0a8:5e4"), 0, trf2 = (""));
    V6(trf1 = ("0::ffff:c0a8:5e4"), 1, trf2 = ("00000000000000000000ffffc0a805e4"));
    V6(trf1 = ("::0::ffff:c0a8:5e4"), 0, trf2 = (""));
    V6(trf1 = ("c0a8"), 0, trf2 = (""));
}
