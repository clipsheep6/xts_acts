/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "adapter.h"
#include "gtest/gtest.h"
#include "ability_record.h"
#include "adapter.h"
#include "securec.h"

/**
* @brief  register a test suit named AbilityRecordTestSuite
* @param  subsystem name is aafwk
* @param  module name is  alilityrecord
* @param  test suit name is AbilityRecordTestSuite
*/
LITE_TEST_SUIT(alilityrecord, alilityrecord, AbilityRecordTestSuite);

static BOOL JsAppHostTestSuiteSuiteSetUp(void)
{
    printf("----------test case with AbilityRecordTest start-------------\n");
    return TRUE;
}

static BOOL JsAppHostTestSuiteTearDown(void)
{
    printf("----------test case with AbilityRecordTest end-------------\n");
    return TRUE;
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0001
 * @tc.name      : testAbilityDataDefaultLegal
 * @tc.desc      : testAbilityDataDefaultLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testGetMessageQueueIdLegal, Function | MediumTest | Level0)
{
    printf("------start testAbilityDataDefaultLegal------\n");
    AbilityData abilityData;
    TEST_ASSERT_EQUAL(abilityData.wantData, nullptr);
    TEST_ASSERT_EQUAL(abilityData.wantDataSize, 0);
    printf("------end testAbilityDataDefaultLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0002
 * @tc.name      : testAbilityRecordDefaultLegal
 * @tc.desc      : testAbilityRecordDefaultLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testAbilityRecordDefaultLegal, Function | MediumTest | Level0)
{
    printf("------start testAbilityRecordDefaultLegal------\n");
    AbilityRecord abilityRecord;
    uint8_t zero = 0;
    TEST_ASSERT_EQUAL(abilityRecord.appName, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.appPath, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.abilityData, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.jsAppHost, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.jsAppQueueId, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.taskId, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.token, zero);
    TEST_ASSERT_EQUAL(abilityRecord.taskId, zero);
    TEST_ASSERT_EQUAL(abilityData.state, SCHEDULE_STOP);
    printf("------end testAbilityRecordDefaultLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0003
 * @tc.name      : testSetAppNameLegal
 * @tc.desc      : testSetAppNameLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testSetAppNameLegal, Function | MediumTest | Level0)
{
    printf("------start testSetAppNameLegal------\n");
    AbilityRecord abilityRecord;
    const char *TEST_NAME1 = "testName1";
    const char *TEST_NAME2 = "testName2";
    abilityRecord.SetAppName(nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.appName, nullptr);
    abilityRecord.SetAppName(TEST_NAME1);
    TEST_ASSERT_EQUAL_STRING(abilityRecord.appName, TEST_NAME1);
    abilityRecord.SetAppName(TEST_NAME2);
    TEST_ASSERT_EQUAL_STRING(abilityRecord.appName, TEST_NAME2);
    printf("------end testSetAppNameLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0004
 * @tc.name      : testSetAppPathLegal
 * @tc.desc      : testSetAppPathLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testSetAppPathLegal, Function | MediumTest | Level0)
{
    printf("------start testSetAppPathLegal------\n");
    AbilityRecord abilityRecord;
    abilityRecord.SetAppPath(nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.appPath, nullptr);
    const char *TEST_PATH = "testPath";
    abilityRecord.SetAppPath(TEST_PATH);
    TEST_ASSERT_EQUAL_STRING(abilityRecord.appPath, TEST_PATH);
    printf("------end testSetAppPathLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0005
 * @tc.name      : testSetWantDataLegal
 * @tc.desc      : testSetWantDataLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testSetWantDataLegal, Function | MediumTest | Level0)
{
    printf("------start testSetWantDataLegal------\n");
    AbilityRecord abilityRecord;
    const uint16_t buffer1Size = 27;
    abilityRecord.SetWantData(nullptr, buffer1Size);
    TEST_ASSERT_NOT_NULL(abilityRecord.abilityData, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.abilityData->wantData, nullptr);
    TEST_ASSERT_EQUAL(abilityRecord.abilityData->wantDataSize, 0);
    printf("------end testSetWantDataLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0005
 * @tc.name      : testSetWantDataLegal
 * @tc.desc      : testSetWantDataLegal parameter legal test
 */
LITE_TEST_CASE(AbilityRecordTestSuite, testSetWantDataLegal, Function | MediumTest | Level0)
{
    printf("------start testSetWantDataLegal------\n");
    AbilityRecord abilityRecord;
    const uint16_t buffer1Size = 739;
    void *buffer1 = AdapterMalloc(buffer1Size);
    TEST_ASSERT_NOT_NULL(abilityRecord.abilityData, nullptr);
    TEST_ASSERT_EQUAL_INT16(abilityRecord.abilityData.wantDataSize, buffer1Size);
    TEST_ASSERT_EQUAL(abilityRecord.abilityData->wantData, buffer1);
    printf("------end testSetWantDataLegal------\n");
}


RUN_TEST_SUITE(AbilityRecordTestSuite);