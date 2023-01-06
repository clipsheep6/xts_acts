/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2022-2022. All rights reserved.
 */
/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
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
LITE_TEST_SUIT(test, example, IntTestSuite);

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

#ifdef __UNIPROTON__
    #define HIGH_PRIO 2
    #define MID_PRIO 3
    #define LOW_PRIO 4

    taskInfo.highPrio = HIGH_PRIO;
    taskInfo.midPrio = MID_PRIO;
    taskInfo.lowPrio = LOW_PRIO;
    taskInfo.stackSize = 0x800;
#elif __FREERTOS__
    #define HIGH_PRIO 4
    #define MID_PRIO 3
    #define LOW_PRIO 2
    #define STACK_SIZE 512
    
    taskInfo.highPrio = HIGH_PRIO;
    taskInfo.midPrio = MID_PRIO;
    taskInfo.lowPrio = LOW_PRIO;
    taskInfo.stackSize = STACK_SIZE;
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
LITE_TEST_CASE(IntTestSuite, DEADLOCKBREAK, Function | MediumTest | Level1)
{
    printf("##################start DEADLOCKBREAKTEST##################\n");
    RunTestCase("Rhealstone: Deadlock Break", &taskInfo, RhealstoneDeadlockBreakTest);
    TEST_ASSERT_LESS_THAN_INT(1422, g_cycle);
    printf("##################end DEADLOCKBREAKTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, TASKPREEMPT, Function | MediumTest | Level1)
{
    printf("##################start TASKPREEMPTTEST##################\n");
    RunTestCase("Rhealstone: Task Preempt", &taskInfo, RhealstonePreemptTest);
    TEST_ASSERT_LESS_THAN_INT(474, g_cycle);
    printf("##################end TASKPREEMPTTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, MESSAGELATENCY, Function | MediumTest | Level1)
{
    printf("##################start MESSAGELATENCYTEST##################\n");
    RunTestCase("Rhealstone: Intertask Message Latency", &taskInfo, RhealstoneMessageLatencyTest);
    TEST_ASSERT_LESS_THAN_INT(607, g_cycle);
    printf("##################end MESSAGELATENCYTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, INTERRUPTLATENCY, Function | MediumTest | Level1)
{
    printf("##################start INTERRUPTLATENCYTEST##################\n");
    RunTestCase("Rhealstone: Intertask Message Latency", &taskInfo, RhealstoneMessageLatencyTest);
    TEST_ASSERT_LESS_THAN_INT(195, g_cycle);
    printf("##################end INTERRUPTLATENCYTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, TASKSWITCH, Function | MediumTest | Level1)
{
    printf("##################start TASKSWITCHTEST##################\n");
    RunTestCase("Rhealstone: Task switch", &taskInfo, RhealstoneSwitchTest);
    TEST_ASSERT_LESS_THAN_INT(368, g_cycle);
    printf("##################end TASKSWITCHTEST##################\n");
};


LITE_TEST_CASE(IntTestSuite, SEMAPHORESHUFFLE, Function | MediumTest | Level1)
{
    printf("##################start SEMAPHORESHUFFLETEST##################\n");
    RunTestCase("Rhealstone: Semaphore Shuffle", &taskInfo, RhealstoneSemaphoreShuffleTest);
    TEST_ASSERT_LESS_THAN_INT(1164, g_cycle);
    printf("##################end SEMAPHORESHUFFLETEST##################\n");
};


RUN_TEST_SUITE(IntTestSuite);