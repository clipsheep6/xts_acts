#include <sched.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SchedSetSchedulerSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SchedSetSchedulerSuite
*/

using namespace std;
using namespace testing::ext;
class SchedSetSchedulerSuite: public testing::Test {
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
 * @tc.name      : SchedSetSchedulerSuite001
 * @tc.desc      : Test SchedSetSchedulerSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */


HWTEST_F(SchedSetSchedulerSuite, SchedSetSchedulerTest, Function | MediumTest | Level2)
{
    struct sched_param param;
    int maxpri,minpri;
    int sched;
    pid_t pid;
    
    sched = SCHED_FIFO;
    pid = getpid();
    maxpri = sched_get_priority_max(sched);
    minpri = sched_get_priority_min(sched);
    EXPECT_TRUE(maxpri == 99 || minpri == 1);
    param.sched_priority = 23;//取值范围:minpri~maxpri
    EXPECT_EQ(0 , sched_setscheduler(pid, sched, &param));
    EXPECT_TRUE(sched_getscheduler(pid) == sched);
    EXPECT_EQ(0 , sched_getparam(pid, &param));
}
