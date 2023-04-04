/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file Execept in compliance with the License.
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

#include <stdlib.h>
#include <mbedtls/md.h>
#include <mbedtls/pkcs5.h>
#include <stdio.h>
#include <string.h>

#include "hks_mac_test.h"

#include <hctest.h>
#include <unistd.h>

#include "hks_api.h"
#include "hks_param.h"
#include "hks_test_api_performance.h"
#include "hks_test_common.h"
#include "hks_test_log.h"

#include "cmsis_os2.h"
#include "ohos_types.h"

#define HKS_TEST_MAC_REE_KEY_SIZE_32 32
#define HKS_DEFAULT_MAC_SRCDATA_SIZE 253
#define HKS_DEFAULT_MAC_SHA256_SIZE 32

#define TEST_TASK_STACK_SIZE      0x2000
#define WAIT_TO_TEST_DONE         4

static osPriority_t g_setPriority;


static const struct HksTestMacParams g_testMacParams[] = {
    /* success: ree-sha256 */
    { 0, HKS_SUCCESS, HKS_TEST_MAC_TYPE_REE, { 0 }, { 0 },
        { true, HKS_TEST_MAC_REE_KEY_SIZE_32, true, HKS_TEST_MAC_REE_KEY_SIZE_32 },
        { true, true, HKS_KEY_PURPOSE_MAC, true, HKS_DIGEST_SHA256 },
        { true, HKS_DEFAULT_MAC_SRCDATA_SIZE, true, HKS_DEFAULT_MAC_SRCDATA_SIZE },
        { true, HKS_DEFAULT_MAC_SHA256_SIZE, true, HKS_DEFAULT_MAC_SHA256_SIZE }
    },

    /* success: tee-sha256 */
    { 1, HKS_SUCCESS, HKS_TEST_MAC_TYPE_TEE, { true, DEFAULT_KEY_ALIAS_SIZE, true, DEFAULT_KEY_ALIAS_SIZE },
        { true, true, HKS_ALG_AES, true, HKS_AES_KEY_SIZE_256, true, HKS_KEY_PURPOSE_MAC,
            true, HKS_DIGEST_SHA256, false, 0, false, 0 },
        { 0 },
        { true,  true, HKS_KEY_PURPOSE_MAC, true, HKS_DIGEST_SHA256 },
        { true, HKS_DEFAULT_MAC_SRCDATA_SIZE, true, HKS_DEFAULT_MAC_SRCDATA_SIZE },
        { true, HKS_DEFAULT_MAC_SHA256_SIZE, true, HKS_DEFAULT_MAC_SHA256_SIZE }
    },
};

/*
 * @tc.register: register a test suit named "CalcMultiTest"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: CalcMultiTest test suit name
 */
LITE_TEST_SUIT(security, securityData, HksMacTest);

static void ExecHksInitialize(void const *argument)
{
    LiteTestPrint("HksInitialize Begin!\n");
    TEST_ASSERT_TRUE(HksInitialize() == 0);
    LiteTestPrint("HksInitialize End!\n");
    osThreadExit();
}


//*********************************************
#define SINGLE_PRINT_LENGTH 50
//*********************************************

//******************************************************
static char IntToAscii(uint8_t in_num)
{
    if (in_num <= 9) {
        return (char)('0' + in_num);
    }
    return (char)('A' + in_num - 10);
}

static int32_t BufferToAscii(uint8_t* src, uint32_t src_size, char* dst, uint32_t* dst_size) {
    const uint32_t ascii_len = src_size * 2 + 1;
    if (*dst_size < ascii_len) {
        printf("buffer is too samll.");
        return -1;
    }
    for (uint32_t i = 0; i < src_size; i++)
    {
        dst[2 * i] = IntToAscii(src[i] >> 4);/* take 4 high-order digits*/
        dst[2 * i + 1] = IntToAscii(src[i] & 0b00001111); /*take 4 low-order digits*/
    }

    dst[ascii_len - 1] = '\0';
    *dst_size = ascii_len;
    return 0;
}

static void printBuffer(uint8_t* buffer, uint32_t buffer_size)
{
    uint32_t index = 0;
    uint32_t print_count = buffer_size / SINGLE_PRINT_LENGTH;
    for (uint32_t i = 0; i < (print_count + 1); i++) {
        char chars[SINGLE_PRINT_LENGTH * 2 + 1] = { 0 };
        uint32_t char_size = SINGLE_PRINT_LENGTH * 2 + 1;
        BufferToAscii(buffer + index, (i == print_count) ? buffer_size % SINGLE_PRINT_LENGTH : SINGLE_PRINT_LENGTH, chars, &char_size);
        printf("Mine buff[%2u] size[%2u]: \"%s\"", i, (char_size - 1) / 2, chars);
        printf("\n");
        index += SINGLE_PRINT_LENGTH;
    }
}


