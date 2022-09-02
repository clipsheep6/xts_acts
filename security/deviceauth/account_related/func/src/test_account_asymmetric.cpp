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

const char *g_groupId;
const char *g_userId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
const char *g_userId1 = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E3";
static int32_t g_osAccountId1 = 100;
// static int32_t g_osAccountId2 = 101;
int32_t g_requestId = 10;
const char *g_appName = "TestApp";

const int g_accountType = 1;
const int g_croAccountType = 1282;


const char *g_queryCroAccParams = "{\"groupType\":1282,\"groupOwner\":\"TestApp\"}";
const char *g_queryAccParams = "{\"groupType\":1,\"groupOwner\":\"TestApp\"}";
const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809"
"A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,"
"\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
// 群组类型
// const int g_accountType = 1;
// const int g_croAccountType = 1282;

// 凭据数据
const char *g_symmCroCred = "{\"deviceList\":["
    "{\"udid\":\"EB436BFFEC2E0DF8065865DCE7620A33C6CCC1FF505F5B6B6FE388D640D70546\",\"deviceId\":\"EB436BFFEC2E0DF8065865DCE7620A33C6CCC1FF505F5B6B6FE388D640D70546\",\"userId\":\"2222222222222222222222222222222222222222222222222222222222222222\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"554869710F869256197A57BC57A3320032632D7741F66C84FEA3E4D3D55923F0\"}},"
    "{\"udid\":\"devC\",\"deviceId\":\"devC\",\"userId\":\"2222222222222222222222222222222222222222222222222222222222222222\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":103,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341233\"}}"
    "]}";
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
    // const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    Destory();
}

// /**
// * @tc.name      使用对称凭据创建同账号群组
// * @tc.number    SEC_DevAuth_Account_Func_0102
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0102, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);
// }

// /**
// * @tc.name      使用对称凭据，相同userId创建两次群组
// * @tc.number    SEC_DevAuth_Account_Func_0105
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0105, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_ERROR, true);
// }

// /**
// * @tc.name      使用对称凭据，不同userId创建两次群组
// * @tc.number    SEC_DevAuth_Account_Func_0106
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0106, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDA"
//     // "D08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":"
//     // "\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);
    
//     // 创建不同userId的同账号群组
//     g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874R5\","
//     "\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874R5";
//     char *deletParamsStr = DeleteGroupParams(g_groupId);
//     DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
// }

// /**
// * @tc.name      使用对称凭据，已创建群组，群组数据丢失，重新创建相同同账号群组
// * @tc.number    SEC_DevAuth_Account_Func_0115
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0115, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     DeleteDatabase();

//     // 删除群组数据后重新创建群组
//     ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);

// }


// /**
// * @tc.name      使用对称凭据，已创建群组，密钥数据丢失，重新创建相同同账号群组
// * @tc.number    SEC_DevAuth_Account_Func_0116
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0116, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);

//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     RemoveHuks();
//     // 删除密钥数据后重新创建群组
//     char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryAccParams);
//     g_groupId = GetGroupIdfromData(groupInfo);
//     char *deletParamsStr = DeleteGroupParams(g_groupId);
//     DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);

//     ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
//     ASSERT_EQ(ret[2] == ON_FINISH, true);

// }

// /**
// * @tc.name      使用对称凭据，不同用户空间下，相同userId创建两次群组
// * @tc.number    SEC_DevAuth_Account_Func_0117
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0117, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     // 在其他用户空间创建同账号群组
//     ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,g_createParamsStr);
//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     // 删除其他用户空间的数据
//     char *groupInfo = GetGroupInfoTest(g_osAccountId2, g_appName, g_queryAccParams);
//     g_groupId = GetGroupIdfromData(groupInfo);
//     char *deletParamsStr = DeleteGroupParams(g_groupId);
//     DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
// }

