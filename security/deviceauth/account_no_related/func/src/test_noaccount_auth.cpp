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
extern "C"
{
#include "device_auth_socket.h"
#include "device_auth_func.h"
}

using namespace testing::ext;
using namespace std;
namespace {
    int32_t g_osAccountId1 = 10024;
    int32_t g_osAccountId2 = 10025;
    int32_t g_requestId = 10;
    int32_t g_requestId1 = 11;
    const char *g_appName = "TestApp";
    const char *g_appNameError = "TestAppERROR";
    const char *g_appName2 = "TestApp2";
    const char *g_pinCode = "123456";
    const char *g_errorPinCode = "111111";
    const int g_groupType1 = 256;
    const int GROUP_TYPE_P2P_ERROR = -1;
    const char *g_connectParams = NULL;
    const char *g_groupName1 = "P2PGroup";
    const int GROUP_VISIBILITY_PUBLIC = -1;
    const char *g_createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
    const char *g_queryParams = "{\"groupOwner\":\"TestApp\"}";
    const char *g_queryParams2 = "{\"groupOwner\":\"TestApp2\"}";
    const char *g_groupId;

    const int32_t TEST_OSACCOUNT_NULL = NULL;
    const char *g_appNameNull = nullptr;
    const char *g_authIdNull = nullptr;
    // const char *g_null = NULL;

    const char *g_groupIdError = "BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DCA0";
    const char *g_groupIdNull = nullptr;
    const char *g_deviceIdError = "1FA5B42ADEB61D7D8084B2148AF18FA5516CC66FA62E15BF65EFA16336052222";

    const char *g_authId;
    const char *g_peerDeviceIdError = "004FB07744533F00E763EEBB3194F9E183989AAF1502D3C86F31251973C08000";
    bool g_isClient = true;
    bool g_isDeviceLevel = false;
    int g_sockfd;

    class DistributeP2P : public testing::Test {
    public:
        static void SetUpTestCase(void);

        static void TearDownTestCase(void);

        void SetUp();

        void TearDown();
    };

    void DistributeP2P::SetUpTestCase()
    {
        SetAccessToken();
        const char *ip = "192.168.1.11";
        const int port = 15051;
        g_sockfd = InitClient(ip, port);
        sleep(2);
        DeleteDatabase();
    }

    void DistributeP2P::TearDownTestCase()
    {
        CloseClient(g_sockfd);
    }

    void DistributeP2P::SetUp()
    {
        ToServerInit(g_sockfd);
        InitEnv();
        CreateGroupTest(g_osAccountId1, g_requestId, g_appName, g_createParamsStr);
        char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
        g_groupId = GetGroupIdfromData(groupInfo);
        sleep(1);
    }

