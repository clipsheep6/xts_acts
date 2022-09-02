/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
#include "device_auth_socket.h"
}


using namespace testing::ext;
using namespace std;
namespace {

int g_sockfd; 
const char *g_localDeviceId; //本端deviceId
const char *g_peerDeviceId; //对端deviceId

const char *g_version = "1.0.0";

const char *g_groupId;
int32_t g_requestId = 10;
static int32_t g_osAccountId1 = 100;
// static int32_t g_osAccountId2 = 101;
const char *g_appName = "TestApp";
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
// const char *g_userId2 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
const int g_accountType = 1;
const int g_croAccountType = 1282;

bool g_isClient = true;
bool g_isDeviceLevel = false;
const char *g_queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
// const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"

// 认证参数
// const char *g_authId;
class AccountAsyAsy : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - GroupManage_P2P */
void AccountAsyAsy::SetUpTestCase() {
    const char *ip = "192.168.1.11";
    const int port = 15051;
    g_sockfd = InitClient(ip, port);
    g_peerDeviceId = GetPeerDeviceId(g_sockfd);
}

void AccountAsyAsy::TearDownTestCase() {
}

void AccountAsyAsy::SetUp() {
    ToServerInit(g_sockfd);
    InitEnv();
    DeleteDatabase();
    // 配置本端
    g_localDeviceId = GetLocalDeviceId();
    const char *reqJsonStr = CreateReqJson(g_version, g_localDeviceId, g_userId1);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 模拟云侧签名&创建群组
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId1, pkInfoStr);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    // 获取对端公钥,模拟云侧签名,通知对端创建非对称凭据
    const char *serverPk = ToGetServerPK(g_sockfd);
    const char *serverParams = CreateCroAccoutCG(g_requestId, g_osAccountId1, g_userId1, serverPk);
    ToServerCreateGroup(g_sockfd, serverParams);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
}

void AccountAsyAsy::TearDown() {
    // const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
    ToServerDeleteGroup(g_sockfd);
    ToServerDestroy(g_sockfd);
}

/**
* @tc.name      未导入凭据非首次使用非对称凭据进行同账号认证
* @tc.number    SEC_DevAuth_Account_Func_0703
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/

HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0703, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0703");
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      未导入凭据非首次使用非对称凭据进行跨账号认证
* @tc.number    SEC_DevAuth_Account_Func_0704
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0704, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0704");
    const char *croGroupId = CreatAsyCroAccount(g_sockfd, g_localDeviceId);

    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, croGroupId, 0, g_userId1);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    char *deletParamsStr = DeleteGroupParams(croGroupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      导入凭据首次使用非对称凭据进行同账号认证
* @tc.number    SEC_DevAuth_Account_Func_0706
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0706, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0706");
    const char *importInfo = GetCroPKInfo(g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, importInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 2, true);
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      导入凭据首次使用非对称凭据进行跨账号认证
* @tc.number    SEC_DevAuth_Account_Func_0708
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0708, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0708");
    const char *croGroupId = CreatAsyCroAccount(g_sockfd, g_localDeviceId);
    const char *importInfo = GetCroPKInfo(croGroupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, importInfo);
    uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, croGroupId);
    ASSERT_EQ(deviceNum == 2, true);
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, croGroupId, 0, g_userId1);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      非首次发起同账号认证非对称凭据，业务级认证，未指定群组id
* @tc.number    SEC_DevAuth_Account_Func_0904
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0904, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0904");
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}
}