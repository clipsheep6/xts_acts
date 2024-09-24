/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

#include "hks_test_common.h"
#include "securec.h"
#include "cmsis_os2.h"
#include "ohos_types.h"

#include <unistd.h>

static void TestOsThread(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("TestOsThread");
}

LITE_TEST_SUIT(security, test_hc_test_framework, TestHcTestFramework);
static BOOL TestHcTestFrameworkSetUp()
{
    HKS_TEST_LOG_I("TestHcTestFrameworkSetUp");
    osThreadAttr_t attr;
    attr.name = "TestHcTestFramework";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = osPriorityAboveNormal6;
    osThreadId_t id = osThreadNew(TestOsThread, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("TestHcTestFrameworkSetUp");

    return TRUE;
}
static BOOL TestHcTestFrameworkTearDown()
{
    HKS_TEST_LOG_I("TestHcTestFrameworkTearDown");
    return TRUE;
}
LITE_TEST_CASE(TestHcTestFramework, TestHcTestFramework001, Level1)
{
    HKS_TEST_LOG_I("TestHcTestFramework001");
    osThreadAttr_t attr;
    attr.name = "TestHcTestFramework";
    attr.attr_bits = 0U;
    attr.cb_mem = NULL;
    attr.cb_size = 0U;
    attr.stack_mem = NULL;
    attr.stack_size = TEST_TASK_STACK_SIZE;
    attr.priority = osPriorityAboveNormal6;
    osThreadId_t id = osThreadNew(TestOsThread, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("TestHcTestFramework001");
}
RUN_TEST_SUITE(TestHcTestFramework);
