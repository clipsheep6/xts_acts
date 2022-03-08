// commit: a6238c30d169cbac6bc4c4977622242063e32270 2011-02-22
// rewind should clear error
#include <stdio.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "RewindClearErrorSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RewindClearErrorSuite
*/

using namespace std;
using namespace testing::ext;
class RewindClearErrorSuite: public testing::Test {
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
 * @tc.name      : RewindClearErrorSuite001
 * @tc.desc      : Test RewindClearErrorSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RewindClearErrorSuite,RewindClearErrorTest, Function | MediumTest | Level2)
{
    char buf[1];
	size_t n;
	int fd;

	// make sure fread fails
	fd = dup(0);
	close(0);

	n = fread(buf, 1, sizeof buf, stdin);
    EXPECT_FALSE(n != 0 || !ferror(stdin)) << "fread(stdin) should have failed, got " 
    << n << " ferror " << ferror(stdin) << " feof " << feof(stdin) << endl;
    EXPECT_EQ(0,dup(fd)) << "dup failed" << endl;

	rewind(stdin);
    EXPECT_FALSE(ferror(stdin)) << "rewind failed to clear ferror" << endl;
}
