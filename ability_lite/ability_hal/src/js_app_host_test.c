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

#include "cmsis_os.h"
#include "hctest.h"
#include "ohos_types.h"
#include "js_app_host.h"

/**
* @brief  register a test suit named JsAppHostTestSuite
* @param  subsystem name is aafwk
* @param  module name is  jsapphost
* @param  test suit name is JsAppHostTestSuite
*/
LITE_TEST_SUIT(aafwk, jsapphost, JsAppHostTestSuite);

static BOOL JsAppHostTestSuiteSuiteSetUp(void)
{
    printf("----------test case with JsAppHostTest start-------------\n");
    return TRUE;
}

static BOOL JsAppHostTestSuiteTearDown(void)
{
    printf("----------test case with JsAppHostTest end-------------\n");
    return TRUE;
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0001
 * @tc.name      : testGetMessageQueueIdLegal
 * @tc.desc      : testGetMessageQueueIdLegal - legal test
 */
LITE_TEST_CASE(JsAppHostTestSuite, testGetMessageQueueIdLegal, Function | MediumTest | Level0)
{
    printf("------start testGetMessageQueueIdLegal------\n");
    JsAppHost jsAppHost;
    TEST_ASSERT_EQUAL(jsAppHost.GetMessageQueueId(), nullptr);
    printf("------end testGetMessageQueueIdLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0002
 * @tc.name      : testSetMessageQueueIdLegal
 * @tc.desc      : testSetMessageQueueIdLegal parameter legal test
 */
LITE_TEST_CASE(JsAppHostTestSuite, testSetMessageQueueIdLegal, Function | MediumTest | Level0)
{
    printf("------start testSetAppNameLegal------\n");
    JsAppHost jsAppHost;
    jsAppHost.SetMessageQueueId(nullptr);
    TEST_ASSERT_EQUAL(jsAppHost.GetMessageQueueId(), nullptr);
    printf("------end testSetAppNameLegal------\n");
}

/**
 * @tc.number    : SUB_AAFWK_RRCORD_0003
 * @tc.name      : testSetMessageQueueIdLegal
 * @tc.desc      : testSetMessageQueueIdLegal parameter legal test
 */
LITE_TEST_CASE(JsAppHostTestSuite, testSetMessageQueueIdLegal, Function | MediumTest | Level0)
{
    printf("------start testSetAppNameLegal------\n");
    JsAppHost jsAppHost;
    constexpr int32_t QUEUE_LENGTH = 32;
    osMessageQueueId_t jsAppQueueId = osMessageQueueNew(QUEUE_LENGTH, 0, nullptr);
    jsAppHost.SetMessageQueueId(jsAppQueueId);
    TEST_ASSERT_EQUAL(jsAppHost.GetMessageQueueId(), jsAppQueueId);
    printf("------end testSetAppNameLegal------\n");
}

RUN_TEST_SUITE(JsAppHostTestSuite);