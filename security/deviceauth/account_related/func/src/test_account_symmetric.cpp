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
}


using namespace testing::ext;
using namespace std;
namespace {

const char *g_userId = "123456";
const char *g_userId1 = "111111";
const char *g_version = "1.0.0";
const char *g_deviceId = "123456789";
static int32_t g_osAccountId1 = 100;
static int32_t g_osAccountId2 = 101;
int32_t g_requestId = 10;
const char *g_appName = "TestApp";
const char *g_queryParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";

class AccountAsym : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - GroupManage_P2P */
void AccountAsym::SetUpTestCase() {
}

void AccountAsym::TearDownTestCase() {
}

void AccountAsym::SetUp() {
    InitEnv();
    DeleteDatabase();
}

void AccountAsym::TearDown() {
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0101, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountAuth(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0102, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    printf("128\n");
    TestGetRegisterInfo(reqJsonStr);
    printf("130\n");
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0103, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0104, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 相同用户空间下创建，不同userId的同账号群组
    reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId1);
    pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0111, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    DeleteDatabase();

    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0112, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    RemoveHuks();
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);

    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    // ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0113, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    char *deletParamsStr = DeleteGroupParams(g_userId);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0114, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0201, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountAuth(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0202, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    DeleteDatabase();

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountAuth(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0203, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    RemoveHuks();
    
    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountAuth(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0204, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountClientDup(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[0]);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0205, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalAccountServerDup(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d", ret[0]);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0206, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalClientSame(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0207, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *authParams = AuthParams(NULL, g_appName, true, "udid2");
    int64_t clientReqId = 111;
    int64_t serverReqId = 222;
    ret = LocalServerSame(g_osAccountId1, clientReqId, serverReqId, authParams);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    // ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0301, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    RemoveHuks();

    char *deletParamsStr = DeleteGroupParams(g_userId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0302, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char *deletParamsStr = DeleteGroupParams(g_userId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0303, TestSize.Level0)
{
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    int *ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0304, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    char *deletParamsStr = DeleteGroupParams(g_userId);
    ret = DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0401, TestSize.Level0)
{
    //user1 create account group in first user space
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 create across-account group of user2 in first user space
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 delete across-account group of user2 in first user space
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    ret = DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0402, TestSize.Level0)
{
    //user1 create across-account group of user2 in first user space
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0403, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    //user1 create account group in first user space
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    //user2 create account group in second user space
    reqJsonStr = CreateReqJson("null", "null", g_userId1);
    pkInfoStr = TestGetRegisterInfo(reqJsonStr);
    accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId2, g_userId1, pkInfoStr);
    ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    //user1 create across-account group of user2 in first user space
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    
    //user2 delete account group in second user space
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    ret = DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);

    //user1 delete across-account group of user2 in first user space
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);
    deletParamsStr = DeleteGroupParams(groupId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0404, TestSize.Level0)
{
    const char *reqJsonStr = CreateReqJson(g_version, g_deviceId, g_userId);
    const char *pkInfoStr = TestGetRegisterInfo(reqJsonStr);

    //user1 creates account group in first user space
    const char *accoutGroup = CreateAccoutCG(g_requestId, g_osAccountId1, g_userId, pkInfoStr);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d", ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 creates across-account group of user2 in first user space
    accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //user1 delete across-account group of user2 in first user space    
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    const char *groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(groupId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0405, TestSize.Level0)
{
    char *deletParamsStr = DeleteGroupParams(g_userId1);
    int *ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}
}