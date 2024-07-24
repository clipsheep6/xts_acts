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

#include "hks_api.h"
#include "hks_client_service_adapter.h"
#include "hks_param.h"
#include "hks_type.h"
#include "securec.h"
#include "string.h"

#define TEST_ALIAS_X25519_ALICE "test_x25519_alice"
#define TEST_ALIAS_X25519_BOB "test_x25519_bob"
#define TEST_ALIAS_X25519_ORIGIN "test_x25519_origin"

enum {
    X509_PUBLIC_KEY_SIZE = 1024,
};

/*
 * @tc.register: register a test suit named "HksX25519Test"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: HksX25519Test test suit name
 */
LITE_TEST_SUIT(security, securityData, HksX25519Test);

/**
 * @tc.setup: define a setup for test suit, format:"HksX25519Test + SetUp"
 * @return: true——setup success
 */
static BOOL HksX25519TestSetUp()
{
    HKS_TEST_LOG_I("HksInitialize Begin!");
    TEST_ASSERT_EQUAL(HKS_SUCCESS, HksInitialize());
    HKS_TEST_LOG_I("HksInitialize End!");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"HksX25519Test + TearDown"
 * @return: true——teardown success
 */
static BOOL HksX25519TestTearDown()
{
    return TRUE;
}

static void TestX25519AgreeGenerateKey(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob)
{
    struct HksParam paramGenerateKeyPersist[] = {
        {
            .tag = HKS_TAG_KEY_STORAGE_FLAG,
            .uint32Param = HKS_STORAGE_PERSISTENT,
        }, {
            .tag = HKS_TAG_ALGORITHM,
            .uint32Param = HKS_ALG_X25519,
        }, {
            .tag = HKS_TAG_KEY_SIZE,
            .uint32Param = HKS_CURVE25519_KEY_SIZE_256,
        }, {
            .tag = HKS_TAG_PURPOSE,
            .uint32Param = HKS_KEY_PURPOSE_AGREE,
        },
    };
    struct HksParamSet *paramSetGenerateKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetGenerateKeyPersist,
        paramGenerateKeyPersist, HKS_ARRAY_SIZE(paramGenerateKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(aliasAlice, paramSetGenerateKeyPersist, NULL));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(aliasBob, paramSetGenerateKeyPersist, NULL));
    HksFreeParamSet(&paramSetGenerateKeyPersist);
}

static void TestX25519AgreeExportX509PubKey(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob,
    struct HksBlob *x509Alice, struct HksBlob *x509Bob)
{
    struct HksPubKeyInfo publicKeyInfo = {
        .keyAlg = HKS_ALG_X25519,
        .keySize = HKS_CURVE25519_KEY_SIZE_256,
        .nOrXSize = HKS_CURVE25519_KEY_SIZE_256 / HKS_BITS_PER_BYTE,
        .eOrYSize = HKS_CURVE25519_KEY_SIZE_256 / HKS_BITS_PER_BYTE,
        .placeHolder = 0,
    };

    struct HksBlob hksPubKeyAlice = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(hksPubKeyAlice.data);
    TEST_ASSERT_EQUAL(0, memcpy_s(hksPubKeyAlice.data, hksPubKeyAlice.size, &publicKeyInfo, sizeof(publicKeyInfo)));

    struct HksBlob rawPubKeyAlice = {
        .size = hksPubKeyAlice.size - sizeof(publicKeyInfo),
        .data = hksPubKeyAlice.data + sizeof(publicKeyInfo),
    };
    TEST_ASSERT_EQUAL(0, HksExportPublicKey(aliasAlice, NULL, &rawPubKeyAlice));
    TEST_ASSERT_EQUAL(0, TranslateToX509PublicKey(&hksPubKeyAlice, x509Alice));

    struct HksBlob HksPubKeyBob = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(HksPubKeyBob.data);
    TEST_ASSERT_EQUAL(0, memcpy_s(HksPubKeyBob.data, HksPubKeyBob.size, &publicKeyInfo, sizeof(publicKeyInfo)));