static uint8_t CharToHex(char c)
{
    if ((c >= 'A') && (c <= 'F')) {
        return (c - 'A' + 10);
    }
    else if ((c >= 'a') && (c <= 'f')) {
        return (c - 'a' + 10);
    }
    else if ((c >= '0') && (c <= '9')) {
        return (c - '0');
    }
    else {
        return 16;
    }
}

int32_t HexStringToByte(const char* hexStr, uint8_t* byte, uint32_t byteLen);

int BaseTestMacAnswer()
{
    char cc = '2';
    int aa = cc;
    printf("aa : %d\n", aa);
    aa = (int)cc;
    printf("aa : %d\n", aa);
    // 首次创建
    //char salt[] = "D7BE8B97B3BE526F243BBF7DB857D95F1FA2B80C7D1C353F39A256471C711C6F";
    char mainKey[] = "8DD3C70014857C93F2B3B131892BB67662CD7B41D5D0D1E28CC60480975050F6";

    uint8_t mainKeyByte[32] = { 0 };
    uint8_t sourceByte[160] = { 0 };
    uint8_t macByte[32] = { 0 };
    //uint8_t saltByte[32] = { 0 };
    //HexStringToByte(msgSource, sourceByte, 32);
    HexStringToByte(mainKey, mainKeyByte, 32);
    //printBuffer(mainKeyByte, 32);
    uint32_t mbedtlsAlg = MBEDTLS_MD_SHA256;
    mbedtls_md_context_t ctx;
    //(void)memset_s(&ctx, sizeof(mbedtls_md_context_t), 0, sizeof(mbedtls_md_context_t));
    mbedtls_md_init(&ctx);
    //int ret = mbedtls_md_setup(&ctx, mbedtls_md_info_from_type((mbedtls_md_type_t)mbedtlsAlg), 1); /* 1 for using HMAC */
    //std::cout << "mbedtls_md_setup result is: " + ret << endl;
    //ret = mbedtls_pkcs5_pbkdf2_hmac(&ctx, mainKeyByte, 64, saltByte, 32, 1, 64, deriveByte);
    //std::cout << "mbedtls_pkcs5_pbkdf2_hmac result is: " + ret << endl;
    mbedtls_md_hmac(mbedtls_md_info_from_type((mbedtls_md_type_t)mbedtlsAlg), mainKeyByte, 32, sourceByte, 32, macByte);
    printBuffer(macByte, 32);
    //cout << FULL_PATH << endl;
    return 0;
}

/**
 * @tc.setup: define a setup for test suit, format:"CalcMultiTest + SetUp"
 * @return: true——setup success
 */
