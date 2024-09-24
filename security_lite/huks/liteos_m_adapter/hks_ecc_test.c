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

#include "hctest_internal.h"
#include "hks_api.h"
#include "hks_client_service_adapter.h"
#include "hks_param.h"
#include "hks_type.h"
#include "securec.h"
#include "string.h"
#include "hks_log.h"
#include "unity.h"

static uint8_t gTestAliasEccAlice[] = "test_ecc_alice";
static uint8_t gTestAliasEccBob[] = "test_ecc_bob";
static uint8_t gTestAliasEccOrigin[] = "test_ecc_origin";
#define G_TEST_INN_DATA_LEN 240
static uint8_t gTestInData[G_TEST_INN_DATA_LEN] = "Hks_ECDH_Agree_Test_00000000000000000000000000000000000000000000"
    "0000000000000000000000000000000000000000000000000000000000000000"
    "0000000000000000000000000000000000000000000000000000000000000000"
    "0000000000000000000000000000000000000000_string";
static uint8_t gTestPlainTextEcc[] = "This is a plain text! Hello world and thanks for watching ECC";

#define TEST_AES_SIZE_12 12
#define TEST_AES_SIZE_16 16
static uint8_t gTestNonce[TEST_AES_SIZE_12] = "hahahahahah";
static uint8_t gTestAad[TEST_AES_SIZE_16] = "bababababababab";

#define LOGI(fmt, ...) printf("[I][%s][%d]" fmt "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define LOGD(fmt, ...) printf("[D][%s][%d]" fmt "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define LOGE(fmt, ...) printf("[E][%s][%d]" fmt "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)

enum {
    ECC_COMMON_SIZE = 1024,
};

/*
 * @tc.register: register a test suit named "HksEccTest"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: HksEccTest test suit name
 */
LITE_TEST_SUIT(security, securityData, HksEccTest);

/**
 * @tc.setup: define a setup for test suit, format:"HksEccTest + SetUp"
 * @return: true——setup success
 */
static BOOL HksEccTestSetUp()
{
    HKS_TEST_LOG_I("HksInitialize Begin!");
    TEST_ASSERT_EQUAL(HKS_SUCCESS, HksInitialize());
    HKS_TEST_LOG_I("HksInitialize End!");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"HksEccTest + TearDown"
 * @return: true——teardown success
 */
static BOOL HksEccTestTearDown()
{
    return TRUE;
}

static void TestEccGenerateKey(const struct HksBlob *alias)
{
    struct HksParam paramGenerateKeyPersist[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
        { .tag = HKS_TAG_IS_KEY_ALIAS, .boolParam = true },
        { .tag = HKS_TAG_KEY_ALIAS, .blob = *alias },
        { .tag = HKS_TAG_DERIVE_AGREE_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS }
    };
    struct HksParamSet *paramSetGenerateKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetGenerateKeyPersist,
        paramGenerateKeyPersist, HKS_ARRAY_SIZE(paramGenerateKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(alias, paramSetGenerateKeyPersist, NULL));
}

static void inline TestEccExportPubKey(const struct HksBlob *alias, struct HksBlob *x509alias)
{
    TEST_ASSERT_EQUAL(0, HksExportPublicKey(alias, NULL, x509alias));
}

static void TestEccAgreeOneStage(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob)
{
    TestEccGenerateKey(aliasAlice);
    TestEccGenerateKey(aliasBob);
    struct HksBlob x509PubKeyAlice = { .size = ECC_COMMON_SIZE, .data = malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(x509PubKeyAlice.data);

    struct HksBlob x509PubKeyBob = { .size = ECC_COMMON_SIZE, .data = malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(x509PubKeyBob.data);

    TestEccExportPubKey(aliasAlice, &x509PubKeyAlice);
    TestEccExportPubKey(aliasBob, &x509PubKeyBob);

    struct HksParam paramAgree[] = {
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECDH },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag= HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
        { .tag = HKS_TAG_AGREE_ALG, .uint32Param = HKS_ALG_ECDH },
    };
    struct HksParamSet *paramSetAgree = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetAgree));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetAgree, paramAgree, HKS_ARRAY_SIZE(paramAgree)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetAgree));

    struct HksBlob agreedKeyAlice = {
        .size = HKS_KEY_BYTES(HKS_ECC_KEY_SIZE_256),
        .data = malloc(HKS_KEY_BYTES(HKS_ECC_KEY_SIZE_256)),
    };
    TEST_ASSERT_NOT_NULL(agreedKeyAlice.data);
    TEST_ASSERT_EQUAL(0, HksAgreeKey(paramSetAgree, aliasAlice, &x509PubKeyBob, &agreedKeyAlice));

    struct HksBlob agreedKeyBob = {
        .size = HKS_KEY_BYTES(HKS_ECC_KEY_SIZE_256),
        .data = malloc(HKS_KEY_BYTES(HKS_ECC_KEY_SIZE_256)),
    };
    TEST_ASSERT_NOT_NULL(agreedKeyBob.data);
    TEST_ASSERT_EQUAL(0, HksAgreeKey(paramSetAgree, aliasBob, &x509PubKeyAlice, &agreedKeyBob));

    TEST_ASSERT_EQUAL(agreedKeyAlice.size, agreedKeyBob.size);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(agreedKeyAlice.data, agreedKeyBob.data, agreedKeyAlice.size);

    free(x509PubKeyAlice.data);
    free(x509PubKeyBob.data);
    free(agreedKeyAlice.data);
    free(agreedKeyBob.data);
    LOGE("TestEccAgreeOneStage end!!!");
}

