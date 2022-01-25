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

#include "network_manager_test.h"
#include "get_specific_net_test.h"
#include "net_policy_callback_test.h"
#include "network_manager_getBytes_test.h"
#include "network_manager_detection_test.h"
#include "network_manager_getallnets_test.h"
#include "network_manager_getaddressbyname_test.h"
#include "network_manager_register_netconn_callback_test.h"

#include <thread>
#include <vector>
#include <cstring>
#include <iostream>
#include <gtest/gtest.h>

#include "net_policy_client.h"
#include "net_policy_service.h"
#include "interface_configuration.h"
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "log.h"
#include "inet_addr.h"
#include "time_count_helper.h"
#include "condition_lock.h"
#include "static_configuration.h"
#include "system_ability_definition.h"
#include "data_flow_statistics.h"
#include "i_net_stats_service.h"
#include "net_stats_csv.h"
#include "net_stats_client.h"
#include "timer.h"
#include "net_conn_client.h"
#include "singleton.h"
#include "net_specifier.h"
#include "net_conn_constants.h"
#include "net_conn_types.h"
#include "net_policy_client.h"
#include "net_mgr_log_wrapper.h"
#include "net_policy_constants.h"
#include "net_handle.h"
#include "i_net_conn_service.h"
#include "net_link_info.h"
#include "time_count_helper.h"
#include "test_net_conn_callback.h"

using namespace OHOS;
using namespace OHOS::NetManagerStandard;
static const int TEST_COUNTS_1000 = 1000;
static const int32_t TIME_USEC = 1000;
namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number  Telephony_NetworkManager_GetCellularRxBytes_0300
 * @tc.name    The APP calls GetCellularRxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularRxBytes_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetCellularRxBytes();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetCellularTxBytes_0300
 * @tc.name    The APP calls GetCellularTxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularTxBytes_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetCellularTxBytes();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidRxBytes_0400
 * @tc.name    The APP calls GetUidRxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidRxBytes_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    int app_uid=567;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetUidTxBytes(app_uid);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidTxBytes_0400
 * @tc.name    The APP calls GetUidTxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidTxBytes_0400, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    int app_uid=567;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetUidTxBytes(app_uid);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0600
 * @tc.name    The APP calls GetIfaceRxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    std::string iface = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetIfaceRxBytes(iface);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0600
 * @tc.name    The APP calls GetIfaceTxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    std::string iface = "eth0";
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetIfaceTxBytes(iface);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllRxBytes_0300
 * @tc.name    The APP calls GetAllRxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllRxBytes_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;

    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetAllRxBytes();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllTxBytes_0300
 * @tc.name    The APP calls GetAllTxBytes() TEST_COUNTS_1000 times. The output delay is less than TIME_USEC
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllTxBytes_0300, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
        flow->GetAllTxBytes();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0600
 * @tc.name    The test GetDefaultNet() was executed 1000
 *             times with an output delay of less than 1000000us
 * @tc.desc    Performance test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0600, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    NetHandle netHandle;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
        ASSERT_EQ(ret, NET_CONN_SUCCESS);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_HasDefaultNet_0500
 * @tc.name    The test HasDefaultNet() was executed 1000
 *             times with an output delay of less than 1000000us
 * @tc.desc    Performance test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_HasDefaultNet_0500, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int count;
    bool flag = false;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->HasDefaultNet(flag);
        ASSERT_EQ(ret, NET_CONN_SUCCESS);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetPolicyCallback_1300
 * @tc.name    APP call RegisterNetPolicyCallback () 1000 times, each time all can successfully returns ERR_NONE
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_RegisterNetPolicyCallback_1300, Function | MediumTest | Level3)
{
    sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();
    TimeCountHelper timeHelper;
    int count;
    int time_wasted = 0;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        timeHelper.initTime();
        timeHelper.StartCountUs();
        DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
        time_wasted += timeHelper.GetUseTimeUs();
        DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
    }
    int32_t useTimeUs = time_wasted/ TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetPolicyCallback_0400
 * @tc.name    APP called UnregisterNetPolicyCallback (1000 times), the output delay is less than 1000000 us
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_UnregisterNetPolicyCallback_0400, Function | MediumTest | Level3)
{
    sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();
    TimeCountHelper timeHelper;
    int count;
    int time_wasted = 0;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        timeHelper.initTime();
        DelayedSingleton<NetPolicyClient>::GetInstance()->RegisterNetPolicyCallback(callback);
        timeHelper.StartCountUs();
        DelayedSingleton<NetPolicyClient>::GetInstance()->UnregisterNetPolicyCallback(callback);
        time_wasted += timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = time_wasted/ TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0900
 * @tc.name    The NetDetection() test is executed TEST_RUN_TIME times,
 *             and the output delay is less than DELAYL_LIMIT
 * @tc.desc    Performance test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0900, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    std::list<sptr<NetHandle>> netList;
    netConnClient->GetAllNets(netList);
    std::cout << "netIdList size:" << netList.size() << std::endl;
    for (sptr<NetHandle> netHandler : netList) {
        NetAllCapabilities netAllCap;
        netConnClient->GetNetCapabilities(*netHandler, netAllCap);
        // std::cout << netAllCap.ToString("|") << std::endl;
        if (netAllCap.bearerTypes_.find(BEARER_ETHERNET) == netAllCap.bearerTypes_.end()) {
            continue;
        }
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        int count;
        for (count = 0; count < TEST_COUNTS_1000; ++count) {
            netConnClient->NetDetection(*netHandler);
        }
        int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
        LOG("The time of each time is : %d us", useTimeUs);
        EXPECT_LE(useTimeUs, TIME_USEC);
    }
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2800
 * @tc.name    Input parameters NetBearType to 0, netCapabilities to 0,
 *             call RegisterNetConnCallback() to activate the network 1000 times,
 *             the output delay is less than 1000000us
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2800,
    Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_ETHERNET);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    int count;
    int time_wasted = 0;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
        timeHelper.initTime();
        timeHelper.StartCountUs();
        time_wasted += timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = time_wasted/ TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2900
 * @tc.name    RegisterNetConnCallback() is called 1000 times to activate the default network
 *             with output delay less than 1000000us
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2900,
    Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int count;
    int time_wasted = 0;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
        timeHelper.initTime();
        timeHelper.StartCountUs();
        time_wasted += timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = time_wasted/ TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
