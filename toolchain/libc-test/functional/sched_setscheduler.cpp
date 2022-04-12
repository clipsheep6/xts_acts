#include <sched.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class SchedSetSchedulerSuite : public testing::Test {};

/**
 * @tc.name      : SchedSetSchedulerTest
 * @tc.desc      :
 * @tc.level     : Level 2
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
    param.sched_priority = 23;
    EXPECT_EQ(0, sched_setscheduler(pid, sched, &param));
    EXPECT_TRUE(sched_getscheduler(pid) == sched);
    EXPECT_EQ(0, sched_getparam(pid, &param));
}
