// introduced by d6c855caa88ddb1ab6e24e23a14b1e7baf4ba9c7 2018-09-15
// sscanf may crash on short input
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SscanfEofSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SscanfEofSuite
*/

using namespace std;
using namespace testing::ext;
class SscanfEofSuite: public testing::Test {
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
 * @tc.name      : SscanfEofSuite001
 * @tc.desc      : Test SscanfEofSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(SscanfEofSuite,SscanfEofTest, Function | MediumTest | Level2)
{
    const char *s = "0";
	const char *fmt = "%f%c";
	float f = 1.0f;
	char c = 'x';
	int r = sscanf(s, fmt, &f, &c);
    EXPECT_EQ(1 , r) << "sscanf(\""s << "\", \"" << fmt << "\",..) returned " << r << ", wanted 1" << endl;
    EXPECT_FALSE(f != 0.0f || c != 'x') << "sscanf(\"" << s << "\", \"" << fmt << "\",..) assigned f=" 
    << f << " c='" << c << "', wanted i=0 c='x'" << endl;
}
