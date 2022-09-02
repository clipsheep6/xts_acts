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

const char *g_groupId;
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
// const char *g_userId1 = "1111111111111111111111111111111111111111111111111111111111111111";
const char *g_userId2 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
// const char *g_userId2 = "2222222222222222222222222222222222222222222222222222222222222222";

static int32_t g_osAccountId1 = 100;
static int32_t g_osAccountId2 = 101;
int32_t g_requestId = 10;
int32_t g_requestId1 = 11;
const char *g_appName = "TestApp";

const int g_accountType = 1;
const int g_croAccountType = 1282;
bool g_isClient = true;
bool g_isDeviceLevel = false;
const char *g_queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
// const char *g_queryCroParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
const char *g_clientBaseInfo = "{\"groupType\":1,\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
const char *g_clientBaseInfo1 = "{\"groupType\":1,\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
const char *g_clientCredential;
// const char *g_clientBaseInfo = "{\"groupType\":1,,\"userId\":\"1111111111111111"
// "111111111111111111111111111111111111111111111111\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
// "\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";

const char *g_serverCredential;
const char *g_serverBaseInfo = "{\"groupType\":1,\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":102,"
"\"authCode\":\"1234567812345678123456781234567812345678123456781234567812345678\"}}";
// const char *g_serverBaseInfo1 = "{\"groupType\":1,\"userId\":\"4269DC28B639681698809"
// "A67EDAD08E39F207900038F91FEF95DD042FE2874E3\",\"credential\":{\"credentialType\":1,\"authCodeId\":102,"
// "\"authCode\":\"1234567812345678123456781234567812345678123456781234567812345678\"}}";

// const char *g_serverBaseInfo1 = "{\"groupType\":1,\"userId\":\"222222222222"
// "2222222222222222222222222222222222222222222222222222\",\"credential\":{\"credentialType\":1,\"authCodeId\":102,"
// "\"authCode\":\"1234567812345678123456781234567812345678123456781234567812345678\"}}";
// 认证参数

// 点对点参数
const int g_groupType1 = 256;
const char *g_connectParams = nullptr;
const char *g_groupName1 = "P2PGroup";
const int GROUP_VISIBILITY_PUBLIC = -1;
const char *g_pinCode = "123456";

// 对称凭据
// 同账号
const char *g_symmInfo1 = "{\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"10F9F0576E61730193D2052B7F771887124A68F1607EFCF7796C1491F834CD92\"}}";
const char *g_symmInfo2 = "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
"\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}";
// 跨账号
// const char *g_symmCroInfo1 = "{\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
// "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"10F9F0576E61730193D2052B7F771887124A68F1607EFCF7796C1491F834CD92\"}}";
// const char *g_symmCroInfo2 = "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3\","
// "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}";



class AccountSySy : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - GroupManage_P2P */
void AccountSySy::SetUpTestCase() {
    const char *ip = "192.168.1.11";
    const int port = 15051;
    g_sockfd = InitClient(ip, port);
    g_localDeviceId = GetLocalDeviceId();
    g_peerDeviceId = GetPeerDeviceId(g_sockfd);
    g_clientCredential = CreateLocalCred(g_clientBaseInfo, g_localDeviceId);
    g_serverCredential = CreateLocalCred(g_serverBaseInfo, g_peerDeviceId);
}

void AccountSySy::TearDownTestCase() {
}

void AccountSySy::SetUp() {
    ToServerInit(g_sockfd);
    InitEnv();
    DeleteDatabase();
    // 配置本端
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_clientCredential);
    // 通知对端创建对称凭据
    ToServerCreateGroup(g_sockfd, g_serverCredential);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
}

void AccountSySy::TearDown() {
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
    ToServerDeleteGroup(g_sockfd);
    ToServerDestroy(g_sockfd);
}