static void ConstructInitParams(struct HksParamSet **out)
{
    struct HksParamSet *initParamSet = NULL;
    struct HksParam agreeParamInit[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECDH },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
    };
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&initParamSet));
    TEST_ASSERT_EQUAL(0, HksAddParams(initParamSet, agreeParamInit, HKS_ARRAY_SIZE(agreeParamInit)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&initParamSet));
    *out = initParamSet;
}

static void ConstructFinishParams(struct HksParamSet **out)
{
    struct HksParamSet *finishParamSet = NULL;
    struct HksParam agreeParamFinish[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_ENCRYPT | HKS_KEY_PURPOSE_DECRYPT },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
        { HKS_TAG_ASSOCIATED_DATA, .blob = { sizeof(gTestAad), gTestAad }},
        { HKS_TAG_NONCE, .blob = { sizeof(gTestNonce), gTestNonce }},
    };
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&finishParamSet));
    TEST_ASSERT_EQUAL(0, HksAddParams(finishParamSet, agreeParamFinish, HKS_ARRAY_SIZE(agreeParamFinish)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&finishParamSet));
    *out = finishParamSet;
}

static int32_t AgreeSharedKey(const struct HksBlob *alias, const struct HksBlob *pubKey,
    struct HksBlob *sharedKeyBlob)
{
    struct HksParamSet *initParamSet = NULL;
    struct HksParamSet *finishParamSet = NULL;
    ConstructInitParams(&initParamSet);
    ConstructFinishParams(&finishParamSet);

    uint8_t handle[sizeof(uint64_t)] = { 0 };
    struct HksBlob handleBlob = { sizeof(uint64_t), handle };

    struct HksBlob outDataUpdateBlob = {
        ECC_COMMON_SIZE,
        malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(outDataUpdateBlob.data);