/*
 * @tc.number  Telephony_NetworkManager_UnRegisterNetConnCallback_0500
 * @tc.name    Call UnRegisterNetConnCallback (1000 times), the output delay is less than 1000000 us
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_UnRegisterNetConnCallback_0500,
    Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int count;
    int time_wasted = 0;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
        timeHelper.initTime();
        timeHelper.StartCountUs();
        time_wasted += timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = time_wasted/ TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressesByName_0800
 * @tc.name    Test GetAddressesByName() for 1000 times with output delay less than 1000000us
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressesByName_0800, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string host = "www.taobao.com";
    std::vector<INetAddr> addrList;
    uint32_t netId = NETID_100;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        handler->GetAddressesByName(host, addrList);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_GetAddressByName_0800
 * @tc.name	  Test GetAddressByName() for 1000 times with output delay less than 1000000us
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_GetAddressByName_0800, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    std::string host = "www.taobao.com";
    INetAddr addr;
    uint32_t netId = NETID_100;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        handler->GetAddressByName(host, addr);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/*
 * @tc.number  Telephony_NetworkManager_BindSocket_0800
 * @tc.name    Test BindSocket() for 1000 times with output delay less than 1000000us
 * @tc.desc    Performance test
 */
HWTEST_F(NetworkManagerGetAddressByNameTest, Telephony_NetworkManager_BindSocket_0800, Function | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    int32_t socket_fd = 1;
    uint32_t netId = NETID_100;
    int count;
    for (count = 0; count < TEST_COUNTS_1000; ++count) {
        auto handler = DelayedSingleton<NetHandle>::GetInstance();
        handler->SetNetId(netId);
        handler->BindSocket(socket_fd);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / TEST_COUNTS_1000;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}
/*
 * @tc.number  Telephony_NetworkManager_GetAllNets_0400
 * @tc.name    Test GetAllNets () 1000 times, each fetch time less than 500us
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetAllNets_0400, Performance | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;

    TimeCountHelper timeHelper;
    int count;
    std::list<sptr<NetHandle>> netIdList;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        timeHelper.StartCountUs();
        DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
        int32_t useTimeUs = timeHelper.GetUseTimeUs();
        ASSERT_LT(useTimeUs, TIME_USEC);
    }
}
/*
 * @tc.number  Telephony_NetworkManager_GetAllNets_0500
 * @tc.name    The GetAllNets () test is executed 1000 times,
 *             and the total time for obtaining 1000 times is less than 1000000us
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetAllNets_0500, Performance | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;

    TimeCountHelper timeHelper;
    int count;
    std::list<sptr<NetHandle>> netIdList;
    timeHelper.StartCountUs();
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs();
    ASSERT_LT(useTimeUs, TIME_USEC*1000);
}
/*
 * @tc.number  Telephony_NetworkManager_GetConnectionProperties_0400
 * @tc.name    Test GetConnectionProperties () 1000 times, each fetching time less than 500us
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetConnectionProperties_0400, Performance | MediumTest | Level3)
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

    TimeCountHelper timeHelper;
    int count;
    NetLinkInfo info;
    int32_t useTimeUs;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        if (!netIdList.empty()) {
            timeHelper.StartCountUs();
            DelayedSingleton<NetConnClient>::GetInstance()->GetConnectionProperties(*(netIdList.front()), info);
            useTimeUs = timeHelper.GetUseTimeUs();
        }
        ASSERT_LT(useTimeUs, TIME_USEC);
    }
}
/*
 * @tc.number  Telephony_NetworkManager_GetConnectionProperties_0500
 * @tc.name    Test GetConnectionProperties () 1000 times, the total time to get 1000 times is less than 1000000us
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetConnectionProperties_0500, Performance | MediumTest | Level3)
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

    TimeCountHelper timeHelper;
    int count;
    NetLinkInfo info;
    int32_t useTimeUs;
    timeHelper.StartCountUs();
    if (!netIdList.empty()) {
        for (count = 0; count < TEST_COUNTS_1000; count++) {
            DelayedSingleton<NetConnClient>::GetInstance()->GetConnectionProperties(*(netIdList.front()), info);
        }
        useTimeUs = timeHelper.GetUseTimeUs();
    }
    ASSERT_LT(useTimeUs, TIME_USEC*1000);
}
/*
 * @tc.number  Telephony_NetworkManager_GetNetCapabilities ByName_0400
 * @tc.name    Test GetNetCapabilities() 1000 times, with each capture time less than 500us
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetNetCapabilities_0400, Performance | MediumTest | Level3)
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

    TimeCountHelper timeHelper;
    int count;
    NetAllCapabilities cap;
    int32_t useTimeUs;
    for (count = 0; count < TEST_COUNTS_1000; count++) {
        if (!netIdList.empty()) {
            timeHelper.StartCountUs();
            DelayedSingleton<NetConnClient>::GetInstance()->GetNetCapabilities(*(netIdList.front()), cap);
            useTimeUs = timeHelper.GetUseTimeUs();
        }
        ASSERT_LT(useTimeUs, TIME_USEC);
    }
}
/*
 * @tc.number  Telephony_NetworkManager_GetNetCapabilities ByName_0500
 * @tc.name    Test GetNetCapabilities() run 1000 times to obtain 1000 times in a total time less than 1000000US
 * @tc.desc   Performance test
 */
HWTEST_F(AllNetsTest, Telephony_NetworkManager_GetNetCapabilities_0500, Performance | MediumTest | Level3)
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

    TimeCountHelper timeHelper;
    int count;
    NetAllCapabilities cap;
    int32_t useTimeUs;
    timeHelper.StartCountUs();
    if (!netIdList.empty()) {
        for (count = 0; count < TEST_COUNTS_1000; count++) {
            DelayedSingleton<NetConnClient>::GetInstance()->GetNetCapabilities(*(netIdList.front()), cap);
        }
        useTimeUs = timeHelper.GetUseTimeUs();
        ASSERT_LT(useTimeUs, TIME_USEC*1000);
    }
}
}
}