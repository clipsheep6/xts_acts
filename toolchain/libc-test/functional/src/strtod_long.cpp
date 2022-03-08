#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "StrtodLongSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StrtodLongSuite
*/

using namespace std;
using namespace testing::ext;
class StrtodLongSuite: public testing::Test {
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
 * @tc.name      : StrtodLongSuite001
 * @tc.desc      : Test StrtodLongSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */


HWTEST_F(StrtodLongSuite, StrtodLongTest, Function | MediumTest | Level2)
{
    double x, want = .1111111111111111111111;
	char buf[40000];

	memset(buf, '1', sizeof buf);
	buf[0] = '.';
	buf[sizeof buf - 1] = 0;
    EXPECT_EQ((x=strtod(buf, 0)) , want) << "strtod(.11[...]1) got " << x << " want " << want << endl;
}
