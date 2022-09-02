/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include "hc_log.h"
extern "C" {
#include "device_auth_func.h"
}


using namespace testing::ext;
using namespace std;
namespace {

const char *g_groupId;
// 获取公钥参数
const char *g_version = "1.0.0";
const char *g_deviceId = "123456789";
// 创建同/跨账号群组参数
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
const char *g_userId2 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
static int32_t g_osAccountId1 = 100;
// static int32_t g_osAccountId2 = 101;
static int32_t g_requestId = 10;
const char *g_appName = "TestApp";

const char *g_queryCroParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
const char *g_queryParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";

// 对称凭据
// 跨账号
const char *g_symmInfo1 = "{\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"10F9F0576E61730193D2052B7F771887124A68F1607EFCF7796C1491F834CD92\"}}";
const char *g_symmInfo2 = "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}";
// 跨账号
const char *g_symmCroInfo1 = "{\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"10F9F0576E61730193D2052B7F771887124A68F1607EFCF7796C1491F834CD92\"}}";
const char *g_symmCroInfo2 = "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}";

// 非对称凭据
const char *g_asymCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200041971364D21CB"
"6EC3BB4EBCD67603A2230FF1AAE7545ED2080DD38E14B106DC40F45E37E71B1128D54396D899F7C2ADC277476FF6738CED2725085FDB256958EB\","
"\"pkInfoSignature\":\"3046022100AF98D6A5812B8A5C14C3BD6B3642F22941F2E0BCE50CAE249ADDA5FCE702A033022100FA70C5795AB944F6"
"DB1FCAA860ACC4B1876D0C01D2DDFDC08ACBB2467434F072\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D0"
"301070342000470C804C2D1D805CD063E5C2AC62D0AAFE65DC6F2E2771A7B18CCC5631EC238333666F211DBDE62139FC38CB1D5AD8738AAD9426E3B"
"8009BF87A51FD2216A5E7A\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
"616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
"\"pkInfoSignature\":\"3046022100DAC381E355560D2AA13017C7D01D5637F5EED24A1861841AB3CB8EC727AC17FF022100E0B37CD275421B70C"
"7D81B3C91C34614EFB0A6ADBC04A664B628F282B2A3BE8A\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
"D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
"2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
"]}";
const char *g_AsymCroCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
"\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B011"
"6C81F534389A1F7F504F616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
"\"pkInfoSignature\":\"3046022100CF3E24AFFD44BBEC689CA2834E08E7D8C04090780B3C0A4D6FB6A3A1885550BA022100B0D239737D8036938"
"97B7D7F3BC8A59FB27E868176F268AC9D1C3A8C658217C3\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D03"
"010703420004129EB615B423DE45874CFC10F9536AD8336A4315AA20C6099FA113627A95358E1F134931CC38327F80E568F2912E3D3E3EB489D6C54"
"3682D5E26BF2283307E3D\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
"\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
"616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
"\"pkInfoSignature\":\"304602210088637776231DFD866A9898EC25C990C437EE10159BE3CC747F40BB0D459C2D93022100B73B53DC0F8285E20"
"36FD962E4589B2BC2F81FF25C7FAE87A3E299CD0B3E8ACF\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
"D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
"2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
"]}";
const char *g_MixNumCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D030107034200041971364D21CB"
"6EC3BB4EBCD67603A2230FF1AAE7545ED2080DD38E14B106DC40F45E37E71B1128D54396D899F7C2ADC277476FF6738CED2725085FDB256958EB\","
"\"pkInfoSignature\":\"3046022100AF98D6A5812B8A5C14C3BD6B3642F22941F2E0BCE50CAE249ADDA5FCE702A033022100FA70C5795AB944F6"
"DB1FCAA860ACC4B1876D0C01D2DDFDC08ACBB2467434F072\",\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D0"
"301070342000470C804C2D1D805CD063E5C2AC62D0AAFE65DC6F2E2771A7B18CCC5631EC238333666F211DBDE62139FC38CB1D5AD8738AAD9426E3B"
"8009BF87A51FD2216A5E7A\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004FD065BECA2B0116C81F534389A1F7F504F"
"616C3ECDFF83AE36A6A509F07B470B72440B5213FCF8EA461547150B2DB5C7BBFBE581B1D5A734939782C7A07567EE\","
"\"pkInfoSignature\":\"3046022100DAC381E355560D2AA13017C7D01D5637F5EED24A1861841AB3CB8EC727AC17FF022100E0B37CD275421B70C"
"7D81B3C91C34614EFB0A6ADBC04A664B628F282B2A3BE8A\",\"credentialType\":2,\"pkInfo\":{\"devicePk\":\"3059301306072A8648CE3"
"D020106082A8648CE3D03010703420004E0B675367CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F"
"2990EE24056FA1E00070FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}}}"
"]}";
const char *g_symmErrorCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
"]}";
const char *g_AsymErrorCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"TmpServerSignedInfo\":{\"serverPk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004638BCF778DEE"
"24111AB15D2D4DC6A5194B781193E1855BFF681528C985539D489A5BE709120C949D8C6750D42F3A34D98DB329701D3D2A84EF64B0B7F2FAC18E\","
"\"pkInfoSignature\":\"3045022100B6B308521E75B38CADC9F74E9D0A40FE382C71DB6939E8918202C09D8757AFB3022045D2BC8E9B8D27423C80E96"
"E474A1B0F0F172EFDD70CA0C5760338C902DC0837\"},\"credentialType\":1}}"
"]}";
const char *g_AsymErrorPKCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
"]}";
const char *g_symmLocalCred = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
"]}";
const char *g_symmMax = "{\"udid\":\"devB\",\"deviceList\":["
"{\"udid\":\"devB\",\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":2,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}},"
"{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}"
"]}";
// 批量导入参数
const int g_accountType = 1;
const int g_croAccountType = 1282;


