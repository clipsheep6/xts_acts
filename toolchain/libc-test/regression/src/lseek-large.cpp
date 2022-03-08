// lseek should work with >2G offset
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "LseekLargeSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  LseekLargeSuite
*/

using namespace std;
using namespace testing::ext;
class LseekLargeSuite: public testing::Test {
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
 * @tc.name      : LseekLargeSuite001
 * @tc.desc      : Test LseekLargeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define A(c) EXPECT_TRUE(c) << #c << " failed: " << strerror(errno) << endl;

HWTEST_F(LseekLargeSuite, LseekLargeTest, Function | MediumTest | Level2)
{
    off_t a[] = {0x7fffffff, 0x80000000, 0x80000001, 0xffffffff, 0x100000001, 0x1ffffffff, 0 };
	off_t r;
	FILE *f;
	int fd;
	int i;

	A((f = tmpfile()) != 0);
	A((fd = fileno(f)) != -1);
	for (i = 0; a[i]; i++) {
		r = lseek(fd, a[i], SEEK_SET);
        EXPECT_EQ(r , a[i]) << "lseek(fd, 0x " << (long long)a[i] << ", SEEK_SET) got 0x" << (long long)r << endl;
	}
}
