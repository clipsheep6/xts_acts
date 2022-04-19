#include <sched.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class SchedSetSchedulerSuite : public testing::Test {};


/**
 * @tc.name      : SchedSetSchedulerSuite001
 * @tc.desc      :
 * @tc.level     : Level 1
 */
HWTEST_F(SchedSetSchedulerSuite, SchedSetSchedulerTest, Function | MediumTest | Level2)
{
    struct sched_param param;
    int maxpri, minpri;
    int sched;
    pid_t pid;

    sched = SCHED_FIFO;
    pid = getpid();
    maxpri = sched_get_priority_max(sched);
    minpri = sched_get_priority_min(sched);
    EXPECT_TRUE(maxpri == 99 || minpri == 1);
    param.sched_priority = 23; //取值范围:minpri~maxpri
    // EXPECT_TRUE(sched_setscheduler(pid, sched, &param));
    EXPECT_EQ(0, sched_setscheduler(pid, sched, &param)) << "set sched faild" << endl;
    EXPECT_TRUE(sched_getscheduler(pid) == sched);
    EXPECT_EQ(0, sched_getparam(pid, &param)) << "sched_priority is set failed" << endl;
}
