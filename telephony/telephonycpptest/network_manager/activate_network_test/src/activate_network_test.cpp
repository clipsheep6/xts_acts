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

#include "activate_network_test.h"
#include <iostream>

#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "if_system_ability_manager.h"
#include "iremote_object.h"
#include "common.h"

#include "i_net_conn_service.h"
#include <gtest/gtest.h>


// #include "i_net_conn_callback.h"
#include "test_net_conn_callback.h"

using namespace testing::ext;




namespace OHOS {
namespace NetManagerStandard {

sptr<INetConnService> netConnService = nullptr;


// sptr<INetConnService> GetProxy()
// {
//     std::cout << "NetConnService GetProxy ... " << std::endl;
//     sptr<ISystemAbilityManager> systemAbilityMgr =
//         SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
//     if (systemAbilityMgr == nullptr) {
//         std::cout << "NetConnService Get ISystemAbilityManager failed ... " << std::endl;
//         return nullptr;
//     }

//     sptr<IRemoteObject> remote = systemAbilityMgr->CheckSystemAbility(COMM_NET_CONN_MANAGER_SYS_ABILITY_ID);
//     if (remote) {
//         sptr<INetConnService> NetConnService = iface_cast<INetConnService>(remote);
//         std::cout << "NetConnService Get COMM_NET_CONN_MANAGER_SYS_ABILITY_ID success ... " << std::endl;
//         return NetConnService;
//     } else {
//         std::cout << "NetConnService Get COMM_NET_CONN_MANAGER_SYS_ABILITY_ID fail ... " << std::endl;
//         return nullptr;
//     }

//     // return nullptr;
// }

// =================================test GetAddressesByName start===================================
/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0100, Function | MediumTest | Level3)
{
    netConnService = GetProxy();
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_CELLULAR;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    // int32_t ret = 0;
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;

    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    // int32_t netState=TestNetConnCallback::info_->netState_;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);

}




/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0200, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_CELLULAR;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MMS;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    // int32_t netState=TestNetConnCallback::info_->netState_;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}


/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0300, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_CELLULAR;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MAX;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0400, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_CELLULAR;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_NONE;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_0500, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_UNKNOWN;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_NONE;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_0600, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_UNKNOWN;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_0700, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_UNKNOWN;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MMS;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0800
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_0800, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_UNKNOWN;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_0900
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_0900, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_ETHERNET;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_NONE;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01000
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01000, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_ETHERNET;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01100, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_ETHERNET;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MMS;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01200, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_ETHERNET;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MAX;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01300, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_MAX;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_NONE;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01400, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_MAX;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01500, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_MAX;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MMS;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01600, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_MAX;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MAX;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01700, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = 100;
    netSpecifier->netCapabilities_ = NET_CAPABILITIES_MAX;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    std::cout <<"ret: "<< ret << std::endl;
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}

/*
 * @tc.number  Telephony_NetworkManager_ActivateNetwork_01800
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01800, Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->ident_ = "";
    netSpecifier->netType_ = NET_TYPE_MAX;
    netSpecifier->netCapabilities_ = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    uint32_t reqId = 0;
    int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
    ASSERT_EQ(ret, 0);
    std::cout <<"callback: "<< callback << std::endl;
    std::cout <<"reqId: "<< reqId << std::endl;
    sleep(5);
    std::cout << TestNetConnCallback::info_.netState_ << std::endl;
    ASSERT_EQ(TestNetConnCallback::info_.netState_, 0);
}





}
}
// // =================================test SetIfaceConfig end===================================

// // =================================test GetIfaceConfig start===================================



// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01000
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, TTelephony_NetworkManager_ActivateNetwork_01000, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// // =================================test GetIfaceConfig end===================================


// // =================================test IsActivate end===================================
// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_0600
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0600, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_0700
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0700, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }
// // =================================test IsActivate end===================================
// // =================================test GetActivateInterfaces end===================================

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_0800
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0800, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_0900
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_0900, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01000
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01000, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01100
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01100, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01200
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01200, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01300
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01300, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01400
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01400, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01500
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01500, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01600
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01600, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01700
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01700, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }

// /*
//  * @tc.number  Telephony_NetworkManager_ActivateNetwork_01800
//  * @tc.name
//  * @tc.desc    Function test
//  */
// HWTEST_F(NetworkManagerTest, Telephony_NetworkManager_ActivateNetwork_01800, Function | MediumTest | Level3)
// {
//     sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
//     netSpecifier->ident_ = "";
//     netSpecifier->netType_ = NET_TYPE_CELLULAR;
//     netSpecifier->netCapabilities_ = NET_CAPABILITIES_INTERNET;
//     sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
//     uint32_t reqId = 0;
//     int32_t ret = netConnService->ActivateNetwork(netSpecifier, callback, reqId);
//     ASSERT_EQ(ret, 0);
// }
// // =================================test GetActivateInterfaces end===================================
