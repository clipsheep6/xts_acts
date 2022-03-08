// commit 5f95f965e933c5b155db75520ac27c92ddbcf400 2014-03-18
// syscall should not sign extend pointers on x32
//#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <sys/syscall.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SyscallSignExtendSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SyscallSignExtendSuite
*/

using namespace std;
using namespace testing::ext;
class SyscallSignExtendSuite: public testing::Test {
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
 * @tc.name      : SyscallSignExtendSuite001
 * @tc.desc      : Test SyscallSignExtendSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(f) EXPECT_FALSE(!(f)) << #f << strerror(errno) << endl; 

HWTEST_F(SyscallSignExtendSuite,SyscallSignExtendTest, Function | MediumTest | Level2)
{
    char buf[1] = {1};
	int fd;
	int r;

	// test syscall with pointer
	T((fd = open("/dev/zero", O_RDONLY)) >= 0);
	T((r = syscall(SYS_read, fd, buf, 1)) == 1);
	// if (buf[0] != 0)
	// 	t_error("read %d instead of 0\n", buf[0]);
    EXPECT_EQ(0 , buf[0]) << "read " << buf[0] << " instead of 0" << endl;
}
