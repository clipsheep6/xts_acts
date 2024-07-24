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

#ifndef _CUT_AUTHENTICATE_

#include <hctest.h>
#include <unistd.h>

#include "hks_api.h"
#include "hks_param.h"
#include "hks_test_api_performance.h"
#include "hks_test_common.h"
#include "hks_test_log.h"
#include "hks_type.h"

#include "cmsis_os2.h"
#include "ohos_types.h"

#define DEFAULT_SRC_DATA_SIZE 200
#define DIGEST_SHA1_HASH_SIZE 20
#define DIGEST_SHA224_HASH_SIZE 28
#define DIGEST_SHA256_HASH_SIZE 32
#define DIGEST_SHA384_HASH_SIZE 48
#define DIGEST_SHA512_HASH_SIZE 64

static osPriority_t g_setPriority;

/*
 * @tc.register: register a test suit named "CalcMultiTest"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: CalcMultiTest test suit name
 */
LITE_TEST_SUIT(security, securityData, HksHashTest);

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
static BOOL HksHashTestSetUp()
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
    HKS_TEST_LOG_I("HksMacTestSetUp End2!\n");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"CalcMultiTest + TearDown"
 * @return: true——teardown success
 */
static BOOL HksHashTestTearDown()
{
    HKS_TEST_LOG_I("tearDown\n");
    return TRUE;
}

static const struct HksTestHashParams g_testHashParams[] = {
    /* normal case */
    { 0, HKS_SUCCESS,
        { true, true, HKS_DIGEST_SHA256 },
        { true, DEFAULT_SRC_DATA_SIZE, true, DEFAULT_SRC_DATA_SIZE },
        { true, DIGEST_SHA256_HASH_SIZE, true, DIGEST_SHA256_HASH_SIZE }
    },
    { 1, HKS_SUCCESS,
        { true, true, HKS_DIGEST_SHA384 },
        { true, DEFAULT_SRC_DATA_SIZE, true, DEFAULT_SRC_DATA_SIZE },
        { true, DIGEST_SHA384_HASH_SIZE, true, DIGEST_SHA384_HASH_SIZE }
    },
    { 2, HKS_SUCCESS,
        { true, true, HKS_DIGEST_SHA512 },
        { true, DEFAULT_SRC_DATA_SIZE, true, DEFAULT_SRC_DATA_SIZE },
        { true, DIGEST_SHA512_HASH_SIZE, true, DIGEST_SHA512_HASH_SIZE }
    },
};

static void ExecHksHashTestCommon(int index)
{
    struct HksParamSet *paramSet = NULL;
    struct HksBlob *srcData = NULL;
    struct HksBlob *hash = NULL;

    int32_t ret = TestConstructHashParamSet(&paramSet,
        g_testHashParams[index].paramSetParams.paramSetExist,
        g_testHashParams[index].paramSetParams.setDigest, g_testHashParams[index].paramSetParams.digest);
    TEST_ASSERT_EQUAL(0, ret);

    ret = TestConstuctBlob(&srcData,
        g_testHashParams[index].srcDataParams.blobExist,
        g_testHashParams[index].srcDataParams.blobSize,
        g_testHashParams[index].srcDataParams.blobDataExist,
        g_testHashParams[index].srcDataParams.blobDataSize);
    TEST_ASSERT_EQUAL(0, ret);

    ret = TestConstructBlobOut(&hash,
        g_testHashParams[index].hashParams.blobExist,
        g_testHashParams[index].hashParams.blobSize,
        g_testHashParams[index].hashParams.blobDataExist,
        g_testHashParams[index].hashParams.blobDataSize);
    TEST_ASSERT_EQUAL(0, ret);

    ret = HksHashRun(paramSet, srcData, hash, 1);
    if (ret != g_testHashParams[index].expectResult) {
        HKS_TEST_LOG_I("HksHashRun failed, ret[%u] = %d", g_testHashParams[index].testId, ret);
    }
    TEST_ASSERT_EQUAL(g_testHashParams[index].expectResult, ret);

    HksFreeParamSet(&paramSet);
    TestFreeBlob(&srcData);
    TestFreeBlob(&hash);
    HKS_TEST_LOG_I("[%u]TestHash, Testcase_Hash_[%03u] pass!", 1, g_testHashParams[index].testId);
    TEST_ASSERT_EQUAL(0, ret);
}

static void ExecHksHashTest001(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksMacTest001 Begin!\n");
    ExecHksHashTestCommon(0);
    HKS_TEST_LOG_I("HksMacTest001 End!\n");
}

static void ExecHksHashTest002(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksMacTest002 Begin!\n");
    ExecHksHashTestCommon(1);
    HKS_TEST_LOG_I("HksMacTest002 End!\n");
}

static void ExecHksHashTest003(__attribute__((unused)) void *argument)
{
    HKS_TEST_LOG_I("HksMacTest003 Begin!\n");
    ExecHksHashTestCommon(2);
    HKS_TEST_LOG_I("HksMacTest003 End!\n");
}

/**
 * @tc.name: HksHashTest.HksHashTest001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksHashTest, HksHashTest001, Level1)
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
    id = osThreadNew(ExecHksHashTest001, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksMacTest001 End2!\n");
}
/**
 * @tc.name: HksHashTest.HksHashTest002
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksHashTest, HksHashTest002, Level1)
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
    id = osThreadNew(ExecHksHashTest002, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksMacTest001 End2!\n");
}
/**
 * @tc.name: HksHashTest.HksHashTest003
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksHashTest, HksHashTest003, Level1)
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
    id = osThreadNew(ExecHksHashTest003, NULL, &attr);
    TEST_ASSERT_NOT_NULL(id);
    HksWaitForThread(id);
    HKS_TEST_LOG_I("HksMacTest001 End2!\n");
}
RUN_TEST_SUITE(HksHashTest);

#endif /* _CUT_AUTHENTICATE_ */

