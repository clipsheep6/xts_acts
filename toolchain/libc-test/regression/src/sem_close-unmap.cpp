// commit: f70375df85d26235a45e74559afd69be59e5ff99 2020-10-28
#define _GNU_SOURCE 1
#include <fcntl.h>
#include <stdlib.h>
#include <semaphore.h>
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "SemCloseUnmapSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SemCloseUnmapSuite
*/

using namespace std;
using namespace testing::ext;
class SemCloseUnmapSuite: public testing::Test {
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
 * @tc.name      : SemCloseUnmapSuite001
 * @tc.desc      : Test SemCloseUnmapSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(SemCloseUnmapSuite,SemCloseUnmapTest, Function | MediumTest | Level2)
{
    char buf[] = "mysemXXXXXX";
	if (!mktemp(buf)) return;
    //ASSERT_FALSE(!mktemp(buf));
	// open twice
	sem_t *sem = sem_open(buf, O_CREAT|O_EXCL, 0600, 0);
	sem_open(buf, 0);
	sem_unlink(buf);
	// close once
	sem_close(sem);
	// semaphore should be still mapped
	sem_post(sem);
}
