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
extern "C" {
#include "device_auth_func.h"
#include "device_auth_socket.h"
}


using namespace testing::ext;
using namespace std;
namespace {

int g_sockfd; 
const char *g_groupId;
const char *g_localDeviceId; //本端deviceId
const char *g_peerDeviceId; //对端deviceId
const char *g_userId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
static int32_t g_osAccountId1 = 100;
int32_t g_requestId = 10;
const char *g_appName = "TestApp";
bool g_isClient = true;
const char *g_queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
// const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
const char *g_clientBaseInfo = "{\"groupType\":1,\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
const char *g_version = "1.0.0";
// const char *g_deviceId = "123456789";

const char *g_clientCredential;
// 认证参数
const char *g_authId;
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
    g_localDeviceId = GetLocalDeviceId();
    g_peerDeviceId = GetPeerDeviceId(g_sockfd);
    g_clientCredential = CreateLocalCred(g_clientBaseInfo, g_localDeviceId);
}

void AccountAsyAsy::TearDownTestCase() {
}

void AccountAsyAsy::SetUp() {
    ToServerInit(g_sockfd);
    InitEnv();
    DeleteDatabase();
    // 配置本端
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_clientCredential);
    // 通知对端创建对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);

    // 获取对端公钥,模拟云侧签名,通知对端创建非对称凭据
    const char *serverPk = ToGetServerPK(g_sockfd);
    const char *serverParams = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, serverPk);
    ToServerCreateGroup(g_sockfd, serverParams);
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
* @tc.name      本端对称凭据，对端非对称凭据，本端发起同账号认证
* @tc.number    SEC_DevAuth_Account_Func_0805
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0805, TestSize.Level0)
{
    const char *authParamsStr = AuthParams(NULL, g_appName, g_isClient, "devB");
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
}

/**
* @tc.name      本端对称凭据，对端非对称凭据，对端发起同账号认证
* @tc.number    SEC_DevAuth_Account_Func_0806
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsyAsy, SEC_DevAuth_Account_Func_0806, TestSize.Level0)
{
    const char *authParamsStr = AuthParams(NULL, g_appName, g_isClient, "devB");
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
}

}