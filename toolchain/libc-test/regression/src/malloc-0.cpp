// commit: 26031da0f83a2a3ed52190077931ee6c18dfd689 2011-02-20
// malloc(0) should return unique pointers
// (often expected and gnulib replaces malloc if malloc(0) returns 0)
#include <stdlib.h>
//#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "Malloc0Suite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Malloc0Suite
*/

using namespace std;
using namespace testing::ext;
class Malloc0Suite: public testing::Test {
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
 * @tc.name      : Malloc0Suite001
 * @tc.desc      : Test Malloc0Suite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(Malloc0Suite, Malloc0Test, Function | MediumTest | Level2)
{
    void *p = malloc(0);
	void *q = malloc(0);
	void *r = malloc(0);
    EXPECT_FALSE(!p || !q || !r) << "malloc(0) returned NULL" << endl;
    EXPECT_FALSE(p == q || p == r || q == r) << "malloc(0) returned non-unique pointers: " 
    << p << ","  << q << "," << r << endl;
	free(q);
	free(p);
	free(r);
}
