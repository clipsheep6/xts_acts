// dn_expand should accept empty name (single \0)
#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <resolv.h>
//#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "DnExpandEmptySuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  DnExpandEmptySuite
*/

using namespace std;
using namespace testing::ext;
class DnExpandEmptySuite: public testing::Test {
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
 * @tc.name      : DnExpandEmptySuite001
 * @tc.desc      : Test DnExpandEmptySuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(DnExpandEmptySuite, DnExpandEmptyTest, Function | MediumTest | Level2)
{
    unsigned char packet[] = "";
	char name[] = "XX";
	int r;

	/* empty name in packet */
	r = dn_expand(packet, packet+1, packet, name, 1);
	EXPECT_EQ(1,r) << "dn_expand(\"\", name, 1) returned "<< r << ", wanted 1" << endl;
	EXPECT_FALSE(name[0]) << "dn_expand(\"\", name, 1) failed: got \"" << name << "\" name, wanted \"\"" << endl;
}