// /**
// * @tc.name      使用对称凭据，不同用户空间下，不同userId创建两次群组
// * @tc.number    SEC_DevAuth_Account_Func_0118
// * @tc.size      MEDIUM
// * @tc.type      FUNC
// * @tc.level     
// */
// HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0118, TestSize.Level0)
// {
//     // const char *g_createParamsStr = "{\"groupType\":1,\"deviceId\":\"devA\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\",\"credential\":{\"credentialType\":1,\"authCodeId\":101,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}";
//     int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     // 在其他用户空间创建同账号群组
//     ret = CreateGroupTest(g_osAccountId2, g_requestId, g_appName ,g_createParamsStr);
//     ASSERT_EQ(ret[2] == ON_FINISH, true);

//     // 删除其他用户空间的数据
//     char *groupInfo = GetGroupInfoTest(g_osAccountId2, g_appName, g_queryAccParams);
//     g_groupId = GetGroupIdfromData(groupInfo);
//     char *deletParamsStr = DeleteGroupParams(g_groupId);
//     DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
// }

/**
* @tc.name      批量导入并批量删除同账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0401
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0401, TestSize.Level0)
{

    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = CreateSymmInfo(g_groupId, g_accountType);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      批量导入并批量删除跨账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0402
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0402, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 创建跨账号群组
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    // g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = CreateImportData(g_symmCroCred, g_groupId, g_croAccountType);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_croAccountType);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      重复批量导入同账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0403
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0403, TestSize.Level0)
{

    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = CreateSymmInfo(g_groupId, g_accountType);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 重复导入凭据
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      重复批量导入跨账号对称凭据
* @tc.number    SEC_DevAuth_Account_Func_0404
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0404, TestSize.Level0)
{
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 创建跨账号群组
    const char *accoutGroup = CreateDiffAccoutCG(g_requestId, g_userId, g_userId1);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,accoutGroup);
    printf("%d\n", ret[2]);
    printf("%d\n", ret[0]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryCroAccParams);
    g_groupId = GetGroupIdfromData(groupInfo);
    // g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = CreateImportData(g_symmCroCred, g_groupId, g_croAccountType);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 重复批量导入
    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    // 批量删除对称凭据
    const char *delSymmInfo = DelSymmInfo(g_groupId, g_croAccountType);
    ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      未创建群组批量导入
* @tc.number    SEC_DevAuth_Account_Func_0405
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0405, TestSize.Level0)
{

    // int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    // ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = CreateSymmInfo(g_groupId, g_accountType);

    int *ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_FINISH, true);


    // 批量删除对称凭据
    // const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    // ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    // ASSERT_EQ(ret[2] == ON_FINISH, true);
}

/**
* @tc.name      已创建群组后，通过批量导入接口重新导入本端凭据
* @tc.number    SEC_DevAuth_Account_Func_0405
* @tc.size      MEDIUM
* @tc.type      FUNC
* @tc.level     
*/
HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0406, TestSize.Level0)
{

    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,g_createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    //批量导入对称凭据
    // g_groupId = "4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4";
    const char *createSymmInfo = "{\"groupId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\", \"groupType\":1, \"deviceList\":["
    "{\"udid\":devB,\"deviceId\":\"devB\",\"userId\":\"4269DC28B639681698809A67EDAD08E39F207900038F91FEF95DD042FE2874E4\","
    "\"credential\":{\"credentialType\":1,\"authCodeId\":102,\"authCode\":\"1234123412341234123412341234123412341234123412341234123412341234\"}}}";
    // const char *createSymmInfo = CreateSymmInfo(g_groupId, baseInfo);

    ret = addMultiMembersTest(g_osAccountId1, g_appName, createSymmInfo);
    ASSERT_EQ(ret[2] == ON_ERROR, true);


    // 批量删除对称凭据
    // const char *delSymmInfo = DelSymmInfo(g_groupId, g_accountType);
    // ret = delMultiMembersTest(g_osAccountId1, g_appName, delSymmInfo);
    // ASSERT_EQ(ret[2] == ON_FINISH, true);
}

}