class AccountMultiProcess : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - Account groupmanage */
void AccountMultiProcess::SetUpTestCase() {
}

void AccountMultiProcess::TearDownTestCase() {
}

void AccountMultiProcess::SetUp() {
    InitEnv();
    DeleteDatabase();
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId1);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId1, pkInfoStr);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
}

void AccountMultiProcess::TearDown() {
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
}

/**
* @tc.name      批量导入并批量删除同账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0501
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0501, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0501");
    //批量导入对称凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 1, true);
}

/**
* @tc.name      批量导入同账号非对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0502
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0502, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0502");
    //批量导入对称凭据
    const char *createAsymmInfo = CreateImportData(g_asymCred, g_groupId, g_accountType);
    int *ret = addMultiMembersTest(g_osAccountId1, g_appName, createAsymmInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 1, true);
}

/**
* @tc.name      批量导入并批量删除跨账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0503
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0503, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0503");
    // 创建跨账号群组
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId1, g_userId2);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 批量导入对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroParams);
    g_groupId = GetGroupIdfromData(groupInfo);

    const char *createSymmCroInfo = CreateSymmInfo(g_symmCroInfo1, g_symmCroInfo2, g_groupId, g_croAccountType);
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmCroInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
    // 删除跨账号群组
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    sleep(5);
    deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 0, true);
}

/**
* @tc.name      批量导入并批量删除跨账号非对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0504
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0504, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0504");
    // 创建跨账号群组
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId1, g_userId2);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 批量导入对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    const char *createAsymmCroInfo = CreateImportData(g_AsymCroCred, g_groupId, g_croAccountType);
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createAsymmCroInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
    // 删除跨账号群组
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    sleep(5);
    deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 0, true);
}

/**
* @tc.name      批量导入对称凭据，其中一个凭据类型为非对称
* @tc.number    SEC_DevAuth_Account_Func_0601
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0601, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0601");
    //批量导入对称凭据
    const char *createSymmInfo = CreateImportData(g_symmErrorCred, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      批量导入非对称凭据，服务器公钥校验失败
* @tc.number    SEC_DevAuth_Account_Func_0602
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0602, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0602");
    //批量导入对称凭据
    const char *createSymmInfo = CreateImportData(g_AsymErrorCred, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      批量导入非对称凭据，其中一个凭据类型为对称
* @tc.number    SEC_DevAuth_Account_Func_0603
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0603, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0603");
    //批量导入对称凭据
    const char *createSymmInfo = CreateImportData(g_AsymErrorPKCred, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 2, true);
}

/**
* @tc.name      批量导入对称凭据和非对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0604
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0604, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0604");
    //批量导入对称凭据
    const char *createMixInfo = CreateImportData(g_MixNumCred, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createMixInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
}

/**
* @tc.name      向同账号群组中导入跨账号凭据
* @tc.number    SEC_DevAuth_Account_Func_0605
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0605, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0605");
    // 批量导入对称凭据
    const char *createSymmCroInfo = CreateSymmInfo(g_symmCroInfo1, g_symmCroInfo2, g_groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmCroInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 1, true);
}

/**
* @tc.name      批量导入凭据，导入本设备凭据
* @tc.number    SEC_DevAuth_Account_Func_0605
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0606, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0606");
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    // 批量导入对称凭据
    const char *createAsymmInfo = CreateImportData(g_symmLocalCred, g_groupId, g_accountType);
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createAsymmInfo);
    // ASSERT_EQ(ret[2] == ON_FINISH, true);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 2, true);
}

/**
* @tc.name      批量导入已经存在的其他设备的同账号凭据
* @tc.number    SEC_DevAuth_Account_Func_0607
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0607, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0607");
    //批量导入对称凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);

    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
}

/**
* @tc.name      批量导入已经存在的其他设备的跨账号凭据
* @tc.number    SEC_DevAuth_Account_Func_0608
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0608, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0608");
    // 创建跨账号群组
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId1, g_userId2);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    //批量导入对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    const char *createSymmCroInfo = CreateSymmInfo(g_symmCroInfo1, g_symmCroInfo2, g_groupId, g_croAccountType);
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmCroInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 重复批量导入
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmCroInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
}

/**
* @tc.name      未创建群组，批量导入凭据
* @tc.number    SEC_DevAuth_Account_Func_0609
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0609, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0609");
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    // 批量导入对称凭据
    const char *createAsymmInfo = CreateImportData(g_symmLocalCred, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createAsymmInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 0, true);
}

/**
* @tc.name      批量添加10个同账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0610
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0610, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0610");
    const char *createAsymmInfo = CreateImportData(g_symmMax, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createAsymmInfo);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      批量添加可信设备，入参为空
* @tc.number    SEC_DevAuth_Account_Func_0611
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0611, TestSize.Level0)
{
    LOGI("SEC_DevAuth_Account_Func_0611");
    const char *createAsymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    int *ret = addMultiMembersTest(NULL, g_appName, createAsymmInfo);
    ASSERT_EQ(ret[3] == 0, false);

    ret = addMultiMembersTest(g_osAccountId1, NULL, createAsymmInfo);
    ASSERT_EQ(ret[3] == 0, false);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, NULL);
    ASSERT_EQ(ret[3] == 0, false);
}

/**
* @tc.name      未创建群组批量删除
* @tc.number    SEC_DevAuth_Account_Func_0612
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0612, TestSize.Level0)
{   
    LOGI("SEC_DevAuth_Account_Func_0612");
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    int *ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      批量删除可信设备，入参为空
* @tc.number    SEC_DevAuth_Account_Func_0613
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountMultiProcess, SEC_DevAuth_Account_Func_0613, TestSize.Level0)
{   
    LOGI("SEC_DevAuth_Account_Func_0613");
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    int *ret = delMultiMembersTest(NULL, g_appName, delSymmInfo);
    ASSERT_EQ(ret[3] == 0, false);
    ret = delMultiMembersTest(g_osAccountId1, NULL, delSymmInfo);
    ASSERT_EQ(ret[3] == 0, false);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, NULL);
    ASSERT_EQ(ret[3] == 0, false);
}
}