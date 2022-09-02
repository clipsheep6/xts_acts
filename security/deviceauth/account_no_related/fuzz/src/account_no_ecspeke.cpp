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
#include <sys/types.h>
#include <dirent.h>

// #include "hc_log.h"

extern "C" {
// #include "json_utils.h"
#include "device_auth.h"
#include "device_auth_define.h"
#include "device_auth_func.h"
}

using namespace testing::ext;
using namespace std;
namespace {
const char *g_appName = "TestApp";
int32_t g_requestId = 123;
int32_t g_osAccountId1 = 100;
const int groupTypeP2P = 256;
const char *g_pinCode = "123456";
const char *g_queryParams = "{\"groupOwner\":\"TestApp\"}";
const char *g_connectParams = nullptr;

const char *g_normalGroupId = "BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DC0B";
const char *deviceId1 = "3C58C27533D8";
const char *groupName1 = "P2PGroup";
const int groupVisibilityPublic = -1;
const char *createParamsStr = CreateGroupParams(groupTypeP2P, deviceId1, groupName1, groupVisibilityPublic);
const char *deleteParams = DeleteGroupParams(g_normalGroupId);
const char *g_groupId;
const int g_sockfd = -1;


class GroupManage_P2P : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

void GroupManage_P2P::SetUpTestCase()
{
}

void GroupManage_P2P::TearDownTestCase()
{
}

void GroupManage_P2P::SetUp()
{
    SetAccessToken();
    InitEnv();
    CreateGroupTest(g_osAccountId1, g_requestId, g_appName ,createParamsStr);
    char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
    g_groupId = GetGroupIdfromData(groupInfo);
}

void GroupManage_P2P::TearDown()
{
    char *deletParamsStr = DeleteGroupParams(g_groupId);
    DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
    DeInitTest();
}


/**
 * @tc.name: GroupManage_P2P.P2P_ CreateGroup_0101
 * @tc.desc: Use correct parameterss to createGroup;
 * @tc.type: FUNC
 * @tc.size:Level0
 */
HWTEST_F(GroupManage_P2P, SEC_DevAuth_Account_Reliability_0102, TestSize.Level0)
{
    printf("open messager dir\n");
    DIR *dir = NULL;//打开目录文件
    if ((dir = opendir("/data/test/message")) == NULL) {
    printf("opendir failed!");
    return;
    }
    struct dirent *entry;
    printf("start read\n");
    while((entry = readdir(dir))!= NULL)
    {
        printf("read message\n");
        if(strstr(entry->d_name,".txt"))
        {
            char dirPath[50] = "/data/test/message/";
            printf("%s\n", entry->d_name);
            char buff[2048];
            FILE *fp = NULL;
            // client 第一发报文 发起绑定
            const char *addParamsStr = AddParams(g_groupId, groupTypeP2P, g_pinCode, g_connectParams);
            AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, ERRORFIRSTMESSAGE,
                    g_sockfd);
            // server 第一发报文
            const char *serverFirstMessage = "{\"payload\":{\"salt\":\"3AFB3F5165C0E308DD59357F7A508E50\",\"epk\":\"7E3D8F2CCA"
            "5FFB9749F50F62B3EE5C7EA35E0F2E017209F53DA75B8482508B7D\",\"challenge\":\"9075F44D5811F636C476F0348F317B75\","
            "\"version\":{\"minVersion\":\"1.0.0\",\"currentVersion\":\"2.0.26\"}},\"message\":32769,"
            "\"groupAndModuleVersion\":\"2.0.1\",\"groupId\":\"BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54D"
            "C0B\",\"groupName\":\"P2PGroup\",\"groupOp\":2,\"groupType\":256,\"peerDeviceId\":\"004FB07744533F00E763EEBB3194F"
            "9E183989AAF1502D3C86F31251973CB8F7F\",\"connDeviceId\":\"004FB07744533F00E763EEBB3194F9E183989AAF1502D3C86F312519"
            "73CB8F7F\",\"appId\":\"TestApp\",\"requestId\":\"123\",\"ownerName\":\"\"}";
            // client 处理并回复
            GMProcessData((int64_t)GetReqIdFromData(serverFirstMessage), serverFirstMessage, BIND, g_sockfd);
            // server 第二发报文
            fp = fopen(strcat(dirPath, entry->d_name), "r");
            fgets(buff, 2048, (FILE*)fp);
            const char *serverSecondMessage = buff;
            printf("server second message: %s\n", serverSecondMessage );
            // client 处理并回复
            GMProcessData((int64_t)GetReqIdFromData(serverSecondMessage), serverSecondMessage, BIND, g_sockfd);
            fclose(fp);
        }
    }




}

}