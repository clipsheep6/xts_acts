// commit: 69ecbd0f3188be97f91cc0d6415836d23e88f7fc 2011-02-19
// commit: 382584724308442f03f3d29f7fc6de9e9d140982 2011-06-12
// commit: c4685ae429a0cce4b285859d62a71fe603f0a864 2013-08-02
// mkdtemp should return -1 on bad template
#define _DEFAULT_SOURCE 1
#define _BSD_SOURCE 1
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MkdtempFailureSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MkdtempFailureSuite
*/

using namespace std;
using namespace testing::ext;
class MkdtempFailureSuite: public testing::Test {
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
 * @tc.name      : MkdtempFailureSuite001
 * @tc.desc      : Test MkdtempFailureSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
char *mkdtemp(char *);

#define S "/dev/null/fooXXXX"

HWTEST_F(MkdtempFailureSuite, MkdtempFailureTest, Function | MediumTest | Level2)
{
    char p[] = S;
	char *r;

	r = mkdtemp(p);
    EXPECT_FALSE(r) << "mkdtemp(" S ") did not fail" << endl;
    EXPECT_EQ(0,memcmp(p, S, sizeof p)) << "mkdtemp(" S ") modified the template: " << p << endl;
    EXPECT_FALSE(r == 0 && errno != EINVAL) << "mkdtemp(" S ") failed with " << errno << " [" 
    << strerror(errno) << "] instead of " << EINVAL << " [ " << strerror(EINVAL) << " ]" << endl;
}
