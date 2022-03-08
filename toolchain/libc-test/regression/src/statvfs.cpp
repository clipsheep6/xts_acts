// commit 7673acd31503016f2af93e187aac98da07af42b4 2014-03-12
// internal statfs struct was wrong on mips
// this test does various sanity checks to catch such bugs
#include <string.h>
#include <errno.h>
#include <sys/statvfs.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "StatvfsSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StatvfsSuite
*/

using namespace std;
using namespace testing::ext;
class StatvfsSuite: public testing::Test {
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
 * @tc.name      : StatvfsSuite001
 * @tc.desc      : Test StatvfsSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(StatvfsSuite,SscanfEofTest, Function | MediumTest | Level2)
{
    struct statvfs f;

    EXPECT_FALSE(statvfs("/", &f)) << "statvfs(\"/\") failed: " << strerror(errno) << endl;
    EXPECT_FALSE(f.f_bsize == 0 || f.f_bsize > 1<<28) << "/ has bogus f_bsize: " << (unsigned long)f.f_bsize << endl;
    EXPECT_NE(0 , f.f_blocks) << "/ has 0 blocks" << endl;
    EXPECT_GE(f.f_blocks , f.f_bfree) << "/ has more free blocks (" << (unsigned long long)f.f_bfree 
    << ") than total blocks (" << (unsigned long long)f.f_blocks << ")" << endl;
    EXPECT_GE(f.f_blocks , f.f_bavail) << "/ has more avail blocks (" << (unsigned long long)f.f_bavail
    << ") than total blocks (" << (unsigned long long)f.f_blocks << ")" << endl;

    EXPECT_NE(0 , f.f_files) << "/ has 0 file nodes" << endl;
    EXPECT_GE(f.f_files , f.f_ffree) << "/ has more free file nodes (" << (unsigned long long)f.f_ffree 
    << ") than total file nodes (" << (unsigned long long)f.f_files << ")" << endl;
    EXPECT_GE(f.f_files , f.f_favail) <<  "/ has more avail file nodes (" << (unsigned long long)f.f_favail 
    << ") than total file nodes (" << (unsigned long long)f.f_files << ")" << endl;
    EXPECT_FALSE(f.f_namemax > 1<<16 || f.f_namemax < 8) << "/ has bogus f_namemax: " << (unsigned long)f.f_namemax << endl;
}