    struct HksBlob rawPubKeyBob = {
        .size = HksPubKeyBob.size - sizeof(publicKeyInfo),
        .data = HksPubKeyBob.data + sizeof(publicKeyInfo),
    };
    TEST_ASSERT_EQUAL(0, HksExportPublicKey(aliasBob, NULL, &rawPubKeyBob));
    TEST_ASSERT_EQUAL(0, TranslateToX509PublicKey(&HksPubKeyBob, x509Bob));

    free(hksPubKeyAlice.data);
    free(HksPubKeyBob.data);
}

static void TestX25519Agree(const struct HksBlob *aliasAlice, const struct HksBlob *aliasBob)
{
    TestX25519AgreeGenerateKey(aliasAlice, aliasBob);

    struct HksBlob x509PubKeyAlice = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyAlice.data);

    struct HksBlob x509PubKeyBob = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyBob.data);

    TestX25519AgreeExportX509PubKey(aliasAlice, aliasBob, &x509PubKeyAlice, &x509PubKeyBob);

    struct HksParam paramAgree[] = {
        {
            .tag = HKS_TAG_AGREE_ALG,
            .uint32Param = HKS_ALG_X25519,
        }, {
            .tag = HKS_TAG_KEY_SIZE,
            .uint32Param = HKS_CURVE25519_KEY_SIZE_256,
        }, {
            .tag = HKS_TAG_ALGORITHM,
            .uint32Param = HKS_ALG_X25519,
        },
    };
    struct HksParamSet *paramSetAgree = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetAgree));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetAgree, paramAgree, HKS_ARRAY_SIZE(paramAgree)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetAgree));

    struct HksBlob agreedKeyAlice = {
        .size = HKS_KEY_BYTES(HKS_CURVE25519_KEY_SIZE_256),
        .data = malloc(HKS_KEY_BYTES(HKS_CURVE25519_KEY_SIZE_256)),
    };
    TEST_ASSERT_NOT_NULL(agreedKeyAlice.data);
    TEST_ASSERT_EQUAL(0, HksAgreeKey(paramSetAgree, aliasAlice, &x509PubKeyBob, &agreedKeyAlice));

    struct HksBlob agreedKeyBob = {
        .size = HKS_KEY_BYTES(HKS_CURVE25519_KEY_SIZE_256),
        .data = malloc(HKS_KEY_BYTES(HKS_CURVE25519_KEY_SIZE_256)),
    };
    TEST_ASSERT_NOT_NULL(agreedKeyBob.data);
    TEST_ASSERT_EQUAL(0, HksAgreeKey(paramSetAgree, aliasBob, &x509PubKeyAlice, &agreedKeyBob));

    TEST_ASSERT_EQUAL(agreedKeyAlice.size, agreedKeyBob.size);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(agreedKeyAlice.data, agreedKeyBob.data, agreedKeyAlice.size);
    free(agreedKeyAlice.data);
    free(agreedKeyBob.data);
    HksFreeParamSet(&paramSetAgree);
}

static void TestX25519GenerateKey(const struct HksBlob *alias)
{
    struct HksParam paramGenerateKeyPersist[] = {
        {
            .tag = HKS_TAG_KEY_STORAGE_FLAG,
            .uint32Param = HKS_STORAGE_PERSISTENT,
        }, {
            .tag = HKS_TAG_ALGORITHM,
            .uint32Param = HKS_ALG_X25519,
        }, {
            .tag = HKS_TAG_KEY_SIZE,
            .uint32Param = HKS_CURVE25519_KEY_SIZE_256,
        }, {
            .tag = HKS_TAG_PURPOSE,
            .uint32Param = HKS_KEY_PURPOSE_AGREE,
        },
    };
    struct HksParamSet *paramSetGenerateKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetGenerateKeyPersist,
        paramGenerateKeyPersist, HKS_ARRAY_SIZE(paramGenerateKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetGenerateKeyPersist));
    TEST_ASSERT_EQUAL(0, HksGenerateKey(alias, paramSetGenerateKeyPersist, NULL));
    HksFreeParamSet(&paramSetGenerateKeyPersist);
}