    struct HksBlob inData = {
        G_TEST_INN_DATA_LEN,
        gTestInData,
    };
    int32_t res;
    do {
        LOGE("initParamSet cnt, res = %d", initParamSet->paramsCnt);
        res = HksInit(alias, initParamSet, &handleBlob, NULL);
        if (res != HKS_SUCCESS) {
            LOGE("Huks agree P256 key: HksInit failed, res = %d", res);
            break;
        }
        LOGE("initParamSet cnt, res = %d", initParamSet->paramsCnt);
        res = HksUpdate(&handleBlob, initParamSet, pubKey, &outDataUpdateBlob);
        if (res != HKS_SUCCESS) {
            LOGE("Huks agree P256 key: HksUpdate failed, res = %d", res);
            break;
        }
        LOGI("[HUKS]: HksFinish enter.");
        LOGE("finishParamSet cnt, res = %d", finishParamSet->paramsCnt);
        res = HksFinish(&handleBlob, finishParamSet, &inData, sharedKeyBlob);
        LOGI("[HUKS]: HksFinish quit. [Res]: %d", res);
        if (res != HKS_SUCCESS) {
            LOGE("[HUKS]: HksFinish fail. [Res]: %d", res);
            break;
        }
    } while (0);
    HksFreeParamSet(&initParamSet);
    HksFreeParamSet(&finishParamSet);
    free(outDataUpdateBlob.data);
    return res;
}

static int32_t TestAgreeKeyEncryptDecrypt(const struct HksBlob *aliasAlice, const struct HksParamSet *encryptParamSet,
    const struct HksBlob *aliasBob, struct HksParamSet *decryptParamSet)
{
    uint8_t plainTest[] = "test_plain_test_";
    struct HksBlob plaindata = { .size = sizeof(plainTest), .data = plainTest };

    struct HksBlob cipherData = {
        .size = ECC_COMMON_SIZE,
        .data = (uint8_t *)malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(cipherData.data);

    int32_t res = HksEncrypt(aliasAlice, encryptParamSet, &plaindata, &cipherData);
    if (res != HKS_SUCCESS) {
        LOGE("[HUKS]: HksEncrypt fail. [Res]: %d", res); // -13
        return res;
    }

    struct HksBlob decrypedData = {
        .size = ECC_COMMON_SIZE,
        .data = (uint8_t *)malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(decrypedData.data);

    res = HksDecrypt(aliasBob, decryptParamSet, &cipherData, &decrypedData);
    if (res != HKS_SUCCESS) {
        LOGE("[HUKS]: HksDecrypt fail. [Res]: %d", res);
        return res;
    }
    TEST_ASSERT_EQUAL(decrypedData.size, plaindata.size);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(decrypedData.data, plaindata.data, plaindata.size);
    free(cipherData.data);
    free(decrypedData.data);
    return res;
}

static int32_t TestAgreeSharedKeyResult(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob)
{
    struct HksParamSet *encryptParamSet = NULL;
    struct HksParamSet *decryptParamSet = NULL;
    int32_t res;
    do {
        struct HksParam encryptParam[] = {
            { HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS, },
            { HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES, },
            { HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256, },
            { HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_ENCRYPT, },
            { HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM, },
            { HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE, },
            { HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256, },
            { HKS_TAG_ASSOCIATED_DATA, .blob = { sizeof(gTestAad), gTestAad }},
            { HKS_TAG_NONCE, .blob = { sizeof(gTestNonce), gTestNonce }},
        };

        TEST_ASSERT_EQUAL(0, HksInitParamSet(&encryptParamSet));
        TEST_ASSERT_EQUAL(0, HksAddParams(encryptParamSet, encryptParam, HKS_ARRAY_SIZE(encryptParam)));
        TEST_ASSERT_EQUAL(0, HksBuildParamSet(&encryptParamSet));

        struct HksParam decryptParam[] = {
            { HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_ONLY_USED_IN_HUKS, },
            { HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES, },
            { HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256, },
            { HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_DECRYPT, },
            { HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM, },
            { HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE, },
            { HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256, },
            { HKS_TAG_ASSOCIATED_DATA, .blob = { sizeof(gTestAad), gTestAad }},
            { HKS_TAG_NONCE, .blob = { sizeof(gTestNonce), gTestNonce }},
        };

        TEST_ASSERT_EQUAL(0, HksInitParamSet(&decryptParamSet));
        TEST_ASSERT_EQUAL(0, HksAddParams(decryptParamSet, decryptParam, HKS_ARRAY_SIZE(decryptParam)));
        TEST_ASSERT_EQUAL(0, HksBuildParamSet(&decryptParamSet));

        res = TestAgreeKeyEncryptDecrypt(aliasAlice, encryptParamSet, aliasBob, decryptParamSet);
        if (res != HKS_SUCCESS) {
            LOGE("[HUKS]: EncryptDecrypt fail. [Res]: %d", res);
            break;
        }
    } while (0);

    HksFreeParamSet(&encryptParamSet);
    HksFreeParamSet(&decryptParamSet);
    return res;
}

static void TestEccAgreeThreeStage(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob)
{
    /* 1.generate two key pairs */
    TestEccGenerateKey(aliasAlice);
    TestEccGenerateKey(aliasBob);

    /* 2.export two pubkey */
    struct HksBlob x509PubKeyAlice = {
        .size = ECC_COMMON_SIZE,
        .data = malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyAlice.data);

    struct HksBlob x509PubKeyBob = {
        .size = ECC_COMMON_SIZE,
        .data = malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyBob.data);

    TestEccExportPubKey(aliasAlice, &x509PubKeyAlice);
    TestEccExportPubKey(aliasBob, &x509PubKeyBob);

    /* 3.agree shared key */
    struct HksBlob sharedKeyAlice = { ECC_COMMON_SIZE, malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(sharedKeyAlice.data);
    struct HksBlob sharedKeyBob = { ECC_COMMON_SIZE, malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(sharedKeyBob.data);

    TEST_ASSERT_EQUAL(0, AgreeSharedKey(aliasAlice, &x509PubKeyBob, &sharedKeyAlice));
    TEST_ASSERT_EQUAL(0, AgreeSharedKey(aliasBob, &x509PubKeyAlice, &sharedKeyBob));

    TEST_ASSERT_EQUAL(sharedKeyAlice.size, sharedKeyBob.size);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(sharedKeyAlice.data, sharedKeyBob.data, sharedKeyAlice.size);

    free(sharedKeyAlice.data);
    free(sharedKeyBob.data);
    free(x509PubKeyAlice.data);
    free(x509PubKeyBob.data);
}

static void TestEccImportKey(const struct HksBlob *alias, const struct HksBlob *key)
{
    struct HksParam paramImportKeyPersist[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_PERSISTENT },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
    };
    struct HksParamSet *paramSetImportKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetImportKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetImportKeyPersist,
        paramImportKeyPersist, HKS_ARRAY_SIZE(paramImportKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetImportKeyPersist));
    TEST_ASSERT_EQUAL(0, HksImportKey(alias, paramSetImportKeyPersist, key));
    HksFreeParamSet(&paramSetImportKeyPersist);
}

static void TestEccSignKey(const struct HksBlob *alias, struct HksBlob *signature)
{
    struct HksBlob msg = { sizeof(gTestPlainTextEcc), gTestPlainTextEcc };
    struct HksParam paramSignKeyPersist[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_PERSISTENT },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_SIGN },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    };
    struct HksParamSet *paramSetSignKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetSignKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetSignKeyPersist,
        paramSignKeyPersist, HKS_ARRAY_SIZE(paramSignKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetSignKeyPersist));