    void DistributeP2P::TearDown()
    {
        ToServerDeleteGroup(g_sockfd);
        char *deletParamsStr = DeleteGroupParams(g_groupId);
        DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
        ToServerDestroy(g_sockfd);
        Destory();
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0101, TestSize.Level0)
    {
        LOGI("P2P_DeviceBand_0101");
        printf("start add member");
        printf("g_groupId:%s", g_groupId);
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);

        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
        FreeTmpStr();
        printf("end add member");
        g_authId = GetPeerDeviceId(g_sockfd);
        printf("g_authId:%s", g_authId);
        const char *authParamsStr = AuthParams(g_authId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret[2]);
        FreeTmpStr();
        char *deletParamsStr = DeleteParams(g_authId, g_groupId, false);
        ret = TestCoDelete(g_osAccountId1, g_requestId, g_appName, deletParamsStr, g_sockfd);
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 1, true);
        printf("deviceNum:%d\n", deviceNum);
    }

    HWTEST_F(DistributeP2P, P2P_GroupManage_0304, TestSize.Level3)
    {
        LOGI("P2P_GroupManage_0304");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);
        printf("star delete\n");
        char *deletParamsStr = DeleteGroupParams(g_groupId);
        ret = DeleteGroupTest(g_osAccountId1, g_requestId, g_appName, deletParamsStr);
        sleep(2);
        printf("star delete\n");
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBind_0102, TestSize.Level3)
    {
        LOGI("P2P_DeviceBind_0102");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_errorPinCode, g_connectParams);
        int *ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, BIND, g_sockfd);
        const char *serverData = RecvData(g_sockfd);
        ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, BIND, g_sockfd);
        serverData = RecvData(g_sockfd);
        ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, BIND, g_sockfd);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBind_0103, TestSize.Level3)
    {
        LOGI("P2P_DeviceBind_0103");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, ERRORFIRSTMESSAGE,
            g_sockfd);
        const char *serverData = RecvData(g_sockfd);
        ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, ERRORSECONDMESSAGE, g_sockfd);
        serverData = RecvData(g_sockfd);
        ret = GMProcessData((int64_t)GetReqIdFromData(serverData), serverData, ERRORSECONDMESSAGE, g_sockfd);
        serverData = RecvData(g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 1, true);
        printf("deviceNum:%d\n", deviceNum);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBind_0105, TestSize.Level3)
    {
        LOGI("P2P_DeviceBind_0105");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int ret = DuplicateMessage(g_osAccountId1, g_requestId1, g_appName, addParamsStr, g_sockfd);
        printf("ret:%d\n", ret);
        ASSERT_EQ(ret == 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0107, TestSize.Level3)
    {
        LOGI("P2P_DeviceBand_0107");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);

        ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0108, TestSize.Level3)
    {
        LOGI("P2P_DeviceBind_0108");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = AddMemberTest(g_osAccountId2, g_requestId, g_appName, addParamsStr, BIND, g_sockfd);
        printf("ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId2, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0201, TestSize.Level1)
    {
        LOGI("P2P_DeviceBind_0201");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = AddMemberTest(g_osAccountId1, g_requestId, NULL, addParamsStr, BIND, g_sockfd);
        printf("bind ret:%d\n", ret[0]);
        printf("bind ret:%d\n", ret[2]);
        ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, NULL, BIND, g_sockfd);
        printf("bind ret:%d\n", ret[0]);
        printf("bind ret:%d\n", ret[2]);
        addParamsStr = AddParams(NULL, g_groupType1, g_pinCode, g_connectParams);
        ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, BIND, g_sockfd);
        printf("bind ret:%d\n", ret[0]);
        printf("bind ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0202, TestSize.Level1)
    {
        LOGI("P2P_DeviceBand_0202");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupIdError, g_groupType1, g_pinCode, g_connectParams);
        int *ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, BIND, g_sockfd);
        printf("bind ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0203, TestSize.Level1)
    {
        LOGI("P2P_DeviceBand_0203");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, GROUP_TYPE_P2P_ERROR, g_pinCode, g_connectParams);
        // int *ret = AddMemberTest(g_osAccountId1, g_requestId, g_appName, addParamsStr, BIND, g_sockfd);
        // const char *recvData = RecvData(g_sockfd);
        // ret = GMProcessData((int64_t)10, recvData, BIND, g_sockfd);
        // recvData = RecvData(g_sockfd);
        // printf("bind ret:%d\n", ret[2]);
        TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0204, TestSize.Level1)
    {   
        LOGI("P2P_DeviceBand_0204");
        printf("start add member");
        const char *data = "{\"\":\"\"}";
        int *ret = GMProcessData((int64_t)g_requestId, data, BIND, g_sockfd);
        printf("bind ret:%d\n", ret[0]);
        ASSERT_EQ(ret[0] == 8195, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0301, TestSize.Level1)
    {
        LOGI("P2P_DeviceBand_0301");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);

        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        char *deletParamsStr = DeleteParams(peerDeviceId, g_groupId, false);
        ret = TestCoDelete(g_osAccountId1, g_requestId, g_appName, deletParamsStr, g_sockfd);

        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 1, true);
        printf("deviceNum:%d\n", deviceNum);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0302, TestSize.Level3)
    {
        LOGI("P2P_DeviceBand_0302");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);
        ToServerDeleteGroup(g_sockfd);
        ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0303, TestSize.Level3)
    {
        LOGI("P2P_DeviceBand_0303");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        char *deletParamsStr = DeleteParams(peerDeviceId, g_groupId, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0401, TestSize.Level1)
    {
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *peerDeviceIdNull = nullptr;
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        char *deletParamsStr = DeleteParams(peerDeviceIdNull, g_groupId, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);

        const char *groupIdError = nullptr;
        deletParamsStr = DeleteParams(peerDeviceId, groupIdError, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);

        const char *testAppNameNull = nullptr;
        deletParamsStr = DeleteParams(peerDeviceId, g_groupId, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, testAppNameNull, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0402, TestSize.Level4)
    {
        LOGI("P2P_DeviceBand_0402");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        char *deletParamsStr = DeleteParams(peerDeviceId, g_groupIdError, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0403, TestSize.Level3)
    {
        LOGI("P2P_DeviceBand_0403");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        char *deletParamsStr = DeleteParams(g_peerDeviceIdError, g_groupIdError, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_DeviceBand_0405, TestSize.Level4)
    {
        LOGI("P2P_DeviceBand_0405");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *peerDeviceId = GetLocalDeviceId();
        char *deletParamsStr = DeleteParams(peerDeviceId, g_groupIdError, true);
        ret = DeleteMemberTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0103, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0103");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        g_authId = GetPeerDeviceId(g_sockfd);
        printf("g_authId:%s", g_authId);
        const char *authParamsStr = AuthParams(g_authId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);


        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTHERRMESSFIRST, g_sockfd);
        const char *recvData = RecvData(g_sockfd);
        ret = ProcessAuthData((int64_t)GetReqIdFromData(recvData), recvData, AUTHERRMESSSECOND, g_sockfd);
        recvData = RecvData(g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] != ON_FINISH, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0104, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0104");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *clientFirstMessage = "{\"authForm\":0,\"payload\":{\"isoSalt\":\"9F2C02114E84E6C0096D04F20906"
        "2EFB\",\"peerAuthId\":\"35343441453839304646383636343743434233454435343132424341444441363445383032384438"
        "464138384343324245433343453030394630453844463331\",\"operationCode\":2,\"seed\":\"97A5170C87CB2025294FD7"
        "B151FA3111E529812EE098BF6CC0D9DD0D9AF7722E\",\"peerUserType\":0,\"pkgName\":\"com.huawei.devicegroupmana"
        "ge\",\"serviceType\":\"BC680ED1137A5731F4A5A90B1AACC4A0A3663F6FC2387B7273EFBCC66A54DC0B\",\"keyLength\":"
        "32,\"support256mod\":false,\"version\":{\"minVersion\":\"1.0.0\",\"currentVersion\":\"2.0.26\"}},\"messag"
        "e\":17,\"groupAndModuleVersion\":\"2.0.1\",\"isDeviceLevel\":false, \"opercode\":210}";
        SendData(g_sockfd, clientFirstMessage);
        const char *recvData = RecvData(g_sockfd);
        int errorMsg = GetErrorMsg(recvData);
        printf("errorMsg:%d\n", errorMsg);
        ASSERT_EQ(errorMsg == 32896, true);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0105, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0105");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        g_authId = GetPeerDeviceId(g_sockfd);
        printf("g_authId:%s", g_authId);
        const char *authParamsStr = AuthParams(g_authId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId2, g_requestId, authParamsStr, AUTH, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0106, TestSize.Level3)
    {
        LOGI("P2P_GroupAuth_0106");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *createParamsStr = CreateGroupParams(g_groupType1, NULL, g_groupName1, GROUP_VISIBILITY_PUBLIC);
        CreateGroupTest(g_osAccountId2, g_requestId, g_appName, createParamsStr);

        char *groupInfo = GetGroupInfoTest(g_osAccountId1, g_appName, g_queryParams);
        g_groupId = GetGroupIdfromData(groupInfo);

        addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        ret = TestBind(g_osAccountId2, g_requestId, g_appName, addParamsStr, g_sockfd);
        deviceNum = GetTrustedDevicesTest(g_osAccountId2, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        g_authId = GetPeerDeviceId(g_sockfd);
        printf("g_authId:%s", g_authId);
        const char *authParamsStr = AuthParams(g_authId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);

        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);

        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);

        ret = TestAuth(g_osAccountId2, g_requestId, authParamsStr, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[2]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_FINISH, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0201, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0201");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        ret = AuthDeviceTest(g_osAccountId1, g_requestId, NULL, AUTH, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[0] == ON_ERROR, true);

        const char *authParamsStr1 = AuthParams(NULL, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr1, AUTH, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);

        authParamsStr1 = AuthParams(g_authId, NULL, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr1, AUTH, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0202, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0202");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *authParamsStr1 = AuthParams(g_peerDeviceIdError, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr1, AUTH, g_sockfd);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] == ON_ERROR, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0203, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0203");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);
        double sleepTime = 3.0;
        WaitTime(sleepTime);
        ToServerDeleteGroup(g_sockfd);

        WaitTime(sleepTime);
        g_authId = GetPeerDeviceId(g_sockfd);
        printf("g_authId:%s", g_authId);
        const char *authParamsStr = AuthParams(g_authId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr, AUTH, g_sockfd);
        const char *recvData = RecvData(g_sockfd);
        int errorMsg = GetErrorMsg(recvData);
        printf("errorMsg:%d\n", errorMsg);
        ASSERT_EQ(errorMsg == 32896, true);
    }

    HWTEST_F(DistributeP2P, P2P_GroupAuth_0204, TestSize.Level4)
    {
        LOGI("P2P_GroupAuth_0204");
        printf("start add member");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        printf("deviceNum:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 2, true);

        const char *localDevice = GetLocalDeviceId();
        const char *authParamsStr1 = AuthParams(localDevice, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = AuthDeviceTest(g_osAccountId1, g_requestId, authParamsStr1, AUTH, g_sockfd);
        const char *serverData = RecvData(g_sockfd);
        ret = ProcessAuthData((int64_t)GetReqIdFromData(serverData), serverData, AUTH, g_sockfd);
        sleep(1);
        printf("TestCoDelete ret:%d\n", ret[0]);
        printf("TestCoDelete ret:%d\n", ret[2]);
        ASSERT_EQ(ret[2] != ON_FINISH, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0401, TestSize.Level1)
    {
        LOGI("P2P_Query_0401");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
        printf("end add member");
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        const char *authParamsStr = AuthParams(peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret[2]);
        char *groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appName, g_deviceIdError, g_groupId);
        ASSERT_EQ(groupInfo == NULL, true);
        groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appName, peerDeviceId, g_groupIdError);
        ASSERT_EQ(groupInfo == NULL, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0402, TestSize.Level2)
    {
        LOGI("P2P_Query_0402");
        int *hjx2 = CreateGroupTest(g_osAccountId2, g_requestId, g_appName, g_createParamsStr);
        printf("----------------------------hjx2 = %d----------------------------", hjx2[2]);
        char *groupInfo2 = GetGroupInfoTest(g_osAccountId2, g_appName, g_queryParams);
        const char *groupId2 = GetGroupIdfromData(groupInfo2);

        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
        printf("end add member");
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        const char *authParamsStr = AuthParams(peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret[2]);

        const char *addParamsStr2 = AddParams(groupId2, g_groupType1, g_pinCode, g_connectParams);
        int *ret2 = TestBind(g_osAccountId2, g_requestId, g_appName, addParamsStr2, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret2[2]);
        sleep(30);
        uint32_t deviceNum2 = GetTrustedDevicesTest(g_osAccountId2, g_appName, groupId2);
        ASSERT_EQ(deviceNum2 == 2, true);
        printf("deviceNum2:%d\n", deviceNum2);
        printf("end add member");
        ret = TestAuth(g_osAccountId2, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret2[2]);

        char *groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appName, peerDeviceId, g_groupId);
        printf("--------------------------------groupInfo:%s", groupInfo);
        ASSERT_EQ(groupInfo != NULL, true);

        char *groupInfo3 = GetDeviceInfoByIdTest(g_osAccountId2, g_appName, peerDeviceId, groupId2);
        printf("--------------------------------groupInfo3:%s", groupInfo3);
        ASSERT_EQ(groupInfo != NULL, true);

        char *deletParamsStr = DeleteGroupParams(groupId2);
        DeleteGroupTest(g_osAccountId2, g_requestId, g_appName, deletParamsStr);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0403, TestSize.Level3)
    {
        LOGI("P2P_Query_0403");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
        printf("end add member");
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        const char *authParamsStr = AuthParams(peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret[2]);
        WaitTime(2);
        DoubleCallBack(g_appName2);
        ToServerReg(g_sockfd, g_appName2);
        int *hjx2 = CreateGroupTest(g_osAccountId1, g_requestId, g_appName2, g_createParamsStr);
        printf("-----------------------------hjx2 = %d ------------------------------\n", hjx2[2]);
        char *groupInfo2 = GetGroupInfoTest(g_osAccountId1, g_appName2, g_queryParams2);
        const char *groupId2 = GetGroupIdfromData(groupInfo2);

        const char *addParamsStr2 = AddParams(groupId2, g_groupType1, g_pinCode, g_connectParams);
        int *ret2 = TestBind(g_osAccountId1, g_requestId, g_appName2, addParamsStr2, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret2[2]);
        sleep(2);
        uint32_t deviceNum2 = GetTrustedDevicesTest(g_osAccountId1, g_appName2, groupId2);
        ASSERT_EQ(deviceNum2 == 2, true);
        printf("deviceNum2:%d\n", deviceNum2);
        printf("end add member");

        char *groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appName, peerDeviceId, g_groupId);
        printf("--------------------------------groupInfo:%s", groupInfo);
        ASSERT_EQ(groupInfo != NULL, true);

        char *groupInfo3 = GetDeviceInfoByIdTest(g_osAccountId1, g_appName2, peerDeviceId, groupId2);
        printf("--------------------------------groupInfo3:%s", groupInfo3);

        char *deletParamsStr = DeleteGroupParams(groupId2);
        DeleteGroupTest(g_osAccountId1, g_requestId, g_appName2, deletParamsStr);

        DoubleCallBack(g_appName);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0404, TestSize.Level3)
    {
        LOGI("P2P_Query_0404");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupId);
        ASSERT_EQ(deviceNum == 2, true);
        printf("deviceNum:%d\n", deviceNum);
        printf("end add member");
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        const char *authParamsStr = AuthParams(peerDeviceId, g_appName, g_isClient, g_isDeviceLevel, NULL, 0, NULL);
        ret = TestAuth(g_osAccountId1, g_requestId, authParamsStr, g_sockfd);
        printf("ret:%d", ret[2]);

        char *groupInfo = GetDeviceInfoByIdTest(TEST_OSACCOUNT_NULL, g_appName, peerDeviceId, g_groupId);
        printf("--------------------------------TEST_OSACCOUNT_NULL:%s\n", groupInfo);
        ASSERT_EQ(groupInfo == NULL, true);
        groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appNameNull, peerDeviceId, g_groupId);
        printf("--------------------------------g_appNameNull:%s\n", groupInfo);
        ASSERT_EQ(groupInfo == NULL, true);
        groupInfo = GetDeviceInfoByIdTest(g_osAccountId1, g_appName, g_authIdNull, g_groupId);
        printf("--------------------------------g_authIdNull:%s\n", groupInfo);
        ASSERT_EQ(groupInfo == NULL, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0504, TestSize.Level3)
    {
        LOGI("P2P_Query_0504");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        int res = CheckAccessToGroupTest(g_osAccountId1, g_appName, g_groupId);
        printf("-------------------------normal:%d\n", res);
        ASSERT_EQ(res == 0, true);

        res = CheckAccessToGroupTest(TEST_OSACCOUNT_NULL, g_appName, g_groupId);
        printf("-------------------------TEST_OSACCOUNT_NULL:%d\n", res);
        ASSERT_EQ(res != 0, true);

        res = CheckAccessToGroupTest(g_osAccountId1, g_appNameNull, g_groupId);
        printf("-------------------------g_appNameNull:%d\n", res);
        ASSERT_EQ(res != 0, true);

        res = CheckAccessToGroupTest(g_osAccountId1, g_appName, g_groupIdNull);
        printf("-------------------------g_groupIdNull:%d\n", res);
        ASSERT_EQ(res != 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0602, TestSize.Level3)
    {
        LOGI("P2P_Query_0602");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        uint32_t deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appNameError, g_groupIdError);
        ASSERT_EQ(deviceNum == 0, true);
        printf("-------------------------g_groupIdError:%d\n", deviceNum);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0603, TestSize.Level3)
    {
        LOGI("P2P_Query_0603");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        uint32_t deviceNum = GetTrustedDevicesTest(TEST_OSACCOUNT_NULL, g_appName, g_groupId);
        printf("-------------------------g_groupIdError:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 0, true);
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appNameNull, g_groupId);
        printf("-------------------------g_groupIdError:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 0, true);
        deviceNum = GetTrustedDevicesTest(g_osAccountId1, g_appName, g_groupIdNull);
        printf("-------------------------g_groupIdError:%d\n", deviceNum);
        ASSERT_EQ(deviceNum == 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0604, TestSize.Level3)
    {
        LOGI("P2P_Query_0604");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        bool res = IsDeviceInGroupTest(g_osAccountId1, g_appName, g_groupId, peerDeviceId);
        printf("-------------------------normal:%d\n", res);
        ASSERT_EQ(res == 1, true);
        res = IsDeviceInGroupTest(TEST_OSACCOUNT_NULL, g_appName, g_groupId, peerDeviceId);
        printf("-------------------------TEST_OSACCOUNT_NULL:%d\n", res);
        ASSERT_EQ(res == 0, true);
        res = IsDeviceInGroupTest(g_osAccountId1, g_appNameNull, g_groupId, peerDeviceId);
        printf("-------------------------g_appNameNull:%d\n", res);
        ASSERT_EQ(res == 0, true);
        res = IsDeviceInGroupTest(g_osAccountId1, g_appName, g_groupIdNull, peerDeviceId);
        printf("-------------------------g_groupIdNull:%d\n", res);
        ASSERT_EQ(res == 0, true);
        res = IsDeviceInGroupTest(g_osAccountId1, g_appName, g_groupId, g_authIdNull);
        printf("-------------------------g_authIdNull:%d\n", res);
        ASSERT_EQ(res == 0, true);
    }

    HWTEST_F(DistributeP2P, P2P_Query_0605, TestSize.Level3)
    {
        LOGI("P2P_Query_0605");
        const char *addParamsStr = AddParams(g_groupId, g_groupType1, g_pinCode, g_connectParams);
        int *ret = TestBind(g_osAccountId1, g_requestId, g_appName, addParamsStr, g_sockfd);
        const char *peerDeviceId = GetPeerDeviceId(g_sockfd);
        printf("----------------------------BINDret = %d----------------------------", ret[2]);
        bool res = IsDeviceInGroupTest(g_osAccountId1, g_appNameError, g_groupId, peerDeviceId);
        printf("-------------------------normal:%d\n", res);
        ASSERT_EQ(res == 1, true);

        res = IsDeviceInGroupTest(g_osAccountId1, g_appName, g_groupIdError, peerDeviceId);
        printf("-------------------------g_groupIdError:%d\n", res);
        ASSERT_EQ(res == 0, true);

        res = IsDeviceInGroupTest(g_osAccountId1, g_appName, g_groupId, g_deviceIdError);
        printf("-------------------------g_deviceIdError:%d\n", res);
        ASSERT_EQ(res == 0, true);
    }
}