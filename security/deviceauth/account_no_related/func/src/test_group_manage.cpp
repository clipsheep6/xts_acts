/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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


#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include "hc_log.h"

// #include "nativetoken_kit.h"
// #include "token_setproc.h"

extern "C" {
#include "json_utils.h"
#include "device_auth.h"
#include "device_auth_define.h"
#include "device_auth_func.h"
}

using namespace testing::ext;
using namespace std;
namespace {
const char *g_appName = "TestApp";
int32_t g_requestId = 123;
int32_t g_osAccountId1 = 10024;
int32_t g_testOsaccountUid2 = 10025;
const char *g_normalGroupId = "BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DC0B";
const int groupTpyeInvaild = -1;
const int maxGroupNum = 9;
const int groupTypeP2P = 256;
const char *deviceId1 = "3C58C27533D8";
const char *groupName1 = "P2PGroup";
const int groupVisibilityPublic = -1;
const char *noExistGroupId = "BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54D110";
const char *createParamsStr = CreateGroupParams(groupTypeP2P, deviceId1, groupName1, groupVisibilityPublic);
const char *deleteParams = DeleteGroupParams(g_normalGroupId);
const int g_jsonIndex = 0;
const char *queryParams = "{\"groupOwner\":\"TestApp\"}";
const char *g_groupid = "groupId";
const int FAIL = 2;


class GroupManage_P2P : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

void GroupManage_P2P::SetUpTestCase()
{
    // static const char *ACLS[] = {"ACCESS_IDS"};
    // static const char *PERMS[] = {
    //     "ohos.permission.PLACE_CALL",
    //     "ohos.permission.ACCESS_IDS"
    // };
    // uint64_t tokenId;
    // NativeTokenInfoParams infoInstance = {
    //     .dcapsNum = 0,
    //     .permsNum = 2,
    //     .aclsNum = 1,
    //     .dcaps = nullptr,
    //     .perms = PERMS,
    //     .acls = ACLS,
    //     .processName = "dslm_service",
    //     .aplStr = "system_core",
    // };
    // tokenId = GetAccessTokenId(&infoInstance);
    // SetSelfTokenID(tokenId);
    SetAccessToken();
}

void GroupManage_P2P::TearDownTestCase()
{
}

void GroupManage_P2P::SetUp()
{
    InitEnv();
}

void GroupManage_P2P::TearDown()
{
    DeleteDatabase();
    DeInitTest();
}


/**
 * @tc.name: GroupManage_P2P.P2P_ CreateGroup_0101
 * @tc.desc: Use correct parameterss to createGroup;
 * @tc.type: FUNC
 * @tc.size:Level0
 */
HWTEST_F(GroupManage_P2P, P2P_GroupManage_0101, TestSize.Level0)
{
    LOGI("start P2P_GroupManage_0101");
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    int ret1 = CompareInfo(groupInfo, g_groupid, g_jsonIndex, g_normalGroupId);
    DestoryTest(groupInfo);
    printf("data:%d\n",ret1);
    ASSERT_EQ(ret1 == DEV_SUCCESS, true);
}

/**
 * @tc.name: GroupManage_P2P.P2P_GroupManage_0102
 * @tc.desc: Use correct parameterss to createGroup;
 * @tc.type: FUNC
 * @tc.size:Level2
 */
HWTEST_F(GroupManage_P2P, P2P_GroupManage_0102, TestSize.Level2)
{
    LOGI("start P2P_GroupManage_0102");
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);  
}

/**
 * @tc.name: GroupManage_P2P.P2P_GroupManage_0104
 * @tc.desc: Use correct parameterss to createGroup;
 * @tc.type: FUNC
 * @tc.size:Level2
 */
