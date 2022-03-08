// commit: 2e6239dd064d201c6e1b0f589bae9ff27949d2eb 2011-02-19
// commit: 382584724308442f03f3d29f7fc6de9e9d140982 2011-06-12
// mkstemp should return -1 on bad template
#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MkstempFailureSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MkstempFailureSuite
*/

using namespace std;
using namespace testing::ext;
class MkstempFailureSuite: public testing::Test {
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
 * @tc.name      : MkstempFailureSuite001
 * @tc.desc      : Test MkstempFailureSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
int mkstemp(char *);

#define S "/dev/null/fooXXXX"

HWTEST_F(MkstempFailureSuite, MkstempFailureTest, Function | MediumTest | Level2)
{
    char p[] = S;
	int r;

	r = mkstemp(p);
    EXPECT_FALSE(r != -1) << "mkstemp(" S ") did not fail" << endl;
    EXPECT_EQ(0,memcmp(p, S, sizeof p)) << "mkstemp(" S ") modified the template: " << p << endl;
    EXPECT_FALSE(r == -1 && errno != EINVAL) << "mkstemp(" S ") failed with " << errno << " [" 
    << strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
