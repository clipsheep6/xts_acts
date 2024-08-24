/*
 * Copyright (C) 2024 Huawei Technologies Co., Ltd.
 * Licensed under the Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *     http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR
 * PURPOSE.
 * See the Mulan PSL v2 for more details.
 */

#include <common_test.h>

using namespace testing::ext;
/**
 * @testcase.name      : CaseDigestSha256OnceOnce
 * @testcase.desc      : run case CaseDigestSha256OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha256OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha256OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha256OnceMulti
 * @testcase.desc      : run case CaseDigestSha256OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha256OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha256OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha256MultiOnce
 * @testcase.desc      : run case CaseDigestSha256MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha256MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha256MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha256MultiMulti
 * @testcase.desc      : run case CaseDigestSha256MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha256MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha256MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha384OnceOnce
 * @testcase.desc      : run case CaseDigestSha384OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha384OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha384OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha384OnceMulti
 * @testcase.desc      : run case CaseDigestSha384OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha384OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha384OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha384MultiOnce
 * @testcase.desc      : run case CaseDigestSha384MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha384MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha384MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha384MultiMulti
 * @testcase.desc      : run case CaseDigestSha384MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha384MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha384MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha512OnceOnce
 * @testcase.desc      : run case CaseDigestSha512OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha512OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha512OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha512OnceMulti
 * @testcase.desc      : run case CaseDigestSha512OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha512OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha512OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha512MultiOnce
 * @testcase.desc      : run case CaseDigestSha512MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha512MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha512MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDigestSha512MultiMulti
 * @testcase.desc      : run case CaseDigestSha512MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDigestSha512MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDigestSha512MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDREcdhNistP224DataSize14
 * @testcase.desc      : run case CaseDREcdhNistP224DataSize14
 * @testcase.expect    : return TEEC_SUCCESS
 */