    TEST_ASSERT_EQUAL(0, HksSign(alias, paramSetSignKeyPersist, &msg, signature));
    LOGI("TestSignEd25519 signature size is %u", signature->size);
    HksFreeParamSet(&paramSetSignKeyPersist);
}

static void TestEccVerifyKey(const struct HksBlob *alias, const struct HksBlob *signature)
{
    struct HksBlob msg = { sizeof(gTestPlainTextEcc), gTestPlainTextEcc };
    struct HksParam paramVerifyKeyPersist[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_PERSISTENT },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_VERIFY },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    };
    struct HksParamSet *paramSetVerifyKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetVerifyKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetVerifyKeyPersist,
        paramVerifyKeyPersist, HKS_ARRAY_SIZE(paramVerifyKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetVerifyKeyPersist));

    TEST_ASSERT_EQUAL(0, HksVerify(alias, paramSetVerifyKeyPersist, &msg, signature));
    HksFreeParamSet(&paramSetVerifyKeyPersist);
}

LITE_TEST_CASE(HksEccTest, HksEccTest001, Level1)
{
    LOGI("begin HksEccTest001");
    struct HksBlob eccAliasAlice = { sizeof(gTestAliasEccAlice), gTestAliasEccAlice };
    struct HksBlob eccAliasBob = { sizeof(gTestAliasEccBob), gTestAliasEccBob };
    TestEccAgreeOneStage(&eccAliasAlice, &eccAliasBob);

    HksDeleteKey(&eccAliasAlice, NULL);
    HksDeleteKey(&eccAliasBob, NULL);
    LOGI("end HksEccTest001");
}