HWTEST_F(GroupManage_P2P, P2P_GroupManage_0104, TestSize.Level2)
{
    LOGI("start P2P_GroupManage_0102");
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    ret = CreateGroupTest(g_testOsaccountUid2, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}


HWTEST_F(GroupManage_P2P, P2P_GroupManage_0103, TestSize.Level2)
{
    LOGI("start P2P_GroupManage_0103");
    const char *testAppName;
    int *ret;
    for(int i = 1; i <= maxGroupNum; i = i + 1)
    {
        string src1 = "testApp";
        string src2 = to_string(i);
        string src3 = src1 + src2;
        testAppName = src3.c_str();
        ret = CreateGroupTest(g_osAccountId1, g_requestId, testAppName ,createParamsStr);
        ASSERT_EQ(ret[2] == ON_FINISH, true);
    }
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(GroupManage_P2P, P2P_GroupManage_0201, TestSize.Level3)
{
    LOGI("start P2P_GroupManage_0201");
    const char *appNameNull = NULL;
    int32_t REQUEST_ID_NULL = NULL;
    int32_t TEST_OSACCOUNT_NULL = NULL;
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, appNameNull ,createParamsStr);
    printf("data:%d\n",ret[3]);
    ASSERT_EQ(ret[3] == FAIL, true);
    ret = CreateGroupTest(g_osAccountId1, REQUEST_ID_NULL, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    ret = CreateGroupTest(TEST_OSACCOUNT_NULL, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
    LOGI("start P2P_GroupManage_0201-2");
    const char * createParamsStr1 = CreateGroupParams(NULL, deviceId1, groupName1, groupVisibilityPublic);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr1);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_NULL_PTR, true);       
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    LOGI("start P2P_GroupManage_0201-3");
    const char * createParamsStr2 = CreateGroupParams(groupTypeP2P, NULL, groupName1, groupVisibilityPublic);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr2);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_INVALID_PARAMS, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
    LOGI("start P2P_GroupManage_0201-4");
    const char * createParamsStr3 = CreateGroupParams(groupTypeP2P, deviceId1, NULL, groupVisibilityPublic);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr3);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_JSON_GET, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(GroupManage_P2P, P2P_GroupManage_0202, TestSize.Level3)
{
    LOGI("start P2P_GroupManage_0202");
    LOGI("CreateGroup groupType is -1");
    const char * createParamsStr1 = CreateGroupParams(groupTpyeInvaild, deviceId1, groupName1, groupVisibilityPublic);
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr1);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_NULL_PTR, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}



HWTEST_F(GroupManage_P2P, P2P_GroupManage_0203, TestSize.Level3)
{
    LOGI("start P2P_GroupManage_0203");
    int groupVisibility[2] = {0, -1};
    int groupVisibilityError = 9;
    int *ret;
    const char *testAppName;
    const char * createParamsStr1;
    for(int i = 0; i < 2; i = i + 1)
    {
        string src1 = "testApp";
        string src2 = to_string(i);
        string src3 = src1 + src2;
        testAppName = src3.c_str();
        createParamsStr1 = CreateGroupParams(groupTypeP2P, deviceId1, groupName1, groupVisibility[i]);
        ret = CreateGroupTest(g_osAccountId1, g_requestId, testAppName ,createParamsStr1);
        printf("data:%d\n",ret[2]);
        ASSERT_EQ(ret[2] == ON_FINISH, true);
    }
    createParamsStr1 = CreateGroupParams(groupTypeP2P, deviceId1, groupName1, groupVisibilityError);
    ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr1);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_INVALID_PARAMS, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);
}

HWTEST_F(GroupManage_P2P, P2P_GroupManage_0301, TestSize.Level0)
{
    LOGI("start P2P_GroupManage_0301");
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char* deleteParamsStrNoExistGroupID = DeleteGroupParams(noExistGroupId);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deleteParamsStrNoExistGroupID);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_GROUP_NOT_EXIST, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);

    ret = DeleteGroupTest(g_testOsaccountUid2, g_requestId, g_appName, deleteParams);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_GROUP_NOT_EXIST, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);

    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deleteParams);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}

HWTEST_F(GroupManage_P2P, P2P_GroupManage_0302, TestSize.Level0)
{
    LOGI("start P2P_GroupManage_0302");
    const char *appNameNull = NULL;
    int32_t REQUEST_ID_NULL = NULL;
    int32_t TEST_OSACCOUNT_NULL = NULL;
    char *groupIdNull = NULL;
    int *ret = CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    ASSERT_EQ(ret[2] == ON_FINISH, true);

    char* deleteParamsStrNull = DeleteGroupParams(groupIdNull);
    ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deleteParamsStrNull);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_JSON_GET, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);

    ret = DeleteGroupTest(g_testOsaccountUid2, g_requestId, appNameNull, deleteParams);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_JSON_GET, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);

    ret = DeleteGroupTest(TEST_OSACCOUNT_NULL, REQUEST_ID_NULL, g_appName, deleteParams);
    printf("data:%d\n",ret[1]);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[1] == DEV_ERR_GROUP_NOT_EXIST, true);
    ASSERT_EQ(ret[2] == ON_ERROR, true);

    ret = DeleteGroupTest(g_osAccountId1, REQUEST_ID_NULL, g_appName, deleteParams);
    printf("data:%d\n",ret[2]);
    ASSERT_EQ(ret[2] == ON_FINISH, true);
}
}