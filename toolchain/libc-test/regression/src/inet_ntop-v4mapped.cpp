// commit: 1cd417bdf10366d63cc875e285c6418709a58c17 2013-07-25
// inet_ntop should use ipv4 notation for v4mapped addresses
#include <string.h>
#include <arpa/inet.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "InetNtopV4mappedSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  InetNtopV4mappedSuite
*/

using namespace std;
using namespace testing::ext;
class InetNtopV4mappedSuite: public testing::Test {
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
 * @tc.name      : InetNtopV4mappedSuite001
 * @tc.desc      : Test InetNtopV4mappedSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(InetNtopV4mappedSuite, InetNtopV4mappedTest, Function | MediumTest | Level2)
{
    char *expect = (char *)"::ffff:192.168.0.1";
	char buf[100];
	char addr[16];
	if (inet_pton(AF_INET6, expect, addr) == 1) {
		EXPECT_FALSE(!inet_ntop(AF_INET6, addr, buf, sizeof buf)) << "inet_ntop failed" <<endl;
		EXPECT_FALSE(!strchr(buf, '.')) << "inet_ntop produced " << buf << " instead of " << expect << endl;
	} else {
		EXPECT_TRUE(inet_pton(AF_INET6, expect, addr) == 1) << "inet_pton failed" << endl;
	}
}
