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

#include <gtest/gtest.h>

#include "hks_derive_test.h"

#include "hks_api.h"
#include "hks_param.h"
#include "hks_test_api_performance.h"
#include "hks_test_common.h"
#include "hks_test_log.h"

using namespace testing::ext;
namespace {
class HksDeriveTest : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

void HksDeriveTest::SetUpTestCase(void)
{
}

void HksDeriveTest::TearDownTestCase(void)
{
}

void HksDeriveTest::SetUp()
{
    EXPECT_EQ(HksInitialize(), 0);
}

void HksDeriveTest::TearDown()
{
}

const int DEFAULT_DERIVE_SIZE = 32;
const int DEFAULT_INFO_SIZE = 55;
const int DEFAULT_SALT_SIZE = 16;

const struct HksTestDeriveParams g_testDeriveParams[] = {
    /* hkdf-sha256-salt-info */
    { 0, HKS_SUCCESS, { true, DEFAULT_KEY_ALIAS_SIZE, true, DEFAULT_KEY_ALIAS_SIZE },
        {
            true, /* genKey params */
            true, HKS_ALG_AES,
            true, HKS_AES_KEY_SIZE_256,
            true, HKS_KEY_PURPOSE_DERIVE,
            true, HKS_DIGEST_SHA256,
            false, 0,
            false, 0,
            false, 0 },
        { 0 },
        {
            true, /* derive params */
            true, HKS_ALG_HKDF,
            true, HKS_KEY_PURPOSE_DERIVE,
            true, HKS_DIGEST_SHA256,
            false, 0,
            true, DEFAULT_SALT_SIZE,
            true, DEFAULT_INFO_SIZE,
            false, true },
        {
            true, DEFAULT_DERIVE_SIZE, true, DEFAULT_DERIVE_SIZE },
        {
            false, 0, false, 0 }
    },

    /* local: hkdf-sha256-salt-info */
    { 1, HKS_SUCCESS, { true, DEFAULT_KEY_ALIAS_SIZE, true, DEFAULT_KEY_ALIAS_SIZE },
        {
            true, /* genKey params */
            true, HKS_ALG_AES,
            true, HKS_AES_KEY_SIZE_256,
            true, HKS_KEY_PURPOSE_DERIVE,
            true, HKS_DIGEST_SHA256,
            false, 0,
            false, 0,
            true, HKS_STORAGE_TEMP },
        { 0 },
        {
            true, /* derive params */
            true, HKS_ALG_HKDF,
            true, HKS_KEY_PURPOSE_DERIVE,
            true, HKS_DIGEST_SHA256,
            false, 0,
            true, DEFAULT_SALT_SIZE,
            true, DEFAULT_INFO_SIZE,
            true, false },
        {
            true, DEFAULT_DERIVE_SIZE, true, DEFAULT_DERIVE_SIZE },
        {
            true, DEFAULT_LOCAL_KEY_SIZE, true, DEFAULT_LOCAL_KEY_SIZE }
    },
};

static int32_t DeriveKey(const struct HksTestDeriveParamSet *deriveParamSetParams, const struct HksBlob *masterKey,
    struct HksBlob *derivedKey, struct HksBlob **saltData, struct HksBlob **infoData)
{
    struct HksParamSet *deriveParamSet = NULL;
    uint32_t saltSize = deriveParamSetParams->saltSize;
    uint32_t infoSize = deriveParamSetParams->infoSize;
    if (saltSize != 0) {
        EXPECT_EQ(0, TestConstuctBlob(saltData, true, saltSize, true, saltSize));
    }
    if (infoSize != 0) {
        EXPECT_EQ(0, TestConstuctBlob(infoData, true, infoSize, true, infoSize));
    }
    struct TestDeriveParamSetStructure paramStruct = {
        &deriveParamSet,
        deriveParamSetParams->paramSetExist,
        deriveParamSetParams->setAlg, deriveParamSetParams->alg,
        deriveParamSetParams->setPurpose, deriveParamSetParams->purpose,
        deriveParamSetParams->setDigest, deriveParamSetParams->digest,
        deriveParamSetParams->setIteration, deriveParamSetParams->iteration,
        deriveParamSetParams->setSalt, *saltData,
        deriveParamSetParams->setInfo, *infoData,
        deriveParamSetParams->setIsKeyAlias, deriveParamSetParams->isKeyAlias
    };
    int32_t ret = TestConstructDeriveParamSet(&paramStruct);
    EXPECT_EQ(0, ret);

