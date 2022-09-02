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
extern "C" {
#include "device_auth_func.h"
}


using namespace testing::ext;
using namespace std;
namespace {

const char *g_groupId;
const char *g_version = "1.0.0";
const char *g_deviceId = "123456789";
const char *g_userId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
static int32_t g_osAccountId1 = 100;
static int32_t g_osAccountId2 = 101;
int32_t g_requestId = 10;
const char *g_appName = "TestApp";

// const char *g_queryCroParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
const char *g_queryParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";

class AccountGroupManage : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - Account groupmanage */
void AccountGroupManage::SetUpTestCase() {
}

void AccountGroupManage::TearDownTestCase() {
}

void AccountGroupManage::SetUp() {
    InitEnv();
    DeleteDatabase();
}

void AccountGroupManage::TearDown() {
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
}

/**
* @tc.name      使用非对称密钥创建同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0101
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0101, TestSize.Level0)
{
    // 获取公钥信息
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 模拟云侧签名&创建群组
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 单设备进行认证
    char *authParams = AuthParams("devB", g_appName, true, true, g_groupId, 0, NULL);
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountAuth(g_osAccountId1, clientReqId, serverReqId, authParams);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

}

/**
* @tc.name      使用对称凭据创建同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0102
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0102, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      导入非对称凭据，相同userId创建两次群组
* @tc.number    SEC_DevAuth_Account_Func_0103
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0103, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 首次创建群组
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 重复创建群组
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      使用对称凭据，相同userId创建两次群组
* @tc.number    SEC_DevAuth_Account_Func_0104
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0104, TestSize.Level0)
{
    // 首次创建群组
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 重复创建群组
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}


/**
* @tc.name     导入不合法的凭据信息，创建同账号群组失败
* @tc.number    SEC_DevAuth_Account_Func_0105
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0105, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 模拟不合法的凭据信息
    const char *accoutGroup = CreateAccoutError(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name     导入非对称凭据，serverPK校验失败，创建同账号群组失败
* @tc.number    SEC_DevAuth_Account_Func_0106
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0106, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 模拟不合法的凭据信息
    const char *accoutGroup = CreateAccoutPK(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name     导入非对称凭据，userId信息和本地信息不一致，创建同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0108
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0108, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 修改userId
    const char *newInfo = FixPkInfoStr(pkInfoStr);
    // 模拟不合法的凭据信息
    const char *accoutGroup = CreateAccoutPK(g_requestId, g_osAccountId1, g_userId, newInfo);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name     存在同账号群组，创建跨账号群组
* @tc.number    SEC_DevAuth_Account_Func_0109
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0109, TestSize.Level0)
{
    //user1 create account group in first user space
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 create across-account group of user2 in first user space
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 delete across-account group of user2 in first user space
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    ret = DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      不存在同账号群组，创建跨账号群组
* @tc.number    SEC_DevAuth_Account_Func_0110
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0110, TestSize.Level0)
{
    //user1 create across-account group of user2 in first user space
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      已使用非对称密钥创建群组，群组数据丢失，重新创建想同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0201
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0201, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    DeleteDatabase();
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    sleep(1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      已使用非对称密钥创建群组，密钥数据丢失，删除群组重新创建想同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0202
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0202, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    RemoveHuks();
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    sleep(1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      使用对称凭据，已创建群组，群组数据丢失，重新创建相同同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0203
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0203, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    DeleteDatabase();
    // 删除群组数据后重新创建群组
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    sleep(1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      使用对称凭据，已创建群组，密钥数据丢失，重新创建相同同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0204
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0204, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    RemoveHuks();
    // 删除密钥数据后重新创建群组
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);

    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      不同用户空间下，不同userId使用非对称密钥创建两次同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0205
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0205, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 用户空间1创建userId1同账号群组
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    // 用户空间2创建userId2同账号群组
    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      不同用户空间下，相同userId使用非对称密钥创建两次同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0206
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0206, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    // 用户空间1创建userId1同账号群组
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 用户空间2创建userId1同账号群组
    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      不同用户空间下，相同userId使用对称凭据创建两次同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0207
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0207, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 用户空间1创建userId1同账号群组
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 用户空间2创建userId1同账号群组
    char *groupInfo = GetGroupInfoTest(g_osAccountId2, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      不同用户空间下，不同userId使用对称凭据创建两次同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0208
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0208, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 用户空间1创建userId1同账号群组
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 用户空间2创建userId1同账号群组
    char *groupInfo = GetGroupInfoTest(g_osAccountId2, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      创建同账号群组，对称凭据长度超过64位
* @tc.number    SEC_DevAuth_Account_Func_0209
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0209, TestSize.Level0)
{
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
    "A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
    "\"authCode\":\"12341234123412341234123412341234123412341234123412341234123412341234\"}}";

    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      使用非对称凭据，不同userId创建两次同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0210
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0210, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 相同用户空间下创建，不同userId的同账号群组
    reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId1);
    pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      使用对称凭据，不同userId创建两次群组
* @tc.number    SEC_DevAuth_Account_Func_0211
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0211, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    
    // 创建不同userId的同账号群组
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874R5\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);

    ASSERT_EQ(ret[2] == ON_FINISH, true);

    g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874R5";
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}

/**
* @tc.name      创建同账号群组，groupType为256
* @tc.number    SEC_DevAuth_Account_Func_0301
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0301, TestSize.Level4)
{
    const char *createParamsStr = "{\"groupType\":256,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874R5\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建同账号群组，未传入userId
* @tc.number    SEC_DevAuth_Account_Func_0302
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0302, TestSize.Level4)
{
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":NULL,"
    "\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[3] == ON_FINISH, false);
}

/**
* @tc.name      创建跨账号群组，未传入userId
* @tc.number    SEC_DevAuth_Account_Func_0303
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0303, TestSize.Level4)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, NULL, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建同账号群组，未传入credential
* @tc.number    SEC_DevAuth_Account_Func_0304
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0304, TestSize.Level4)
{
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
    "A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":NULL}";
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建跨账号群组，peerUserId传入userId
* @tc.number    SEC_DevAuth_Account_Func_0305
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0305, TestSize.Level4)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建跨账号群组，未传入peerUserId
* @tc.number    SEC_DevAuth_Account_Func_0306
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0306, TestSize.Level4)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, NULL);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建同账号群组，credential为-1
* @tc.number    SEC_DevAuth_Account_Func_0307
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0307, TestSize.Level4)
{
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
    "A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":-1,\"authCodeId\":101,"
    "\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      创建同账号群组，导入对称凭据，credential为非对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0308
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0308, TestSize.Level4)
{
    const char *createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
    "A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":2,\"authCodeId\":101,"
    "\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      未创建同账号群组，删除对应群组
* @tc.number    SEC_DevAuth_Account_Func_0401
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0401, TestSize.Level0)
{
    char *deletParamsStr = DeleteGroupParams(g_userId);
    int *ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      未创建跨账号群组，删除对应群组
* @tc.number    SEC_DevAuth_Account_Func_0402
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0402, TestSize.Level0)
{
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    int *ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

/**
* @tc.name      user2删除user1下的同账号群组
* @tc.number    SEC_DevAuth_Account_Func_0403
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0403, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    
    char *deletParamsStr = DeleteGroupParams(g_userId);
    ret = DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountGroupManage, SEC_DevAuth_Account_Func_0404, TestSize.Level0)
{
    const char *pk1 = "{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004129EB615"
    "B423DE45874CFC10F9536AD8336A4315AA20C6099FA113627A95358E1F134931CC38327F80E568F2912E3D3E3EB489D6"
    "C543682D5E26BF2283307E3D\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042"
    "FE2874E3\",\"deviceId\":\"devB\",\"version\":\"1.0.0\"}";
    const char *pk2 = "{\"devicePk\":\"3059301306072A8648CE3D020106082A8648CE3D03010703420004E0B67536"
    "7CCC32EAC7DB7DAD769C1C901BAC887DF8041119CE3A8DDBC580CDAC3017045EBE8D61BF87A79F2990EE24056FA1E000"
    "70FF935F417342903446D96B\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042"
    "FE2874E3\",\"deviceId\":\"devC\",\"version\":\"1.0.0\"}";
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pk1);
    printf("pk1:%s\n", pk1);
    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pk2);
    printf("pk1:%s\n", pk2);
}
}