/**
* @tc.name      未导入凭据首次使用对称凭据进行同账号认证 --pass
* @tc.number    SEC_DevAuth_Account_Func_0701
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0701, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0701");
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *serverData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, g_sockfd);
    sleep(2);
    ASSERT_EQ(ret[2] == ON_FINISH, false);
}

// /**
// * @tc.name      未导入凭据首次使用对称凭据进行跨账号认证 --pass
// * @tc.number    SEC_DevAuth_Account_Func_0702
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0702, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0702");
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, groupId, 0, g_userId1);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *serverData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] != ON_FINISH, true);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId1, g_appName, deletParamsStr);
    printf("delete end\n");
}

/**
* @tc.name      导入凭据首次使用对称凭据进行同账号认证 --pass
* @tc.number    SEC_DevAuth_Account_Func_0705
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/

HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0705, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0705");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    printf("1\n");
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    printf("2\n");
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      导入凭据首次使用对称凭据进行跨账号认证
* @tc.number    SEC_DevAuth_Account_Func_0707
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/

HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0707, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0707");
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, groupId, 0, g_userId1);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}


/**
* @tc.name      导入凭据首次使用对称凭据被控端发起同账号认证--pass
* @tc.number    SEC_DevAuth_Account_Func_0709
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0709, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0709");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    int *ret = ToServerAuth(g_sockfd, g_localDeviceId, NULL, g_accountType);
    ASSERT_EQ(ret[2] == ON_ERROR, false);
}

/**
* @tc.name      导入凭据首次使用对称凭据被控端发起跨账号认证 --pass
* @tc.number    SEC_DevAuth_Account_Func_0710
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0710, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0710");
    // 导入对端凭据
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    g_localDeviceId = GetLocalDeviceId();
    int *ret = ToServerAuth(g_sockfd, g_localDeviceId, g_userId2, g_croAccountType);
    ASSERT_EQ(ret[2] == ON_ERROR, false);

    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}


/**
* @tc.name      设备同时具备同账号和点对点两种可信关系，发起设备级认证
* @tc.number    SEC_DevAuth_Account_Func_0801
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0801, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0801");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    // 创建点对点群组
    const char *createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr);
    // 绑定对端设备
    const char *queryParams = "{\"groupType\":256,\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);

    const char *addParamsStr = AddParams(groupId, g_groupType1, g_pinCode, g_connectParams);
    int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, true, NULL, 0, NULL);
    ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      设备同时具备同账号和点对点两种可信关系，发起设备级认证，同账号认证失败
* @tc.number    SEC_DevAuth_Account_Func_0802
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0802, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0802");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    // 创建点对点群组
    const char *createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr);
    // 绑定对端设备
    const char *queryParams = "{\"groupType\":256,\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);

    const char *addParamsStr = AddParams(groupId, g_groupType1, g_pinCode, g_connectParams);
    int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
    
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
    ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    recvData = "{\"step\":32896,\"errorCode\":16390,\"requestId\":\"10\",\"opercode\":201}";
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);

    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      设备同时具备跨账号和点对点两种可信关系，发起设备级认证
* @tc.number    SEC_DevAuth_Account_Func_0803
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0803, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0803");
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, groupId, 0, g_userId1);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    printf("start create group\n");
    // 创建点对点群组
    const char *createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr);
    // 绑定对端设备
    const char *queryParams = "{\"groupType\":256,\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    groupId = GetGroupIdfromData(groupInfo);

    const char *addParamsStr = AddParams(groupId, g_groupType1, g_pinCode, g_connectParams);
    ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
    printf("Bind success\n");
    // 发起认证
    authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, g_userId1);
    ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
    
    groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      设备同时具备跨账号和点对点两种可信关系，发起设备级认证，同账号认证失败
* @tc.number    SEC_DevAuth_Account_Func_0804
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0804, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0804");
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, groupId, 0, g_userId1);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    printf("start create group\n");
    // 创建点对点群组
    const char *createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName, createParamsStr);
    // 绑定对端设备
    const char *queryParams = "{\"groupType\":256,\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    groupId = GetGroupIdfromData(groupInfo);

    const char *addParamsStr = AddParams(groupId, g_groupType1, g_pinCode, g_connectParams);
    ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
    printf("Bind success\n");
    // 发起认证
    authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, g_userId1);
    ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    recvData = "{\"step\":32896,\"errorCode\":16390,\"requestId\":\"10\",\"opercode\":201}";
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    
    groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      用户空间2对用户空间1绑定的同账号设备发起认证
* @tc.number    SEC_DevAuth_Account_Func_0807
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0807, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0807");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId2, g_requestId, authParamsStr, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      导入凭据后，认证失败，检查可信设备关系是否删除
* @tc.number    SEC_DevAuth_Account_Func_0808
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0808, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0808");
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    recvData = RecvData(g_sockfd);
    recvData = "{\"step\":32896,\"errorCode\":16390,\"requestId\":\"10\",\"opercode\":201}";
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    int deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
    ASSERT_EQ(deviceNum == 3, true);
}

/**
* @tc.name      未导入凭据后，认证失败，检查可信设备关系是否添加 --- 改成非对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0809
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
// HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0809, TestSize.Level0)
// {
//     LOGI("Start SEC_DevAuth_Account_Func_0809");
//     // 发起认证
//     const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
//     int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
//     const char *recvData = RecvData(g_sockfd);
//     ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
//     recvData = RecvData(g_sockfd);
//     ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
// }

/**
* @tc.name      使用进行同账号认证，Client端报文重放 --pass
* @tc.number    SEC_DevAuth_Account_Func_0812
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0812, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0812");
    // 发起认证
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *clientFirstMessage = "{\"authForm\":1,\"step\":80,\"credentialType\":1,\"userId\":\"4269DC28B639681698809A67EDAD08E39F20790003"
    "8F91FEF95DD042FE2874E4\",\"devId\":\"64657641\",\"deviceId\":\"EB436BFFEC2E0DF8065865DCE7620A33C6CCC1FF505F5B6B6FE3"
    "88D640D70546\",\"data\":{\"salt\":\"11190EDF5BD7E7394C93BDB1CF4478AF\",\"payload\":\"646576414542343336424646454332"
    "4530444638303635383635444345373632304133334336434343314646353035463542364236464533383844363430443730353436\",\"seed\":\"9C68A1"
    "ACA36E3C173AE6CAF4692C36300FCF3E6A5DAC8CDA5B96F0043FE56A38\"},\"groupAndModuleVersion\":\"2.0.1\",\"isDeviceLevel\":false,\"opercode\":201}";
    SendData(g_sockfd, clientFirstMessage);
    const char *recvData = RecvData(g_sockfd);
    const char *clientSecondMessage = "{\"authForm\":1,\"step\":82,\"data\":{\"token\":\"0884A8576EB343B3D9686077726E25D66CB0E75A"
    "836B651A31CD4C2FBCCF4251\"},\"groupAndModuleVersion\":\"2.0.17\",\"isDeviceLevel\":false,\"opercode\":201} ";
    SendData(g_sockfd, clientSecondMessage);
    recvData = RecvData(g_sockfd);
    int ret = GetErrorCode(recvData);
    ASSERT_EQ(ret == 16390, true);
}

/**
* @tc.name      使用进行同账号认证，Server端报文重放 --pass
* @tc.number    SEC_DevAuth_Account_Func_0813
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0813, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0813");
    // 发起认证
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    const char *recvData = RecvData(g_sockfd);
    recvData = "{\"step\":81,\"authForm\":1,\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"devId\":\"64657642\",\"deviceId\":\"F20C884EEE23A88A7006427F8828DDDDB77EDF761B7461B011E60D305B2331BC\",\"data\":{\"payload\":\"6465"
    "764246323043383834454545323341383841373030363432374638383238444444444237374544463736314237343631423031314536304433303542323333314243\","
    "\"token\":\"22F886B6091EBE2B658EE9129752881494B63FCB334C886EA3D67B33FE168287\",\"salt\":\"80799889DF4E21F3965B1012D26DFC6\"},\"groupAndM"
    "oduleVersion\":\"2.0.17\",\"isDeviceLevel\":false,\"requestId\":\"10\",\"opercode\":201}";
    ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, false);
}

/**
* @tc.name      发起同账号认证，未传peerConnDeviceId --pass
* @tc.number    SEC_DevAuth_Account_Func_0901
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0901, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0901");
    // 导入对端凭据
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParams(NULL, g_appName, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      发起同账号认证，未传servicePkgName
* @tc.number    SEC_DevAuth_Account_Func_0902
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0902, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0902");
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, NULL, g_isClient, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    // const char *recvData = RecvData(g_sockfd);
    // ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    // recvData = RecvData(g_sockfd);
    // ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      发起同账号认证，未传isClient
* @tc.number    SEC_DevAuth_Account_Func_0903
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0903, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0903");
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParamsError(g_peerDeviceId, g_appName, NULL, g_isDeviceLevel, g_groupId, 0, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    ASSERT_EQ(ret[0] == 0, true);
}

/**
* @tc.name      发起同账号认证，keyLenth为-1
* @tc.number    SEC_DevAuth_Account_Func_0905
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0905, TestSize.Level0)
{
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, g_groupId, g_accountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, g_groupId, -1, NULL);
    int *ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      发起跨账号认证，未传userid
* @tc.number    SEC_DevAuth_Account_Func_0906
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountSySy, SEC_DevAuth_Account_Func_0906, TestSize.Level0)
{
    LOGI("Start SEC_DevAuth_Account_Func_0906");
    const char *groupId = CreateSymmCroAcount(g_sockfd, g_groupId, g_clientBaseInfo1);
    const char *createSymmInfo = CreateSymmInfo(g_symmInfo1, g_symmInfo2, groupId, g_croAccountType);
    addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);

    // 发起认证
    const char *authParamsStr = AuthParams(g_peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, groupId, 0, NULL);
    int *ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}
}