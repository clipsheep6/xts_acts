// fgets must not modify the buffer on eof
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FgetsEofSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FgetsEofSuite
*/

using namespace std;
using namespace testing::ext;
class FgetsEofSuite: public testing::Test {
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

/**if (!(c)) t_error("%s failed\n", #c); 
 * @tc.name      : FgetsEofSuite001
 * @tc.desc      : Test FgetsEofSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define ASSERTT(c) do { EXPECT_FALSE(!(c)) << #c << " failed" << endl;} while(0)

HWTEST_F(FgetsEofSuite, FgetsEofTest, Function | MediumTest | Level2)
{
    char buf[] = "test";
	char s[10];
	FILE *f;

	ASSERTT((f = fmemopen(buf, sizeof buf, "r")) != 0);
	ASSERTT(fgets(s, sizeof s, f) == s);
	ASSERTT(strcmp(s, buf) == 0);
	ASSERTT(fgets(s, sizeof s, f) == 0);
	EXPECT_EQ(s[0] , 't') << "fgets modified the buffer after eof" << endl;
}
