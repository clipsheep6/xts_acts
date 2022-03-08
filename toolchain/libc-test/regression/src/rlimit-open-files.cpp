// rlimit should be able to set file limits
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/resource.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "RlimitOpenFilesSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  RlimitOpenFilesSuite
*/

using namespace std;
using namespace testing::ext;
class RlimitOpenFilesSuite: public testing::Test {
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
 * @tc.name      : RlimitOpenFilesSuite001
 * @tc.desc      : Test RlimitOpenFilesSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(RlimitOpenFilesSuite,RlimitOpenFilesTest, Function | MediumTest | Level2)
{
    static const long lim = 42;
	static const int r = RLIMIT_NOFILE;
	struct rlimit rl;
	int fd, maxfd = 0;

	rl.rlim_max = lim;
	rl.rlim_cur = lim;
	EXPECT_FALSE(setrlimit(r, &rl)) << "setrlimit(" << r << ", " << lim << ") failed: " << strerror(errno) << endl;
	EXPECT_FALSE(getrlimit(r, &rl)) << "getrlimit(" << r << ") failed: " << strerror(errno) << endl;

	EXPECT_FALSE(rl.rlim_max != lim || rl.rlim_cur != lim) << "getrlimit " << r << " says cur=" 
	<< rl.rlim_cur << ",max=" << rl.rlim_max << " after setting the limit to " << lim << endl;

	while((fd=dup(1)) != -1)
		if (fd > maxfd) maxfd = fd;
	EXPECT_EQ(EMFILE,errno) << "dup(1) failed with " << strerror(errno) << ", wanted EMFILE" << endl;
	EXPECT_EQ(maxfd+1 , lim) << "more fds are open than rlimit allows: fd=" << maxfd << ", limit=" << lim << endl;
}