LITE_TEST_CASE(HksEccTest, HksEccTest002, Level1)
{
    LOGI("begin HksEccTest002");
    struct HksBlob eccAliasAlice = { sizeof(gTestAliasEccAlice), gTestAliasEccAlice };
    struct HksBlob eccAliasBob = { sizeof(gTestAliasEccBob), gTestAliasEccBob };
    TestEccAgreeThreeStage(&eccAliasAlice, &eccAliasBob);

    HksDeleteKey(&eccAliasAlice, NULL);
    HksDeleteKey(&eccAliasBob, NULL);
    LOGI("end HksEccTest001");
}

LITE_TEST_CASE(HksEccTest, HksEccTest003, Level1)
{
    LOGI("begin HksEccTest003");
    struct HksBlob eccAliasOrigin = { sizeof(gTestAliasEccOrigin), gTestAliasEccOrigin };
    TestEccGenerateKey(&eccAliasOrigin);

    struct HksBlob x509PubKeyOrigin = {
        .size = ECC_COMMON_SIZE,
        .data = malloc(ECC_COMMON_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyOrigin.data);
    TestEccExportPubKey(&eccAliasOrigin, &x509PubKeyOrigin);

    struct HksBlob eccAliasIn = {
        sizeof(gTestAliasEccOrigin),
        gTestAliasEccOrigin,
    };
    TEST_ASSERT_NOT_NULL(eccAliasIn.data);
    TestEccImportKey(&eccAliasIn, &x509PubKeyOrigin);

    HksDeleteKey(&eccAliasOrigin, NULL);
    HksDeleteKey(&eccAliasIn, NULL);
    free(x509PubKeyOrigin.data);
    LOGI("end HksEccTest003");
}


LITE_TEST_CASE(HksEccTest, HksEccTest004, Level1)
{
    LOGI("begin HksEccTest004");
    struct HksBlob eccAliasOrigin = { sizeof(gTestAliasEccOrigin), gTestAliasEccOrigin };

    struct HksParam paramGenerateKeyPersist[] = {
        { .tag = HKS_TAG_KEY_STORAGE_FLAG, .uint32Param = HKS_STORAGE_PERSISTENT },
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_SIGN | HKS_KEY_PURPOSE_VERIFY },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    };
    struct HksParamSet *paramSetGenerateKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetGenerateKeyPersist,
        paramGenerateKeyPersist, HKS_ARRAY_SIZE(paramGenerateKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(&eccAliasOrigin, paramSetGenerateKeyPersist, NULL));

    struct HksBlob signature = { .size = ECC_COMMON_SIZE, malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(signature.data);
    TestEccSignKey(&eccAliasOrigin, &signature);
    TestEccVerifyKey(&eccAliasOrigin, &signature);

    HksDeleteKey(&eccAliasOrigin, NULL);
    free(signature.data);
    LOGI("end HksEccTest004");
}

static int32_t InitParamSet(struct HksParamSet **paramSet, const struct HksParam *params, uint32_t paramcount)
{
    int32_t ret = HksInitParamSet(paramSet);
    if (ret != HKS_SUCCESS) {
        HKS_LOG_E("HksInitParamSet failed");
        return ret;
    }

    ret = HksAddParams(*paramSet, params, paramcount);
    if (ret != HKS_SUCCESS) {
        HksFreeParamSet(paramSet);
        HKS_LOG_E("HksAddParams failed");
        return ret;
    }

    ret = HksBuildParamSet(paramSet);
    if (ret != HKS_SUCCESS) {
        HksFreeParamSet(paramSet);
        HKS_LOG_E("HksBuildParamSet failed!");
        return ret;
    }

    return ret;
}

int32_t MallocAndCheckBlobData(struct HksBlob *blob, const uint32_t blobSize)
{
    blob->data = (uint8_t *)malloc(blobSize);
    if (blob->data == NULL) {
        HKS_LOG_E("could not alloc memory");
        return HKS_FAILURE;
    }
    return HKS_SUCCESS;
}

int32_t HksEcdhAgreeExport(const struct HksBlob *keyAlias1, const struct HksBlob *keyAlias2,
    struct HksBlob *publicKey1, struct HksBlob *publicKey2, const struct HksParamSet *genParamSet)
{
    int32_t ret = HksExportPublicKey(keyAlias1, genParamSet, publicKey1);
    if (ret != HKS_SUCCESS) {
        HKS_LOG_E("HksExportPublicKey fail %d", ret);
        return HKS_FAILURE;
    }
    ret = HksExportPublicKey(keyAlias2, genParamSet, publicKey2);
    if (ret != HKS_SUCCESS) {
        HKS_LOG_E("HksExportPublicKey fail %d", ret);
        return HKS_FAILURE;
    }
    return HKS_SUCCESS;
}

int32_t HksEcdhAgreeFinish(const struct HksBlob *keyAlias, const struct HksBlob *publicKey,
    const struct HksParamSet *initParamSet, const struct HksParamSet *finishParamSet, struct HksBlob *outData)
{
    struct HksBlob inData = {
        G_TEST_INN_DATA_LEN,
        gTestInData
    };

    uint8_t handleU[sizeof(uint64_t)] = {0};
    struct HksBlob handle = { sizeof(uint64_t), handleU };
    int32_t ret = HksInit(keyAlias, initParamSet, &handle, NULL);
    if (ret != HKS_SUCCESS) {
        return HKS_FAILURE;
    }

    struct HksBlob outDataUpdate = { ECC_COMMON_SIZE, malloc(ECC_COMMON_SIZE) };
    TEST_ASSERT_NOT_NULL(outDataUpdate.data);
    ret = HksUpdate(&handle, initParamSet, publicKey, &outDataUpdate);
    TEST_ASSERT_EQUAL(HKS_SUCCESS, ret);

    ret = HksFinish(&handle, finishParamSet, &inData, outData);
    TEST_ASSERT_EQUAL(HKS_SUCCESS, ret);

    free(outDataUpdate.data);
    return ret;
}

static int32_t TestAgreedKeyEncryptDecrypt(const struct HksBlob *keyAlias1, const struct HksParamSet *encryptParamSet,
    const struct HksBlob *keyAlias2, struct HksParamSet *decryptParamSet)
{
    uint8_t plainTest[] = "test_plain_test";
    struct HksBlob plaindata = { .size = sizeof(plainTest), .data = plainTest };
    const uint32_t cipherMaxSize = 1024;
    struct HksBlob cipherData = { .size = cipherMaxSize, .data = malloc(cipherMaxSize) };
    TEST_ASSERT_NOT_NULL(cipherData.data);

    int32_t ret = HksEncrypt(keyAlias1, encryptParamSet, &plaindata, &cipherData);
    TEST_ASSERT_EQUAL(HKS_SUCCESS, ret);

    struct HksBlob decrypedData = { .size = cipherMaxSize, .data = malloc(cipherMaxSize) };
    TEST_ASSERT_NOT_NULL(decrypedData.data);

    ret = HksDecrypt(keyAlias2, decryptParamSet, &cipherData, &decrypedData);
    TEST_ASSERT_EQUAL(HKS_SUCCESS, ret);

    TEST_ASSERT_EQUAL(decrypedData.size, plaindata.size);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(decrypedData.data, plaindata.data, plaindata.size);

    free(cipherData.data);
    free(decrypedData.data);
    return ret;
}

void TestAgreedKeyUse(const struct HksBlob *keyAlias1, const struct HksBlob *keyAlias2)
{
    struct HksParamSet *encryptParamSet = NULL;
    struct HksParamSet *decryptParamSet = NULL;
    enum {
        AGREE_TEST_AAD_SIZE = 16,
        AGREE_TEST_NONCE_SIZE = 12,
    };
    uint8_t AGREE_TEST_AAD[AGREE_TEST_AAD_SIZE] = "bababababababab";
    uint8_t AGREE_TEST_NONCE[AGREE_TEST_NONCE_SIZE] = "hahahahahah";
    struct HksParam g_agreedKeyEncrypt001[] = {
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_ENCRYPT },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
        { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
        { .tag = HKS_TAG_ASSOCIATED_DATA, .blob = { .size = AGREE_TEST_AAD_SIZE, .data = AGREE_TEST_AAD }},
        { .tag = HKS_TAG_NONCE, .blob = { .size = AGREE_TEST_NONCE_SIZE, .data = AGREE_TEST_NONCE }},
    };

    struct HksParam g_agreedKeyDecrypt001[] = {
        { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES },
        { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256 },
        { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_DECRYPT },
        { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
        { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
        { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
        { .tag = HKS_TAG_ASSOCIATED_DATA, .blob = { .size = AGREE_TEST_AAD_SIZE, .data = AGREE_TEST_AAD }},
        { .tag = HKS_TAG_NONCE, .blob = { .size = AGREE_TEST_NONCE_SIZE, .data = AGREE_TEST_NONCE }},
    };
    TEST_ASSERT_EQUAL(0,
        InitParamSet(&encryptParamSet, g_agreedKeyEncrypt001, HKS_ARRAY_SIZE(g_agreedKeyEncrypt001)));
    TEST_ASSERT_EQUAL(0,
        InitParamSet(&decryptParamSet, g_agreedKeyDecrypt001, HKS_ARRAY_SIZE(g_agreedKeyDecrypt001)));
    TEST_ASSERT_EQUAL(0, TestAgreedKeyEncryptDecrypt(keyAlias1, encryptParamSet, keyAlias2, decryptParamSet));

    HksFreeParamSet(&encryptParamSet);
    HksFreeParamSet(&decryptParamSet);
}

static uint8_t g_keyAliasData01002[] = "HksECDHAgreeKeyAliasTest002_1";
static uint8_t g_keyAliasData02002[] = "HksECDHAgreeKeyAliasTest002_2";
static uint8_t g_keyAliasFinalData1002[] = "HksECDHAgreeKeyAliasTest002_1_final";
static uint8_t g_keyAliasFinalData2002[] = "HksECDHAgreeKeyAliasTest002_2_final";

static const struct HksBlob g_keyAlias01002 = { sizeof(g_keyAliasData01002), g_keyAliasData01002 };
static const struct HksBlob g_keyAlias02002 = { sizeof(g_keyAliasData02002), g_keyAliasData02002 };
static const struct HksBlob g_keyAliasFinal1002 = { sizeof(g_keyAliasFinalData1002), g_keyAliasFinalData1002 };
static const struct HksBlob g_keyAliasFinal2002 = { sizeof(g_keyAliasFinalData2002), g_keyAliasFinalData2002 };

static const struct HksParam g_genParams002[] = {
    { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECC },
    { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
    { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
    { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_NONE },
    { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
};
static const struct HksParam g_agreeParamsInit[] = {
    { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_ECDH },
    { .tag = HKS_TAG_PURPOSE, .uint32Param = HKS_KEY_PURPOSE_AGREE },
    { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_ECC_KEY_SIZE_256 },
};
static const struct HksParam g_agreeParams01Finish002[] = {
    { .tag = HKS_TAG_KEY_ALIAS, .blob = { sizeof(g_keyAliasFinalData1002), g_keyAliasFinalData1002 }},
    { .tag = HKS_TAG_KEY_STORAGE_FLAG,  .uint32Param = HKS_STORAGE_PERSISTENT },
    { .tag = HKS_TAG_IS_KEY_ALIAS,  .boolParam = true },
    { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES },
    { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256 },
    { .tag = HKS_TAG_PURPOSE,  .uint32Param = HKS_KEY_PURPOSE_ENCRYPT | HKS_KEY_PURPOSE_DECRYPT },
    { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
    { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
};
static const struct HksParam g_agreeParams02Finish002[] = {
    { .tag = HKS_TAG_KEY_ALIAS, .blob = { sizeof(g_keyAliasFinalData2002), g_keyAliasFinalData2002 }},
    { .tag = HKS_TAG_KEY_STORAGE_FLAG,  .uint32Param = HKS_STORAGE_PERSISTENT },
    { .tag = HKS_TAG_IS_KEY_ALIAS,  .boolParam = true },
    { .tag = HKS_TAG_ALGORITHM, .uint32Param = HKS_ALG_AES },
    { .tag = HKS_TAG_KEY_SIZE, .uint32Param = HKS_AES_KEY_SIZE_256 },
    { .tag = HKS_TAG_PURPOSE,  .uint32Param = HKS_KEY_PURPOSE_ENCRYPT | HKS_KEY_PURPOSE_DECRYPT },
    { .tag = HKS_TAG_DIGEST, .uint32Param = HKS_DIGEST_SHA256 },
    { .tag = HKS_TAG_PADDING, .uint32Param = HKS_PADDING_NONE },
    { .tag = HKS_TAG_BLOCK_MODE, .uint32Param = HKS_MODE_GCM },
};

LITE_TEST_CASE(HksEccTest, HksEccTest005, Level1)
{
    LOGI("begin HksEccTest005");
    struct HksParamSet *genParamSet = NULL;
    struct HksParamSet *initParamSet = NULL;
    struct HksParamSet *finishParamSet01 = NULL;
    struct HksParamSet *finishParamSet02 = NULL;

    TEST_ASSERT_EQUAL(0, InitParamSet(&genParamSet, g_genParams002, HKS_ARRAY_SIZE(g_genParams002)));
    TEST_ASSERT_EQUAL(0, InitParamSet(&initParamSet, g_agreeParamsInit, HKS_ARRAY_SIZE(g_agreeParamsInit)));
    TEST_ASSERT_EQUAL(0,
        InitParamSet(&finishParamSet01, g_agreeParams01Finish002, HKS_ARRAY_SIZE(g_agreeParams01Finish002)));
    TEST_ASSERT_EQUAL(0,
        InitParamSet(&finishParamSet02, g_agreeParams02Finish002, HKS_ARRAY_SIZE(g_agreeParams02Finish002)));

    TEST_ASSERT_EQUAL(0, HksGenerateKey(&g_keyAlias01002, genParamSet, NULL));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(&g_keyAlias02002, genParamSet, NULL));

    struct HksBlob publicKey01 = { .size = HKS_ECC_KEY_SIZE_256, .data = NULL };
    struct HksBlob publicKey02 = { .size = HKS_ECC_KEY_SIZE_256, .data = NULL };

    TEST_ASSERT_EQUAL(0, MallocAndCheckBlobData(&publicKey01, publicKey01.size));
    TEST_ASSERT_EQUAL(0, MallocAndCheckBlobData(&publicKey02, publicKey02.size));
    TEST_ASSERT_EQUAL(0,
        HksEcdhAgreeExport(&g_keyAlias01002, &g_keyAlias02002, &publicKey01, &publicKey02, genParamSet));

    struct HksBlob outData01 = { .size = ECC_COMMON_SIZE, .data = NULL };
    struct HksBlob outData02 = { .size = ECC_COMMON_SIZE, .data = NULL };
    TEST_ASSERT_EQUAL(0, MallocAndCheckBlobData(&outData01, outData01.size));
    TEST_ASSERT_EQUAL(0, MallocAndCheckBlobData(&outData02, outData02.size));
    TEST_ASSERT_EQUAL(0,
        HksEcdhAgreeFinish(&g_keyAlias01002, &publicKey02, initParamSet, finishParamSet01, &outData01));
    TEST_ASSERT_EQUAL(0,
        HksEcdhAgreeFinish(&g_keyAlias02002, &publicKey01, initParamSet, finishParamSet02, &outData02));

    TestAgreedKeyUse(&g_keyAliasFinal1002, &g_keyAliasFinal2002);

    HksDeleteKey(&g_keyAlias01002, genParamSet);
    HksDeleteKey(&g_keyAlias02002, genParamSet);
    HksDeleteKey(&g_keyAliasFinal1002, NULL);
    HksDeleteKey(&g_keyAliasFinal2002, NULL);

    free(outData01.data);
    free(outData02.data);
    free(publicKey01.data);
    free(publicKey02.data);
    HksFreeParamSet(&genParamSet);
    HksFreeParamSet(&initParamSet);
    HksFreeParamSet(&finishParamSet01);
    HksFreeParamSet(&finishParamSet02);
    LOGI("end HksEccTest005");
}

RUN_TEST_SUITE(HksEccTest);
