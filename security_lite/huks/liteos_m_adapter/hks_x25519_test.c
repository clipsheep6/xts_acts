#include "hctest.h"

#include "hks_api.h"
#include "hks_client_service_adapter.h"
#include "hks_param.h"
#include "hks_type.h"
#include "securec.h"
#include "string.h"

#define TEST_ALIAS_X25519_ALICE "test_x25519_alice"
#define TEST_ALIAS_X25519_BOB "test_x25519_bob"

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
    LiteTestPrint("HksInitialize Begin!");
    TEST_ASSERT_EQUAL(HKS_SUCCESS, HksInitialize());
    LiteTestPrint("HksInitialize End!");
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

RUN_TEST_SUITE(HksX25519Test);