static void TestX25519ExportPubKey(const struct HksBlob *alias, struct HksBlob *x509alias)
{
    struct HksPubKeyInfo publicKeyInfo = {
        .keyAlg = HKS_ALG_X25519,
        .keySize = HKS_CURVE25519_KEY_SIZE_256,
        .nOrXSize = HKS_CURVE25519_KEY_SIZE_256 / HKS_BITS_PER_BYTE,
        .eOrYSize = HKS_CURVE25519_KEY_SIZE_256 / HKS_BITS_PER_BYTE,
        .placeHolder = 0,
    };

    struct HksBlob hksPubKey = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(hksPubKey.data);
    TEST_ASSERT_EQUAL(0, memcpy_s(hksPubKey.data, hksPubKey.size, &publicKeyInfo, sizeof(publicKeyInfo)));

    struct HksBlob rawPubKey = {
        .size = hksPubKey.size - sizeof(publicKeyInfo),
        .data = hksPubKey.data + sizeof(publicKeyInfo),
    };
    TEST_ASSERT_EQUAL(0, HksExportPublicKey(alias, NULL, &rawPubKey));
    TEST_ASSERT_EQUAL(0, TranslateToX509PublicKey(&hksPubKey, x509alias));

    free(hksPubKey.data);
}

static void TestX25519ImportKey(const struct HksBlob *alias, const struct HksBlob *key)
{
    struct HksParam paramImportKeyPersist[] = {
        {
            .tag = HKS_TAG_KEY_STORAGE_FLAG,
            .uint32Param = HKS_STORAGE_PERSISTENT,
        }, {
            .tag = HKS_TAG_ALGORITHM,
            .uint32Param = HKS_ALG_X25519,
        }, {
            .tag = HKS_TAG_KEY_SIZE,
            .uint32Param = HKS_CURVE25519_KEY_SIZE_256,
        }, {
            .tag = HKS_TAG_PURPOSE,
            .uint32Param = HKS_KEY_PURPOSE_AGREE,
        },
    };
    struct HksParamSet *paramSetImportKeyPersist = NULL;
    TEST_ASSERT_EQUAL(0, HksInitParamSet(&paramSetImportKeyPersist));
    TEST_ASSERT_EQUAL(0, HksAddParams(paramSetImportKeyPersist,
        paramImportKeyPersist, HKS_ARRAY_SIZE(paramImportKeyPersist)));
    TEST_ASSERT_EQUAL(0, HksBuildParamSet(&paramSetImportKeyPersist));
    TEST_ASSERT_EQUAL(0, HksImportKey(alias, paramSetImportKeyPersist, key));
    HksFreeParamSet(&paramSetImportKeyPersist);
}

/**
 * @tc.name: HksX25519Test.HksX25519Test001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksX25519Test, HksX25519Test001, Level1)
{
    struct HksBlob x25519AliasAlice = { strlen(TEST_ALIAS_X25519_ALICE), (uint8_t *)TEST_ALIAS_X25519_ALICE };
    struct HksBlob x25519AliasBob = { strlen(TEST_ALIAS_X25519_BOB), (uint8_t *)TEST_ALIAS_X25519_BOB };
    TestX25519Agree(&x25519AliasAlice, &x25519AliasBob);
}

/**
 * @tc.name: HksX25519Test.HksX25519Test002
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksX25519Test, HksX25519Test002, Level1)
{
    struct HksBlob x25519AliasOrigin = { strlen(TEST_ALIAS_X25519_ORIGIN), (uint8_t *)TEST_ALIAS_X25519_ORIGIN };
    TestX25519GenerateKey(&x25519AliasOrigin);

    struct HksBlob x509PubKeyOrigin = {
        .size = X509_PUBLIC_KEY_SIZE,
        .data = malloc(X509_PUBLIC_KEY_SIZE),
    };
    TEST_ASSERT_NOT_NULL(x509PubKeyOrigin.data);
    TestX25519ExportPubKey(&x25519AliasOrigin, &x509PubKeyOrigin);

    struct HksBlob x25519AliasIn = { strlen(TEST_ALIAS_X25519_ORIGIN), (uint8_t *)TEST_ALIAS_X25519_ORIGIN };
    TestX25519ImportKey(&x25519AliasIn, &x509PubKeyOrigin);
    free(x509PubKeyOrigin.data);
}

RUN_TEST_SUITE(HksX25519Test);