static BOOL HksMacTestSetUp()
{
    LiteTestPrint("setup\n");
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
    id = osThreadNew((osThreadFunc_t)ExecHksInitialize, NULL, &attr);
    sleep(WAIT_TO_TEST_DONE);
    LiteTestPrint("HksMacTestSetUp End2!\n");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"CalcMultiTest + TearDown"
 * @return: true——teardown success
 */
static BOOL HksMacTestTearDown()
{
    LiteTestPrint("tearDown\n");
    return TRUE;
}

static int32_t ConstructDataToBlob(struct HksBlob **srcData, struct HksBlob **macData,
    const struct HksTestBlobParams *srcDataParams, const struct HksTestBlobParams *macDataParams)
{
    int32_t ret = TestConstuctBlob(srcData,
        srcDataParams->blobExist,
        srcDataParams->blobSize,
        srcDataParams->blobDataExist,
        srcDataParams->blobDataSize);
    TEST_ASSERT_TRUE(ret == 0);

    ret = TestConstuctBlob(macData,
        macDataParams->blobExist,
        macDataParams->blobSize,
        macDataParams->blobDataExist,
        macDataParams->blobDataSize);
    TEST_ASSERT_TRUE(ret == 0);
    return ret;
}

static int32_t Mac(const struct HksBlob *key, const struct HksBlob *srcData, struct HksBlob *macData,
    const struct HksTestMacParamSet *macParamSetParams, enum HksTestMacType macType)
{
    struct HksParamSet *macParamSet = NULL;
    int32_t ret;
    if (macType == HKS_TEST_MAC_TYPE_REE) {
        struct TestMacParamSetStructure paramStructTrue = {
            &macParamSet,
            macParamSetParams->paramSetExist,
            macParamSetParams->setPurpose, macParamSetParams->purpose,
            macParamSetParams->setDigest, macParamSetParams->digest, true, false
        };
        ret = TestConstructMacParamSet(&paramStructTrue);
    } else {
        struct TestMacParamSetStructure paramStructFalse = {
            &macParamSet,
            macParamSetParams->paramSetExist,
            macParamSetParams->setPurpose, macParamSetParams->purpose,
            macParamSetParams->setDigest, macParamSetParams->digest, false, false
        };
        ret = TestConstructMacParamSet(&paramStructFalse);
    }
    TEST_ASSERT_TRUE(ret == 0);

    ret = HksMacRun(key, macParamSet, srcData, macData, 1);
    HksFreeParamSet(&macParamSet);
    return ret;
}

static int32_t BaseTestMac(uint32_t index)
{
    /* 1. generate key */
    struct HksBlob *key = NULL;
    int32_t ret;

    if (g_testMacParams[index].macType == HKS_TEST_MAC_TYPE_REE) {
        ret = TestConstuctBlob(&key,
            g_testMacParams[index].keyParams.blobExist,
            g_testMacParams[index].keyParams.blobSize,
            g_testMacParams[index].keyParams.blobDataExist,
            g_testMacParams[index].keyParams.blobDataSize);
    } else {
        if (g_testMacParams[index].keyAliasParams.blobExist) {
            ret = HuksGenerateKey(&key, &(g_testMacParams[index].keyAliasParams),
                &g_testMacParams[index].genKeyParamSetParams, NULL);
        } else {
            ret = TestConstuctBlob(&key,
                g_testMacParams[index].keyParams.blobExist,
                g_testMacParams[index].keyParams.blobSize,
                g_testMacParams[index].keyParams.blobDataExist,
                g_testMacParams[index].keyParams.blobDataSize);
        }
    }
    TEST_ASSERT_TRUE(ret == 0);

    /* 2. mac */
    struct HksBlob *srcData = NULL;
    struct HksBlob *macData = NULL;
    ret = ConstructDataToBlob(&srcData, &macData,
        &g_testMacParams[index].srcDataParams, &g_testMacParams[index].macParams);
    TEST_ASSERT_TRUE(ret == 0);

    ret = Mac(key, srcData, macData, &g_testMacParams[index].macParamSetParams, g_testMacParams[index].macType);
    if (ret != g_testMacParams[index].expectResult) {
        HKS_TEST_LOG_I("failed, ret[%u] = %d", g_testMacParams[index].testId, ret);
    }
    TEST_ASSERT_TRUE(ret == g_testMacParams[index].expectResult);

    /* 3. deletekey */
    if ((g_testMacParams[index].macType == HKS_TEST_MAC_TYPE_TEE) &&
        (g_testMacParams[index].keyAliasParams.blobExist)) {
        ret = HksDeleteKey(key, NULL);
        TEST_ASSERT_TRUE(ret == 0);
    }
    TestFreeBlob(&key);
    TestFreeBlob(&srcData);
    TestFreeBlob(&macData);
    return ret;
}

static void ExecHksMacTest001(void const *argument)
{
    LiteTestPrint("HksMacTest001 Begin!\n");
    int32_t ret = BaseTestMac(0);
    TEST_ASSERT_TRUE(ret == 0);
    LiteTestPrint("HksMacTest001 End!\n");
    osThreadExit();
}

static void ExecHksMacTest002(void const *argument)
{
    LiteTestPrint("HksMacTest002 Begin!\n");
    int32_t ret = BaseTestMac(1);
    TEST_ASSERT_TRUE(ret == 0);
    ret = BaseTestMacAnswer();
    LiteTestPrint("HksMacTest002 End!\n");
    osThreadExit();
}

/**
 * @tc.name: HksMacTest.HksMacTest001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksMacTest, HksMacTest001, Level1)
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
    id = osThreadNew((osThreadFunc_t)ExecHksMacTest001, NULL, &attr);
    sleep(WAIT_TO_TEST_DONE);
    LiteTestPrint("HksMacTest001 End2!\n");
}

#ifndef _CUT_AUTHENTICATE_
/**
 * @tc.name: HksMacTest.HksMacTest002
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksMacTest, HksMacTest002, Level1)
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
    id = osThreadNew((osThreadFunc_t)ExecHksMacTest002, NULL, &attr);
    sleep(WAIT_TO_TEST_DONE);
    LiteTestPrint("HksMacTest002 End2!\n");
}
#endif /* _CUT_AUTHENTICATE_ */

RUN_TEST_SUITE(HksMacTest);
