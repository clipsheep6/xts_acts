/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#include "hks_api.h"
#include "hks_param.h"
#include "hks_test_cipher.h"
#include "hks_test_common.h"
#include "securec.h"
#include "cmsis_os2.h"
#include "ohos_types.h"

#include <unistd.h>

#define TEST_INDEX_0    0
#define TEST_INDEX_1    1
#define TEST_INDEX_2    2
#define TEST_INDEX_3    3
#define TEST_INDEX_4    4

static osPriority_t g_setPriority;

/*
 * @tc.register: register a test suit named "CalcMultiTest"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: CalcMultiTest test suit name
 */
LITE_TEST_SUIT(security, securityData, HksCipherTest);

static void ExecHksInitialize(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksInitialize Begin!\n");
    TEST_ASSERT_EQUAL(0, HksInitialize());
    HKS_TEST_LOG_I("HksInitialize End!\n");
}

/**
 * @tc.setup: define a setup for test suit, format:"CalcMultiTest + SetUp"
 * @return: true——setup success
 */
static BOOL HksCipherTestSetUp()
{
    HKS_TEST_LOG_I("setup\n");
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksInitialize, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTestSetUp End2!\n");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"CalcMultiTest + TearDown"
 * @return: true——teardown success
 */
static BOOL HksCipherTestTearDown()
{
    HKS_TEST_LOG_I("tearDown\n");
    return TRUE;
}

static void ExecHksCipherTest001(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest001 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestCipher(1, TEST_INDEX_0, 1));
    HKS_TEST_LOG_I("HksCipherTest001 End!\n");
}

static void ExecHksCipherTest002(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest002 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestCipher(1, TEST_INDEX_0, 1));
    HKS_TEST_LOG_I("HksCipherTest002 End!\n");
}

static void ExecHksCipherTest003(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest003 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestEncrypt(1, TEST_INDEX_0, 1));
    HKS_TEST_LOG_I("HksCipherTest003 End!\n");
}

static void ExecHksCipherTest004(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest004 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestEncrypt(1, TEST_INDEX_1, 1));
    HKS_TEST_LOG_I("HksCipherTest004 End!\n");
}

static void ExecHksCipherTest005(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest005 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestEncrypt(1, TEST_INDEX_2, 1));
    HKS_TEST_LOG_I("HksCipherTest005 End!\n");
}

static void ExecHksCipherTest006(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest006 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestEncrypt(1, TEST_INDEX_3, 1));
    HKS_TEST_LOG_I("HksCipherTest006 End!\n");
}

static void ExecHksCipherTest007(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest007 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestEncrypt(1, TEST_INDEX_4, 1));
    HKS_TEST_LOG_I("HksCipherTest007 End!\n");
}

static void ExecHksCipherTest008(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest008 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestDecrypt(1, TEST_INDEX_0, 1));
    HKS_TEST_LOG_I("HksCipherTest008 End!\n");
}

static void ExecHksCipherTest009(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest009 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestDecrypt(1, TEST_INDEX_1, 1));
    HKS_TEST_LOG_I("HksCipherTest009 End!\n");
}

static void ExecHksCipherTest010(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest010 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestCipher(1, TEST_INDEX_2, 1));
    HKS_TEST_LOG_I("HksCipherTest010 End!\n");
}

static void ExecHksCipherTest011(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest011 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestDecrypt(1, TEST_INDEX_3, 1));
    HKS_TEST_LOG_I("HksCipherTest011 End!\n");
}

static void ExecHksCipherTest012(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksCipherTest012 Begin!\n");
    TEST_ASSERT_EQUAL(0, BaseTestDecrypt(1, TEST_INDEX_4, 1));
    HKS_TEST_LOG_I("HksCipherTest012 End!\n");
}


/**
 * @tc.name: HksCipherTest.HksCipherTest001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksCipherTest, HksCipherTest001, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest001, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest001 End2!\n");
}

#ifndef _CUT_AUTHENTICATE_

LITE_TEST_CASE(HksCipherTest, HksCipherTest002, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest002, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest002 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest003, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest003, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest003 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest004, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest004, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest004 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest005, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest005, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest005 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest006, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest006, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest006 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest007, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest007, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest007 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest008, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest008, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest008 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest009, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest009, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest009 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest010, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest010, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest010 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest011, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest011, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest011 End2!\n");
}

LITE_TEST_CASE(HksCipherTest, HksCipherTest012, Level1)
{
    osThreadId_t id;
    osThreadAttr_t attr;
    g_setPriority = osPriorityAboveNormal6;
    attr.name = "test";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = g_setPriority;
    id = osThreadNew(ExecHksCipherTest012, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksCipherTest012 End2!\n");
}
#endif /* _CUT_AUTHENTICATE_ */

RUN_TEST_SUITE(HksCipherTest);
