#include "gtest/gtest.h"
// inet_addr, inet_ntoa, inet_pton and inet_ntop tests with roundtrip check
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <arpa/inet.h>
#include "test.h"


/**  
* @brief  register a test suit named "InetPtonSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  InetPtonSuite
*/

using namespace std;
using namespace testing::ext;
class InetPtonSuite: public testing::Test {
protected:
// Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void){
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void){
    }
    // Preset action of the test case
    virtual void SetUp()
    {
    }
    // Cleanup action of the test case
    virtual void TearDown()
    {
    }
};

/**
 * @tc.name      : InetPtonSuite001
 * @tc.desc      : Test InetPtonSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

static int digit(int c)
{
	c-='0';
	if (c>9) c-='a'-'0'-10;
	return c;
}

static void tobin(void *d, char *s)
{
	int i;
	unsigned char *p = (unsigned char *)d;
	for (i=0; s[2*i]; i++) p[i] = digit(s[2*i])*16+digit(s[2*i+1]);
}

static void tohex(char *d, void *s, int n)
{
	int i;
	unsigned char *p = (unsigned char *)s;
	for (i=0; i<n; i++) sprintf(d+2*i, "%02x", p[i]);
}

#define V6(src,ret,hex) do{\
	int r; \
	char binaddr[16]={0}; \
	char hexaddr[40]={0}; \
	char txtaddr[60]={0}; \
	\
	r=inet_pton(AF_INET6,src,binaddr); \
    EXPECT_EQ(r , ret) << "inet_pton(AF_INET6, " << #src << ", addr) returned " << r << ", want " << ret << endl; \
	if (ret!=1) break; \
	tohex(hexaddr,binaddr,16); \
    EXPECT_FALSE(strcmp(hexaddr,hex)) << "inet_pton(AF_INET6, " << #src << ", addr) got addr " << hexaddr << ", want " << hex << endl; \
	\
	tobin(binaddr,hex); \
    EXPECT_EQ(txtaddr , inet_ntop(AF_INET6,binaddr,txtaddr,sizeof txtaddr)) \
    << "inet_ntop(AF_INET6, <"#hex">, buf, size) did not return buf" << endl;\
    \
    EXPECT_EQ(1 , inet_pton(AF_INET6,txtaddr,binaddr)) << "inet_ntop(AF_INET6, <" << #hex \
    << ">, buf, size) got " << txtaddr << ", it is rejected by inet_pton" << endl;\
    \
	tohex(hexaddr,binaddr,16); \
    EXPECT_FALSE(strcmp(hexaddr,hex)) << "inet_ntop(AF_INET6, <" << #hex << ">, buf, size) got " \
    << txtaddr << " that is " << hexaddr << ", want " << hex << endl;\
    \
    EXPECT_FALSE(strncmp(hex,"00000000000000000000ffff",24)==0 && !strchr(txtaddr,'.')) << "inet_ntop(AF_INET6, <" \
     << #hex << ">, buf, size) got " << txtaddr << ", should be ipv4 mapped" << endl;\
 }while(0);

// ret and hex are the results of inet_pton and inet_addr respectively
#define V4(src,ret,hex) do{\
	int r; \
	uint32_t a; \
	struct in_addr in; \
	char buf[20]={0}; \
	char *p; \
	\
	a=inet_addr(src); \
	tohex(buf,&a,4); \
    EXPECT_FALSE(strcmp(buf,hex)) << "inet_addr(" << #src << ") returned " << buf << ", want " << hex << endl; \
	\
	r=inet_pton(AF_INET,src,&a); \
    EXPECT_EQ(r , ret) << "inet_pton(AF_INET, " << #src << ", addr) returned " << r << ", want " << ret << endl; \
	\
	if (ret!=1) break; \
	\
	tohex(buf,&a,4); \
    EXPECT_FALSE(strcmp(buf,hex)) << "inet_pton(AF_INET, " << #src << ", addr) got addr " << buf << ", want " << hex << endl; \
	\
	tobin(&a,hex); \
    EXPECT_FALSE(inet_ntop(AF_INET,&a,buf,sizeof buf)!=buf) << "inet_pton(AF_INET, " << #hex << ", buf, size) did not return buf " << endl; \
    EXPECT_FALSE(strcmp(buf,src)) << "inet_pton(AF_INET, " << #hex << ", buf , size) got " << buf << ", want " << src << endl; \
	\
	in.s_addr = a; \
	p=inet_ntoa(in); \
    EXPECT_FALSE(strcmp(p,src)) << "inet_ntoa(<" << #hex << ">) returned " << p << ", want " << src << endl; \
}while(0);

HWTEST_F(InetPtonSuite, InetPtonSuite001, Function | MediumTest | Level2)
{
    // errors
    EXPECT_FALSE(inet_pton(12345, "", 0) != -1 || errno != EAFNOSUPPORT) << "inet_pton(12345,,) should fail with EAFNOSUPPORT, got " << strerror(errno) << endl;
    errno=0;
    EXPECT_FALSE(inet_ntop(AF_INET,"xxxx",(char *)"",0) != 0 || errno != ENOSPC) << "inet_ntop(,,0,0) should fail with ENOSPC, got " << strerror(errno) << endl;
    errno=0;

    // dotted-decimal notation
    V4("0.0.0.0", 1, (char *)"00000000")
    V4("127.0.0.1", 1, (char *)"7f000001")
    V4("10.0.128.31", 1, (char *)"0a00801f")
    V4("255.255.255.255", 1, (char *)"ffffffff")

    // numbers-and-dots notation, but not dotted-decimal
    V4("1.2.03.4", 0, (char *)"01020304")
    V4("1.2.0x33.4", 0, (char *)"01023304")
    V4("1.2.0XAB.4", 0, (char *)"0102ab04")
    V4("1.2.0xabcd", 0, (char *)"0102abcd")
    V4("1.0xabcdef", 0, (char *)"01abcdef")
    V4("00377.0x0ff.65534", 0, (char *)"fffffffe")

    // invalid
    V4(".1.2.3", 0, (char *)"ffffffff")
    V4("1..2.3", 0, (char *)"ffffffff")
    V4("1.2.3.", 0, (char *)"ffffffff")
    V4("1.2.3.4.5", 0, (char *)"ffffffff")
    V4("1.2.3.a", 0, (char *)"ffffffff")
    V4("1.256.2.3", 0, (char *)"ffffffff")
    V4("1.2.4294967296.3", 0, (char *)"ffffffff")
    V4("1.2.-4294967295.3", 0, (char *)"ffffffff")
    V4("1.2. 3.4", 0, (char *)"ffffffff")

    // ipv6
    V6(":", 0, (char *)"")
    V6("::", 1, (char *)"00000000000000000000000000000000")
    V6("::1", 1, (char *)"00000000000000000000000000000001")
    V6(":::", 0, (char *)"")
    V6("192.168.1.1", 0, (char *)"")
    V6(":192.168.1.1", 0, (char *)"")
    V6("::192.168.1.1", 1, (char *)"000000000000000000000000c0a80101")
    V6("0:0:0:0:0:0:192.168.1.1", 1, (char *)"000000000000000000000000c0a80101")
    V6("0:0::0:0:0:192.168.1.1", 1, (char *)"000000000000000000000000c0a80101")
    V6("::012.34.56.78", 0, (char *)"")
    V6(":ffff:192.168.1.1", 0, (char *)"")
    V6("::ffff:192.168.1.1", 1, (char *)"00000000000000000000ffffc0a80101")
    V6(".192.168.1.1", 0, (char *)"")
    V6(":.192.168.1.1", 0, (char *)"")
    V6("a:0b:00c:000d:E:F::", 1, (char *)"000a000b000c000d000e000f00000000")
    V6("a:0b:00c:000d:0000e:f::", 0, (char *)"")
    V6("1:2:3:4:5:6::", 1, (char *)"00010002000300040005000600000000")
    V6("1:2:3:4:5:6:7::", 1, (char *)"00010002000300040005000600070000")
    V6("1:2:3:4:5:6:7:8::", 0, (char *)"")
    V6("1:2:3:4:5:6:7::9", 0, (char *)"")
    V6("::1:2:3:4:5:6", 1, (char *)"00000000000100020003000400050006")
    V6("::1:2:3:4:5:6:7", 1, (char *)"00000001000200030004000500060007")
    V6("::1:2:3:4:5:6:7:8", 0, (char *)"")
    V6("a:b::c:d:e:f", 1, (char *)"000a000b00000000000c000d000e000f")
    V6("ffff:c0a8:5e4", 0, (char *)"")
    V6(":ffff:c0a8:5e4", 0, (char *)"")
    V6("0:0:0:0:0:ffff:c0a8:5e4", 1, (char *)"00000000000000000000ffffc0a805e4")
    V6("0:0:0:0:ffff:c0a8:5e4", 0, (char *)"")
    V6("0::ffff:c0a8:5e4", 1, (char *)"00000000000000000000ffffc0a805e4")
    V6("::0::ffff:c0a8:5e4", 0, (char *)"")
    V6("c0a8", 0, (char *)"")
}
