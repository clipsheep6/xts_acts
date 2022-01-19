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
#include <thread>
#include <vector>
#include <cstring>
#include <algorithm>
#include <list>
#include <iostream>
#include "network_manager_getBytes_test.h"
#include "interface_configuration.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "log.h"
#include "inet_addr.h"
#include "static_configuration.h"
#include "system_ability_definition.h"
#include "data_flow_statistics.h"
#include "i_net_stats_service.h"
#include "net_stats_csv.h"
#include "net_stats_client.h"
#include "timer.h"
#include "get_specific_net_test.h"
#include "net_conn_client.h"
#include "singleton.h"
#include "net_specifier.h"
#include "net_conn_constants.h"
#include "net_conn_types.h"
#include "net_mgr_log_wrapper.h"
#include "net_policy_constants.h"
#include "net_policy_client.h"
#include "net_policy_callback_test.h"
#include "network_manager_detection_test.h"
#include "common.h"
#include "network_manager_getaddressbyname_test.h"
#include "net_handle.h"
#include "i_net_conn_service.h"
#include "net_link_info.h"
#include "time_count_helper.h"
#include "network_manager_getallnets_test.h"

using namespace OHOS;
using namespace OHOS::NetManagerStandard;
static const int BYTES_DATA_NUM_0=0;
static const int TEST_COUNTS_1000 = 1000;
static const uint32_t SIZE_ZERO = 0;
namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number  Telephony_NetworkManager_GetCellularRxBytes_0200
 * @tc.name    The APP calls GetCellularRxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularRxBytes_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetCellularRxBytes();
        EXPECT_EQ(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetCellularTxBytes_0200
 * @tc.name    The APP calls GetCellularTxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularTxBytes_0200, Function | MediumTest | Level3)
{
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetCellularTxBytes();
        EXPECT_NE(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidRxBytes_0300
 * @tc.name    The APP calls GetUidRxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidRxBytes_0300, Function | MediumTest | Level3)
{
    int count;
    int app_uid=1123;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetUidRxBytes(app_uid);
        EXPECT_NE(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidTxBytes_0300
 * @tc.name    The APP calls GetUidTxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidTxBytes_0300, Function | MediumTest | Level3)
{
    int count;
    int app_uid=1123;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetUidRxBytes(app_uid);
        EXPECT_NE(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0600
 * @tc.name    The APP calls GetUidTxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0600, Function | MediumTest | Level3)
{
    int count;
    std::string iface = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetIfaceRxBytes(iface);
        EXPECT_EQ(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0600
 * @tc.name    The APP calls GetUidTxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0600, Function | MediumTest | Level3)
{
    int count;
    std::string iface = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret = flow->GetIfaceTxBytes(iface);
        EXPECT_EQ(ret,BYTES_DATA_NUM_0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllRxBytes_0200
 * @tc.name    The APP calls GetAllRxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllRxBytes_0200, Function | MediumTest | Level3)
{
    int count;
    std::string iface_cell = "usb0";
    std::string iface_wlan = "wlan0";
    std::string iface_eth = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret_usb=flow->GetIfaceRxBytes(iface_cell);
        long ret_wlan=flow->GetIfaceRxBytes(iface_wlan);
        long ret_eth=flow->GetIfaceRxBytes(iface_eth);
        long ret = flow->GetAllRxBytes();
        EXPECT_GE(ret,ret_usb+ret_wlan+ret_eth);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllTxBytes_0200
 * @tc.name    The APP calls GetAllTxBytes() TEST_COUNTS_1000 times,
               each time successfully returning data (>=BYTES_DATA_NUM_0)
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllTxBytes_0200, Function | MediumTest | Level3)
{
    int count;
    std::string iface_cell = "usb0";
    std::string iface_wlan = "wlan0";
    std::string iface_eth = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
        long ret_usb=flow->GetIfaceRxBytes(iface_cell);
        long ret_wlan=flow->GetIfaceRxBytes(iface_wlan);
        long ret_eth=flow->GetIfaceRxBytes(iface_eth);
        long ret = flow->GetAllRxBytes();
        EXPECT_GE(ret,ret_usb+ret_wlan+ret_eth);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0500
 * @tc.name    Test GetDefaultNet() 1000 times, each time can successfully return data
 * @tc.desc    Reliability test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0500, Function | MediumTest | Level3)
{
    int count;
    NetHandle netHandle;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
        ASSERT_EQ(ret, NET_CONN_SUCCESS);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_HasDefaultNet_0400
 * @tc.name    Test HasDefaultNet() 1000 times, each time successfully returning data
 * @tc.desc    Reliability test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_HasDefaultNet_0400, Function | MediumTest | Level3)
{
    int count;
    bool flag = false;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->HasDefaultNet(flag);
        ASSERT_EQ(ret, NET_CONN_SUCCESS);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1200
 * @tc.name    APP call RegisterNetPolicyCallback () 1000 times, each time all can successfully returns ERR_NONE
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1200, Function | MediumTest | Level3)
{
    sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
         int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
        EXPECT_EQ(result, ERR_NONE);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0300
 * @tc.name    APP call RegisterNetPolicyCallback () 1000 times, each time all can successfully returns ERR_NONE
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0300, Function | MediumTest | Level3)
{
    sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
         int32_t result = DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
        EXPECT_EQ(result, ERR_NONE);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0800
 * @tc.name    Test NetDetection() test is executed TEST_COUNTS_1000 times,
 *             NET_CONN_SUCCESS is successfully returned each time.
 * @tc.desc    Function test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0800, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    std::list<sptr<NetHandle>> netList;
    netConnClient->GetAllNets(netList);
    std::cout << "netIdList size:" << netList.size() << std::endl;
    for (sptr<NetHandle> netHandler : netList) {
        NetAllCapabilities netAllCap;
        netConnClient->GetNetCapabilities(*netHandler, netAllCap);
        std::cout << netAllCap.ToString("|") << std::endl;
        if (netAllCap.bearerTypes_.find(BEARER_ETHERNET) == netAllCap.bearerTypes_.end()) {
            continue;
        }
        int count;
        for (count = 0; count < TEST_COUNTS_1000; ++count) {
            int32_t ret = netConnClient->NetDetection(*netHandler);
            ASSERT_EQ(ret, NET_CONN_SUCCESS);
       }
    }
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2600
 * @tc.name    Enter the parameters NetBearType to 3 and netCapabilities to 12.
 *             Call RegisterNetConnCallback() to activate the network 1000 times, returning 0 for each success
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2600, Function | MediumTest | Level3)
{
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_ETHERNET);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    for (int32_t count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
        EXPECT_EQ(ret,0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2700
 * @tc.name    RegisterNetConnCallback() is called to activate the default network 1000 times, returning 0 on each success
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2700, Function | MediumTest | Level3)
{
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    for (int32_t count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
        EXPECT_EQ(ret,0);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_UnRegisterNetConnCallback_0400
 * @tc.name    Call UnRegisterNetConnCallback (1000 times), failed to activate, check the return value is 5
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_UnRegisterNetConnCallback_0400, Function | MediumTest | Level3)
{
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    for (int32_t count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
        EXPECT_EQ(ret,-5);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0300
 * @tc.name    Test GetAddressesByName() 1000 times and return data successfully each time
 * @tc.desc    Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressesByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.csdn.net";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    int count;
    bool flag = true;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        int32_t result = handler->GetAddressesByName(host, addrList);
        if (result != NETMANAGER_SUCCESS) {
            flag = false;
            break;
        }
    }
    ASSERT_TRUE(flag);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0300
 * @tc.name	   Test GetAddressByName() 1000 times and return data successfully each time
 * @tc.desc    Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_GetAddressByName_0300, Function | MediumTest | Level3)
{
    std::string host = "www.taobao.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    int count;
    bool flag = true;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        int32_t result = handler->GetAddressByName(host, addr);
        if (result != NETMANAGER_SUCCESS) {
            flag = false;
            break;
        }
    }
    ASSERT_TRUE(flag);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0300
 * @tc.name    Test BindSocket() 1000 times and return data successfully each time
 * @tc.desc    Function test
 */
HWTEST_F(NetHandlerTest, Telephony_NetworkManager_BindSocket_0300, Function | MediumTest | Level3)
{
    int32_t socket_fd = 1;
    uint32_t netId = NETID_100;
    int count;
    bool flag = true;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        int32_t result = handler->BindSocket(socket_fd);
        if (result != NETMANAGER_SUCCESS) {
            flag = false;
            break;
        }
    }
    ASSERT_TRUE(flag);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllNets_0300
 * @tc.name    Test GetAllNets () to obtain all the networks 1000 times, each time successfully
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetAllNets_0300, Performance | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;

    int count;
    std::list<sptr<NetHandle>> netIdList;
    for (count = 0; count < TEST_COUNT_1000; count++) {
        int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
        ASSERT_EQ(result, NET_CONN_SUCCESS);
        ASSERT_NE(SIZE_ZERO, netIdList.size());
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetConnectionProperties_0300
 * @tc.name    Test GetConnectionProperties () to get all networks 1000 times, each time successfully
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetConnectionProperties_0300, Performance | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;
    std::list<sptr<NetHandle>> netIdList;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    std::cout << "TestGetAllNets ret:" << ret << std::endl;

    int count;
    NetLinkInfo info;
    int32_t result;
    for (count = 0; count < TEST_COUNT_1000; count++) {
        if(!netIdList.empty()){
            result = DelayedSingleton<NetConnClient>::GetInstance()->GetConnectionProperties(*(netIdList.front()), info);
        }
        ASSERT_EQ(result, NET_CONN_SUCCESS);
        ASSERT_TRUE(!info.ifaceName_.empty());
    }
}

/*
 * @tc.number  Telephony_NetworkManager_GetNetCapabilities_0300
 * @tc.name    Test GetNetCapabilities() to get all the networks 1000 times and return data successfully each time
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetNetCapabilities_0300, Performance | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;
    std::list<sptr<NetHandle>> netIdList;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    std::cout << "TestGetAllNets ret:" << ret << std::endl;

    int count;
    NetAllCapabilities cap;
    int32_t result;
    for (count = 0; count < TEST_COUNT_1000; count++) {
        if(!netIdList.empty()){
            result = DelayedSingleton<NetConnClient>::GetInstance()->GetNetCapabilities(*(netIdList.front()), cap);
        }
        ASSERT_EQ(result, NET_CONN_SUCCESS);
        ASSERT_TRUE(!cap.netCaps_.empty());
    }
}

}
}