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
#include "hc_log.h"
#include "cJSON.h"
// #include "nativetoken_kit.h"
// #include "token_setproc.h"
extern "C" {
#include "json_utils.h"
#include "device_auth.h"
#include "device_auth_define.h"
#include "device_auth_func.h"
}
using namespace testing::ext;
namespace {
const char *g_appName = "TestApp";
const char *g_appName1 = "TestApp1";
int32_t g_osAccountId1 = 10024;
int32_t g_osAccountId2 = 10025;
const char *g_normalGroupId = "BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DC0B";
const char *g_normalGroupId2 = "91393F0147E52CA5FD37DF9FF9C0CDE6D54EFFF7560E02DCF85B49F4A176EAFE";
const char *g_privateGroupId = "5DAEBA9E1AAC902979199D6A8B77367E85A5E1D9F397080FDC7B6B4BBFD4052A";
const char *g_appNameNull = NULL;
const char *g_groupIdNull = NULL;

const int JSON_INDEX = 0;
const char *g_groupid = "groupId";
int32_t g_osAccountNull = NULL;


class QueryP2P : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

void QueryP2P::SetUpTestCase()
{
    PrepareQueryData();
    SetAccessToken();
}

void QueryP2P::TearDownTestCase()
{
}

void QueryP2P::SetUp()
{
    InitEnv();
}

void QueryP2P::TearDown()
{
    DeInitTest();
}


/**
 * @tc.name: CREATE_GROUP_P2P.TC_CREATE_P2P_GROUP
 * @tc.desc: Use correct parameterss to createGroup;
 * @tc.type: FUNC
 * @tc.size:Level0
 */
HWTEST_F(QueryP2P, P2P_Query_0101, TestSize.Level1)
{
    LOGI("start P2P_Query_0101");
    char *groupInfo = GetGroupInfoByIdTest(g_osAccountId1, g_appName, g_normalGroupId);
    int ret = CompareInfo1(groupInfo, g_groupid, g_normalGroupId);
    printf("data:%d\n",ret);
    DestoryTest(groupInfo);
    ASSERT_EQ(ret == DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0102, TestSize.Level1)
{
    LOGI("start P2P_Query_0102");
    char *groupInfo = GetGroupInfoByIdTest(g_osAccountId1, g_appName1, g_privateGroupId);
    int ret = CompareInfo1(groupInfo, g_groupid, g_privateGroupId);
    printf("data:%d\n",ret);//-1
    DestoryTest(groupInfo);
    ASSERT_EQ(ret != DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0103, TestSize.Level1)
{
    LOGI("start P2P_Query_0103");
    char *groupInfo = GetGroupInfoByIdTest(g_osAccountId2, g_appName, g_normalGroupId);
    int ret = CompareInfo1(groupInfo, g_groupid, g_normalGroupId);
    printf("data:%d\n",ret);//-1
    DestoryTest(groupInfo);
    ASSERT_EQ(ret != DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0104, TestSize.Level1)
{
    LOGI("start P2P_Query_0103");
    char *groupInfo = GetGroupInfoByIdTest(g_osAccountNull, g_appName, g_normalGroupId);
    int ret = CompareInfo1(groupInfo, g_groupid, g_normalGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret != DEV_SUCCESS, true);

    groupInfo = GetGroupInfoByIdTest(g_osAccountId1, g_appNameNull, g_normalGroupId);
    ret = CompareInfo1(groupInfo, g_groupid, g_normalGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret != DEV_SUCCESS, true);

    groupInfo = GetGroupInfoByIdTest(g_osAccountId1, g_appName, g_groupIdNull);
    ret = CompareInfo1(groupInfo, g_groupid, g_normalGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret != DEV_SUCCESS, true);

    DestoryTest(groupInfo);
}

HWTEST_F(QueryP2P, P2P_Query_0201, TestSize.Level1)
{
    LOGI("start P2P_Query_0201");
    const char *queryParams = "{\"groupOwner\":\"TestApp\",\"groupName\":\"P2PGroup\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, queryParams);
    int ret = CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    printf("data:%d\n",ret);
    DestoryTest(groupInfo);
    ASSERT_EQ(ret == DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0202, TestSize.Level1)
{
    LOGI("start P2P_Query_0202");
    const char *queryParams = "{\"groupOwner\":\"TestApp1\",\"groupName\":\"P2PGroup\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName1, queryParams);
    int ret = CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId2);
    printf("data:%d\n",ret);
    DestoryTest(groupInfo);
    ASSERT_EQ(ret == DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0203, TestSize.Level1)
{
    LOGI("start P2P_Query_0203");
    const char *queryParams = "{\"groupOwner\":\"TestApp1\"}";
    char *groupInfo = GetGroupInfoTest(g_osAccountNull, g_appName, queryParams);
    int ret = CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    printf("data:%d\n",ret);//-1
    ASSERT_EQ(ret != DEV_SUCCESS, true);

    groupInfo = GetGroupInfoTest(g_osAccountId1, g_appNameNull, queryParams);
    ret = CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    printf("data:%d\n",ret);//-1
    ASSERT_EQ(ret != DEV_SUCCESS, true);

    DestoryTest(groupInfo);
}


HWTEST_F(QueryP2P, P2P_Query_0301, TestSize.Level1)
{
    LOGI("start P2P_Query_0301");
    int type = 256;
    char *groupInfo = GetJoinedGroupsTest(g_osAccountId1, g_appName, type);
    CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    int ret = GetResultItemNum(groupInfo);
    ASSERT_EQ(ret == 3, true);
    printf("data:%d\n",ret);
    DestoryTest(groupInfo);
}

HWTEST_F(QueryP2P, P2P_Query_0302, TestSize.Level1)
{
    LOGI("start P2P_Query_0302");
    int type = -1;
    char *groupInfo = GetJoinedGroupsTest(g_osAccountId1, g_appName, type);
    CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    int ret = GetResultItemNum(groupInfo);
    ASSERT_EQ(ret == 0, true);
    printf("data:%d\n",ret);
    DestoryTest(groupInfo);
}

HWTEST_F(QueryP2P, P2P_Query_0303, TestSize.Level1)
{
    LOGI("start P2P_Query_0303");
    int type = 256;
    int typeNull = NULL;
    char *groupInfo = GetJoinedGroupsTest(g_osAccountNull, g_appName, type);
    CompareInfo(groupInfo, g_groupid, JSON_INDEX, g_normalGroupId);
    int ret = GetResultItemNum(groupInfo);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == 0, true);

    groupInfo = GetJoinedGroupsTest(g_osAccountId1, g_appNameNull, type);
    ret = GetResultItemNum(groupInfo);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == 0, true);

    groupInfo = GetJoinedGroupsTest(g_osAccountId1, g_appName, typeNull);
    ret = GetResultItemNum(groupInfo);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == 0, true);

    DestoryTest(groupInfo);
}

HWTEST_F(QueryP2P, P2P_Query_0401, TestSize.Level1)
{
    LOGI("start P2P_Query_0401");
    int ret = CheckAccessToGroupTest(g_osAccountId1, g_appName1, g_normalGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == DEV_SUCCESS, true);
}

HWTEST_F(QueryP2P, P2P_Query_0402, TestSize.Level1)
{
    LOGI("start P2P_Query_0402");
    int ret = CheckAccessToGroupTest(g_osAccountId1, g_appName1, g_privateGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == DEV_ERR_ACCESS_DENIED, true);
}

HWTEST_F(QueryP2P, P2P_Query_0403, TestSize.Level1)
{
    LOGI("start P2P_Query_0403");
    int ret = CheckAccessToGroupTest(g_osAccountId2, g_appName, g_normalGroupId);
    printf("data:%d\n",ret);
    ASSERT_EQ(ret == DEV_ERR_ACCESS_DENIED, true);
}
}