    ret = HksDeriveKeyRun(deriveParamSet, masterKey, derivedKey, 1);
    HksFreeParamSet(&deriveParamSet);
    return ret;
}

static int32_t BaseTestDerive(uint32_t index)
{
    /* 1. generate key */
    struct HksBlob *keyAlias = NULL;
    int32_t ret;
    if (g_testDeriveParams[index].genKeyParamSetParams.setKeyStorageFlag &&
        (g_testDeriveParams[index].genKeyParamSetParams.keyStorageFlag == HKS_STORAGE_TEMP)) {
        ret = GenerateLocalRandomKey(&keyAlias, &g_testDeriveParams[index].localKeyParams);
    } else {
        if (g_testDeriveParams[index].keyAliasParams.blobExist) {
            ret = HuksGenerateKey(&keyAlias, &g_testDeriveParams[index].keyAliasParams,
                &g_testDeriveParams[index].genKeyParamSetParams, NULL);
        } else {
            ret = TestConstuctBlob(&keyAlias,
                g_testDeriveParams[index].masterKeyParams.blobExist,
                g_testDeriveParams[index].masterKeyParams.blobSize,
                g_testDeriveParams[index].masterKeyParams.blobDataExist,
                g_testDeriveParams[index].masterKeyParams.blobDataSize);
        }
    }
    EXPECT_EQ(0, ret);

    /* 2. derive */
    struct HksBlob *derivedKey = NULL;
    ret = TestConstuctBlob(&derivedKey,
        g_testDeriveParams[index].derivedKeyParams.blobExist,
        g_testDeriveParams[index].derivedKeyParams.blobSize,
        g_testDeriveParams[index].derivedKeyParams.blobDataExist,
        g_testDeriveParams[index].derivedKeyParams.blobDataSize);
    EXPECT_EQ(0, ret);

    struct HksBlob *saltData = NULL;
    struct HksBlob *infoData = NULL;
    ret = DeriveKey(&g_testDeriveParams[index].deriveParamSetParams, keyAlias, derivedKey, &saltData, &infoData);
    if (ret != g_testDeriveParams[index].expectResult) {
        HKS_TEST_LOG_I("failed, ret[%u] = %d", g_testDeriveParams[index].testId, ret);
    }
    EXPECT_EQ(g_testDeriveParams[index].expectResult, ret);

    /* 3. delete key */
    if (!(g_testDeriveParams[index].genKeyParamSetParams.setKeyStorageFlag &&
        (g_testDeriveParams[index].genKeyParamSetParams.keyStorageFlag == HKS_STORAGE_TEMP)) &&
        (g_testDeriveParams[index].keyAliasParams.blobExist)) {
        EXPECT_EQ(0, HksDeleteKey(keyAlias, NULL));
    }
    TestFreeBlob(&keyAlias);
    TestFreeBlob(&derivedKey);
    TestFreeBlob(&saltData);
    TestFreeBlob(&infoData);

    return ret;
}

#ifndef _CUT_AUTHENTICATE_
/**
 * @tc.name: HksDeriveTest.HksDeriveTest001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
HWTEST_F(HksDeriveTest, HksDeriveTest001, TestSize.Level1)
{
    int32_t ret = BaseTestDerive(0);
    ASSERT_TRUE(ret == 0);
}
#endif /* _CUT_AUTHENTICATE_ */

/**
 * @tc.name: HksDeriveTest.HksDeriveTest002
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
HWTEST_F(HksDeriveTest, HksDeriveTest002, TestSize.Level1)
{
    int32_t ret = BaseTestDerive(1);
    ASSERT_TRUE(ret == 0);
}
}