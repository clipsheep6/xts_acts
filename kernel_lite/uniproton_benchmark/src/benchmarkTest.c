#include "hctest.h"
#include "rhealstone_test.h"
#include "hal/hal_rtos.h"
bool g_testDebugInfo = false;
/**
 * @tc.name:register a test suit named "IntTestSuite"
 * @param: test subsystem name
 * @param: exampal module name
 * @param: IntTestSuite test suit name
*/
static uint32_t g_cycle;
TaskPreempt taskInfo = {0};
LITE_TEST_SUIT(test,example,TntTestSuite);

/**
 * @tc.setup:define a setup for test suite,format:"IntTestSuite + SetUp"
 * @return: true setup success
 */
static BOOL IntTestSuiteSetUp()
{
#ifdef __UNIPROTON__
    printf("############## Uniproton test ###############\n");
#elif __FREERTOS__
    printf("############## FreeRTOS test ###############\n");
#endif

#ifdef ___UNIPROTON__
    taskInfo.highPrio = 2;
    taskInfo.midPrio = 3;
    taskInfo.lowPrio = 4;
    taskInfo.stackSize = 0x800;
#elif __FREERTOS__
    taskInfo.highPrio = 4;
    taskInfo.midPrio = 3;
    taskInfo.lowPrio = 2;
    taskInfo.stackSize = 512;
#endif
    taskInfo.testCount = 50000;
    LiteTestPrint("benchmarkTest setup\n");
    return TRUE;
}

/**
 * @tc.teardown:define a teardown for test suite,format:"IntTestSuite + SetUp"
 * @return: true teardown success
*/
static BOOL IntTestSuiteTearDown()
{
    LiteTestPrint("benchmarkTest teardown\n");
    return TRUE;
}

/**
 * @tc.name: TestCase001
 * @tc.desc: Verify int check function,not equal.
 * @tc.type: FUNC
 * @tc.require: AR000CQGMV
 * @tc.autor: xingchuanwen
*/
LITE_TEST_CASE(IntTestSuite, DEADLOCKBREAK,Function | MediumTest | Level1)
{
    printf("##################start DEADLOCKBREAKTEST##################\n");
    RunTestCase("Rhealstone: Deadlock Break", &taskInfo, RhealstoneDeadlockBreakTest);
    TEST_ASSERT_LESS_THAN_INT(1422,g_cycle);
    printf("##################end DEADLOCKBREAKTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, TASKPREEMPT,Function | MediumTest | Level1)
{
    printf("##################start TASKPREEMPTTEST##################\n");
    RunTestCase("Rhealstone: Task Preempt", &taskInfo, RhealstonePreemptTest);
    TEST_ASSERT_LESS_THAN_INT(474,g_cycle);
    printf("##################end TASKPREEMPTTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, MESSAGELATENCY,Function | MediumTest | Level1)
{
    printf("##################start MESSAGELATENCYTEST##################\n");
    RunTestCase("Rhealstone: Intertask Message Latency", &taskInfo, RhealstoneMessageLatencyTest);
    TEST_ASSERT_LESS_THAN_INT(607,g_cycle);
    printf("##################end MESSAGELATENCYTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, INTERRUPTLATENCY,Function | MediumTest | Level1)
{
    printf("##################start INTERRUPTLATENCYTEST##################\n");
    RunTestCase("Rhealstone: Intertask Message Latency", &taskInfo, RhealstoneMessageLatencyTest);
    TEST_ASSERT_LESS_THAN_INT(195,g_cycle);
    printf("##################end INTERRUPTLATENCYTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, TASKSWITCH,Function | MediumTest | Level1)
{
    printf("##################start TASKSWITCHTEST##################\n");
    RunTestCase("Rhealstone: Task switch", &taskInfo, RhealstoneSwitchTest);
    TEST_ASSERT_LESS_THAN_INT(368,g_cycle);
    printf("##################end TASKSWITCHTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, SEMAPHORESHUFFLE,Function | MediumTest | Level1)
{
    printf("##################start SEMAPHORESHUFFLETEST##################\n");
    RunTestCase("Rhealstone: Semaphore Shuffle", &taskInfo, RhealstoneSemaphoreShuffleTest);
    TEST_ASSERT_LESS_THAN_INT(1164,g_cycle);
    printf("##################end SEMAPHORESHUFFLETEST##################\n");
};


RUN_TEST_SUITE(IntTestSuite);