#ifdef TEST_SUPPORT
TEE_TEST(CryptoTest, CaseDREcdhNistP224DataSize14, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP224DataSize14");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}
#endif
/**
 * @testcase.name      : CaseDREcdhNistP256DataSize128
 * @testcase.desc      : run case CaseDREcdhNistP256DataSize128
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDREcdhNistP256DataSize128, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP256DataSize128");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDREcdhNistP384DataSize512
 * @testcase.desc      : run case CaseDREcdhNistP384DataSize512
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDREcdhNistP384DataSize512, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP384DataSize512");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDREcdhNistP521DataSize1024
 * @testcase.desc      : run case CaseDREcdhNistP521DataSize1024
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDREcdhNistP521DataSize1024, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP521DataSize1024");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDREcdhNistP521DataSize4096
 * @testcase.desc      : run case CaseDREcdhNistP521DataSize4096
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDREcdhNistP521DataSize4096, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP521DataSize4096");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDREcdhNistP384DataSize10000
 * @testcase.desc      : run case CaseDREcdhNistP384DataSize10000
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDREcdhNistP384DataSize10000, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDREcdhNistP384DataSize10000");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDRDHKeySize512Pram512DataSize1024
 * @testcase.desc      : run case CaseDRDHKeySize512Pram512DataSize1024
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDRDHKeySize512Pram512DataSize1024, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDRDHKeySize512Pram512DataSize1024");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDRDHKeySize1024Pram1024DataSize1024
 * @testcase.desc      : run case CaseDRDHKeySize1024Pram1024DataSize1024
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDRDHKeySize1024Pram1024DataSize1024, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDRDHKeySize1024Pram1024DataSize1024");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

#ifdef TEST_SUPPORT
/**
 * @testcase.name      : CaseDRX25519DataSize1024
 * @testcase.desc      : run case CaseDRX25519DataSize1024
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDRX25519DataSize1024, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDRX25519DataSize1024");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseDRX25519DataSize4096
 * @testcase.desc      : run case CaseDRX25519DataSize4096
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseDRX25519DataSize4096, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseDRX25519DataSize4096");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesEcbNopadKeySize128OnceOnce
 * @testcase.desc      : run case CaseSymEncryptAesEcbNopadKeySize128OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesEcbNopadKeySize128OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesEcbNopadKeySize128OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesEcbNopadKeySize128OnceMulti
 * @testcase.desc      : run case CaseSymEncryptAesEcbNopadKeySize128OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesEcbNopadKeySize128OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesEcbNopadKeySize128OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesEcbNopadKeySize128MultiOnce
 * @testcase.desc      : run case CaseSymEncryptAesEcbNopadKeySize128MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesEcbNopadKeySize128MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesEcbNopadKeySize128MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesEcbNopadKeySize128MultiMulti
 * @testcase.desc      : run case CaseSymEncryptAesEcbNopadKeySize128MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesEcbNopadKeySize128MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesEcbNopadKeySize128MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}
#endif

/**
 * @testcase.name      : CaseSymEncryptAesCbcNopadKeySize192OnceOnce
 * @testcase.desc      : run case CaseSymEncryptAesCbcNopadKeySize192OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcNopadKeySize192OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcNopadKeySize192OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcNopadKeySize192OnceMulti
 * @testcase.desc      : run case CaseSymEncryptAesCbcNopadKeySize192OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcNopadKeySize192OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcNopadKeySize192OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcNopadKeySize192MultiOnce
 * @testcase.desc      : run case CaseSymEncryptAesCbcNopadKeySize192MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcNopadKeySize192MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcNopadKeySize192MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcNopadKeySize192MultiMulti
 * @testcase.desc      : run case CaseSymEncryptAesCbcNopadKeySize192MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcNopadKeySize192MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcNopadKeySize192MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCtrKeySize128OnceOnce
 * @testcase.desc      : run case CaseSymEncryptAesCtrKeySize128OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCtrKeySize128OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCtrKeySize128OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCtrKeySize128OnceMulti
 * @testcase.desc      : run case CaseSymEncryptAesCtrKeySize128OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCtrKeySize128OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCtrKeySize128OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCtrKeySize128MultiOnce
 * @testcase.desc      : run case CaseSymEncryptAesCtrKeySize128MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCtrKeySize128MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCtrKeySize128MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCtrKeySize128MultiMulti
 * @testcase.desc      : run case CaseSymEncryptAesCtrKeySize128MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCtrKeySize128MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCtrKeySize128MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesXtsKeySize256OnceOnce
 * @testcase.desc      : run case CaseSymEncryptAesXtsKeySize256OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesXtsKeySize256OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesXtsKeySize256OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesXtsKeySize256OnceMulti
 * @testcase.desc      : run case CaseSymEncryptAesXtsKeySize256OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesXtsKeySize256OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesXtsKeySize256OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesXtsKeySize256MultiOnce
 * @testcase.desc      : run case CaseSymEncryptAesXtsKeySize256MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesXtsKeySize256MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesXtsKeySize256MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesXtsKeySize256MultiMulti
 * @testcase.desc      : run case CaseSymEncryptAesXtsKeySize256MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesXtsKeySize256MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesXtsKeySize256MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcPkcs5KeySize256OnceOnce
 * @testcase.desc      : run case CaseSymEncryptAesCbcPkcs5KeySize256OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcPkcs5KeySize256OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcPkcs5KeySize256OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcPkcs5KeySize256OnceMulti
 * @testcase.desc      : run case CaseSymEncryptAesCbcPkcs5KeySize256OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcPkcs5KeySize256OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcPkcs5KeySize256OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcPkcs5KeySize256MultiOnce
 * @testcase.desc      : run case CaseSymEncryptAesCbcPkcs5KeySize256MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcPkcs5KeySize256MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcPkcs5KeySize256MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseSymEncryptAesCbcPkcs5KeySize256MultiMulti
 * @testcase.desc      : run case CaseSymEncryptAesCbcPkcs5KeySize256MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseSymEncryptAesCbcPkcs5KeySize256MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseSymEncryptAesCbcPkcs5KeySize256MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad32MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad32MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad32MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad32MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad32MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad32MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad32MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad32MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad32update0Multi
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad32update0Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad32update0Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad32update0Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad32OnceOnce
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad32OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad32OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad32OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad32OnceMulti
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad32OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad32OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad32OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T48Aad288MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK192N8T48Aad288MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T48Aad288MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T48Aad288MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T48Aad288MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK192N8T48Aad288MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T48Aad288MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T48Aad288MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T48Aad288OnceOnce
 * @testcase.desc      : run case CaseAEAesCcmK192N8T48Aad288OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T48Aad288OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T48Aad288OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T48Aad288OnceMulti
 * @testcase.desc      : run case CaseAEAesCcmK192N8T48Aad288OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T48Aad288OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T48Aad288OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N9T64Aad512MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK256N9T64Aad512MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N9T64Aad512MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N9T64Aad512MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N9T64Aad512MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK256N9T64Aad512MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N9T64Aad512MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N9T64Aad512MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N13T128Aad512OnceOnce
 * @testcase.desc      : run case CaseAEAesCcmK256N13T128Aad512OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N13T128Aad512OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N13T128Aad512OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N13T128Aad512OnceMulti
 * @testcase.desc      : run case CaseAEAesCcmK256N13T128Aad512OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N13T128Aad512OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N13T128Aad512OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N10T80Aad4MMultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK128N10T80Aad4MMultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N10T80Aad4MMultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N10T80Aad4MMultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N10T80Aad4MMultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK128N10T80Aad4MMultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N10T80Aad4MMultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N10T80Aad4MMultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N11T96Aad32MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK192N11T96Aad32MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N11T96Aad32MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N11T96Aad32MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N11T96Aad32MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK192N11T96Aad32MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N11T96Aad32MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N11T96Aad32MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N12T112Aad288MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK256N12T112Aad288MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N12T112Aad288MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N12T112Aad288MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N12T112Aad288MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK256N12T112Aad288MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N12T112Aad288MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N12T112Aad288MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N13T128Aad512MultiOnce
 * @testcase.desc      : run case CaseAEAesCcmK128N13T128Aad512MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N13T128Aad512MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N13T128Aad512MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N13T128Aad512MultiMulti
 * @testcase.desc      : run case CaseAEAesCcmK128N13T128Aad512MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N13T128Aad512MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N13T128Aad512MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK128N7T32Aad512EncryptOnlyTAG
 * @testcase.desc      : run case CaseAEAesCcmK128N7T32Aad512EncryptOnlyTAG
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK128N7T32Aad512EncryptOnlyTAG, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK128N7T32Aad512EncryptOnlyTAG");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T64NoAadOnce
 * @testcase.desc      : run case CaseAEAesCcmK192N8T64NoAadOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T64NoAadOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T64NoAadOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK192N8T64NoAadMulti
 * @testcase.desc      : run case CaseAEAesCcmK192N8T64NoAadMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK192N8T64NoAadMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK192N8T64NoAadMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesCcmK256N9T64Aad512DecryptOnlyTAG
 * @testcase.desc      : run case CaseAEAesCcmK256N9T64Aad512DecryptOnlyTAG
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesCcmK256N9T64Aad512DecryptOnlyTAG, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesCcmK256N9T64Aad512DecryptOnlyTAG");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T96Aad32MultiOnce
 * @testcase.desc      : run case CaseAEAesGcmK128N7T96Aad32MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T96Aad32MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T96Aad32MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T96Aad32MultiMulti
 * @testcase.desc      : run case CaseAEAesGcmK128N7T96Aad32MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T96Aad32MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T96Aad32MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T96Aad32update0Multi
 * @testcase.desc      : run case CaseAEAesGcmK128N7T96Aad32update0Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T96Aad32update0Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T96Aad32update0Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T96Aad32OnceOnce
 * @testcase.desc      : run case CaseAEAesGcmK128N7T96Aad32OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T96Aad32OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T96Aad32OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T96Aad32OnceMulti
 * @testcase.desc      : run case CaseAEAesGcmK128N7T96Aad32OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T96Aad32OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T96Aad32OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T104Aad288MultiOnce
 * @testcase.desc      : run case CaseAEAesGcmK192N12T104Aad288MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T104Aad288MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T104Aad288MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T104Aad288MultiMulti
 * @testcase.desc      : run case CaseAEAesGcmK192N12T104Aad288MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T104Aad288MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T104Aad288MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T104Aad288OnceOnce
 * @testcase.desc      : run case CaseAEAesGcmK192N12T104Aad288OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T104Aad288OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T104Aad288OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T104Aad288OnceMulti
 * @testcase.desc      : run case CaseAEAesGcmK192N12T104Aad288OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T104Aad288OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T104Aad288OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK256N7T112Aad512MultiOnce
 * @testcase.desc      : run case CaseAEAesGcmK256N7T112Aad512MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK256N7T112Aad512MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK256N7T112Aad512MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK256N7T112Aad512MultiMulti
 * @testcase.desc      : run case CaseAEAesGcmK256N7T112Aad512MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK256N7T112Aad512MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK256N7T112Aad512MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK256N7T128Aad512OnceOnce
 * @testcase.desc      : run case CaseAEAesGcmK256N7T128Aad512OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK256N7T128Aad512OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK256N7T128Aad512OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK256N7T128Aad512OnceMulti
 * @testcase.desc      : run case CaseAEAesGcmK256N7T128Aad512OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK256N7T128Aad512OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK256N7T128Aad512OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N12T120Aad4MMultiOnce
 * @testcase.desc      : run case CaseAEAesGcmK128N12T120Aad4MMultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N12T120Aad4MMultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N12T120Aad4MMultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N12T120Aad4MMultiMulti
 * @testcase.desc      : run case CaseAEAesGcmK128N12T120Aad4MMultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N12T120Aad4MMultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N12T120Aad4MMultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N7T128Aad32MultiOnce
 * @testcase.desc      : run case CaseAEAesGcmK192N7T128Aad32MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N7T128Aad32MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N7T128Aad32MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N7T128Aad32MultiMulti
 * @testcase.desc      : run case CaseAEAesGcmK192N7T128Aad32MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N7T128Aad32MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N7T128Aad32MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK256N7T112Aad512DecryptOnlyTAG
 * @testcase.desc      : run case CaseAEAesGcmK256N7T112Aad512DecryptOnlyTAG
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK256N7T112Aad512DecryptOnlyTAG, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK256N7T112Aad512DecryptOnlyTAG");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T96NoAadOnce
 * @testcase.desc      : run case CaseAEAesGcmK192N12T96NoAadOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T96NoAadOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T96NoAadOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK192N12T96NoAadMulti
 * @testcase.desc      : run case CaseAEAesGcmK192N12T96NoAadMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK192N12T96NoAadMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK192N12T96NoAadMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAEAesGcmK128N7T104Aad512EncryptOnlyTAG
 * @testcase.desc      : run case CaseAEAesGcmK128N7T104Aad512EncryptOnlyTAG
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAEAesGcmK128N7T104Aad512EncryptOnlyTAG, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAEAesGcmK128N7T104Aad512EncryptOnlyTAG");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize64OnceOnce
 * @testcase.desc      : run case CaseHmacSha256KeySize64OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize64OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize64OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize64OnceMulti
 * @testcase.desc      : run case CaseHmacSha256KeySize64OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize64OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize64OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize64MultiOnce
 * @testcase.desc      : run case CaseHmacSha256KeySize64MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize64MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize64MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize64MultiMulti
 * @testcase.desc      : run case CaseHmacSha256KeySize64MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize64MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize64MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha384KeySize1024OnceOnce
 * @testcase.desc      : run case CaseHmacSha384KeySize1024OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha384KeySize1024OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha384KeySize1024OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha384KeySize1024OnceMulti
 * @testcase.desc      : run case CaseHmacSha384KeySize1024OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha384KeySize1024OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha384KeySize1024OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha384KeySize1024MultiOnce
 * @testcase.desc      : run case CaseHmacSha384KeySize1024MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha384KeySize1024MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha384KeySize1024MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha384KeySize1024MultiMulti
 * @testcase.desc      : run case CaseHmacSha384KeySize1024MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha384KeySize1024MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha384KeySize1024MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha512KeySize256OnceOnce
 * @testcase.desc      : run case CaseHmacSha512KeySize256OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha512KeySize256OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha512KeySize256OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha512KeySize256OnceMulti
 * @testcase.desc      : run case CaseHmacSha512KeySize256OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha512KeySize256OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha512KeySize256OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha512KeySize256MultiOnce
 * @testcase.desc      : run case CaseHmacSha512KeySize256MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha512KeySize256MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha512KeySize256MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha512KeySize256MultiMulti
 * @testcase.desc      : run case CaseHmacSha512KeySize256MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha512KeySize256MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha512KeySize256MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize8192OnceOnce
 * @testcase.desc      : run case CaseHmacSha256KeySize8192OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize8192OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize8192OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize8192OnceMulti
 * @testcase.desc      : run case CaseHmacSha256KeySize8192OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize8192OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize8192OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize8192MultiOnce
 * @testcase.desc      : run case CaseHmacSha256KeySize8192MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize8192MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize8192MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseHmacSha256KeySize8192MultiMulti
 * @testcase.desc      : run case CaseHmacSha256KeySize8192MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseHmacSha256KeySize8192MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseHmacSha256KeySize8192MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize128OnceOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize128OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize128OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize128OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize128OnceMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize128OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize128OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize128OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize128MultiOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize128MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize128MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize128MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize128MultiMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize128MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize128MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize128MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize192OnceOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize192OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize192OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize192OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize192OnceMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize192OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize192OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize192OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize192MultiOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize192MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize192MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize192MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize192MultiMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize192MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize192MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize192MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize256OnceOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize256OnceOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize256OnceOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize256OnceOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize256OnceMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize256OnceMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize256OnceMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize256OnceMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize256MultiOnce
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize256MultiOnce
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize256MultiOnce, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize256MultiOnce");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseCmacAesCbcNopadKeySize256MultiMulti
 * @testcase.desc      : run case CaseCmacAesCbcNopadKeySize256MultiMulti
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseCmacAesCbcNopadKeySize256MultiMulti, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseCmacAesCbcNopadKeySize256MultiMulti");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

#ifdef TEST_SUPPORT
/**
 * @testcase.name      : CaseAsymEncryptRsaV15KeySize512Once
 * @testcase.desc      : run case CaseAsymEncryptRsaV15KeySize512Once
 * @testcase.expect    : return is not TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaV15KeySize512Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaV15KeySize512Once");
    ASSERT_NE(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaV15KeySize2048Once
 * @testcase.desc      : run case CaseAsymEncryptRsaV15KeySize2048Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaV15KeySize2048Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaV15KeySize2048Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaV15KeySize2048Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaV15KeySize2048Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaV15KeySize2048Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaV15KeySize2048Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaOaepSha384KeySize2048Once
 * @testcase.desc      : run case CaseAsymEncryptRsaOaepSha384KeySize2048Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaOaepSha384KeySize2048Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaOaepSha384KeySize2048Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaOaepSha384KeySize2048Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaOaepSha384KeySize2048Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaOaepSha384KeySize2048Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaOaepSha384KeySize2048Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}
#endif

/**
 * @testcase.name      : CaseAsymEncryptRsaV15KeySize4096Once
 * @testcase.desc      : run case CaseAsymEncryptRsaV15KeySize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaV15KeySize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaV15KeySize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaV15KeySize4096Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaV15KeySize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaV15KeySize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaV15KeySize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaOaepSha512KeySize4096Once
 * @testcase.desc      : run case CaseAsymEncryptRsaOaepSha512KeySize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaOaepSha512KeySize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaOaepSha512KeySize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaOaepSha512KeySize4096Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaOaepSha512KeySize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaOaepSha512KeySize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaOaepSha512KeySize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaNopadKeySize4096Once
 * @testcase.desc      : run case CaseAsymEncryptRsaNopadKeySize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaNopadKeySize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaNopadKeySize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaNopadKeySize4096Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaNopadKeySize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaNopadKeySize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaNopadKeySize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

#ifdef TEST_SUPPORT
/**
 * @testcase.name      : CaseAsymEncryptRsaNopadKeySize2688Once
 * @testcase.desc      : run case CaseAsymEncryptRsaNopadKeySize2688Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaNopadKeySize2688Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaNopadKeySize2688Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymEncryptRsaNopadKeySize2688Multi
 * @testcase.desc      : run case CaseAsymEncryptRsaNopadKeySize2688Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymEncryptRsaNopadKeySize2688Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymEncryptRsaNopadKeySize2688Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaV15Sha384KeySize2048Once
 * @testcase.desc      : run case CaseAsymSignRsaV15Sha384KeySize2048Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaV15Sha384KeySize2048Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaV15Sha384KeySize2048Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaV15Sha384KeySize2048Multi
 * @testcase.desc      : run case CaseAsymSignRsaV15Sha384KeySize2048Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaV15Sha384KeySize2048Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaV15Sha384KeySize2048Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaV15Sha512KeySize4096Once
 * @testcase.desc      : run case CaseAsymSignRsaV15Sha512KeySize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaV15Sha512KeySize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaV15Sha512KeySize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaV15Sha512KeySize4096Multi
 * @testcase.desc      : run case CaseAsymSignRsaV15Sha512KeySize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaV15Sha512KeySize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaV15Sha512KeySize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaPssSha384KeySize2048Once
 * @testcase.desc      : run case CaseAsymSignRsaPssSha384KeySize2048Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaPssSha384KeySize2048Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaPssSha384KeySize2048Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaPssSha384KeySize2048Multi
 * @testcase.desc      : run case CaseAsymSignRsaPssSha384KeySize2048Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaPssSha384KeySize2048Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaPssSha384KeySize2048Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}
#endif

/**
 * @testcase.name      : CaseAsymSignRsaPssSha512KeySize4096Once
 * @testcase.desc      : run case CaseAsymSignRsaPssSha512KeySize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaPssSha512KeySize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaPssSha512KeySize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignRsaPssSha512KeySize4096Multi
 * @testcase.desc      : run case CaseAsymSignRsaPssSha512KeySize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignRsaPssSha512KeySize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignRsaPssSha512KeySize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha256KeySize256Once
 * @testcase.desc      : run case CaseAsymSignEcdsaSha256KeySize256Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha256KeySize256Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha256KeySize256Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha256KeySize256Multi
 * @testcase.desc      : run case CaseAsymSignEcdsaSha256KeySize256Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha256KeySize256Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha256KeySize256Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha384KeySize384Once
 * @testcase.desc      : run case CaseAsymSignEcdsaSha384KeySize384Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha384KeySize384Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha384KeySize384Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha384KeySize384Multi
 * @testcase.desc      : run case CaseAsymSignEcdsaSha384KeySize384Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha384KeySize384Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha384KeySize384Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha512KeySize521Once
 * @testcase.desc      : run case CaseAsymSignEcdsaSha512KeySize521Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha512KeySize521Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha512KeySize521Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEcdsaSha512KeySize521Multi
 * @testcase.desc      : run case CaseAsymSignEcdsaSha512KeySize521Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEcdsaSha512KeySize521Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEcdsaSha512KeySize521Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize64Once
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize64Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize64Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize64Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize64Multi
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize64Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize64Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize64Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize470Once
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize470Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize470Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize470Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize470Multi
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize470Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize470Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize470Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize1270Once
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize1270Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize1270Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize1270Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize1270Multi
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize1270Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize1270Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize1270Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize4096Once
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize4096Once
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize4096Once, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize4096Once");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}

/**
 * @testcase.name      : CaseAsymSignEd25519DataSize4096Multi
 * @testcase.desc      : run case CaseAsymSignEd25519DataSize4096Multi
 * @testcase.expect    : return TEEC_SUCCESS
 */
TEE_TEST(CryptoTest, CaseAsymSignEd25519DataSize4096Multi, Function | MediumTest | Level0)
{
    TEEC_Result ret = InvokeTest("CaseAsymSignEd25519DataSize4096Multi");
    ASSERT_EQ(ret, TEEC_SUCCESS);
}
