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


#include <iostream>
#include <unistd.h>
#include "i_net_conn_service.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "test_net_conn_callback.h"
#include "log.h"
#include "time_count_helper.h"
#include "net_conn_client.h"
#include "i_net_conn_callback.h"
#include "http_request.h"
#include "net_handle.h"
#include "network_manager_register_netconn_callback_test.h"


namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;
using namespace std;
const int32_t TEST_COUNTS_5 = 5;

// =================================test RegisterNetConnCallback start===================================
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0100
 * @tc.name    Call RegisterNetConnCallback() to see that the return value is 0
 * @tc.desc    Function test
 */

HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0100,
    Function | MediumTest | Level3)
{
    std::cout << "TestRegisterNetConnCallback begin" << std::endl;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    if (callback == nullptr) {
        std::cout << "TestRegisterNetConnCallback callback is nullptr" << std::endl;
        return;
    }
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}

/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0200
 * @tc.name    RegisterNetConnCallback() is called with NetBearType 0 and netCapabilities 0.
 See if the value returned is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0200,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(
        netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0300
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 0
 *             and netCapabilities being 11. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0300,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_METERED);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0400
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 0
 *             and netCapabilities being 12. See if 0 is returned
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0400,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0500
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 0
 *             and netCapabilities being 15. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0500,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_VPN);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0600
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 0
*              and netCapabilities being 16. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0600,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_VPN);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0700
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 0
 *             and netCapabilities being 17. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0700,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_CAPTIVE_PORTAL);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0800
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 1 and
*              netCapabilities being 0. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0800,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(
        netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_0900
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 1 and
*              netCapabilities being 11. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_0900,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_METERED);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1000
 * @tc.name    RegisterNetConnCallback() is called with NetBearType being 1 and
*              netCapabilities being 12. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1000,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1100
 * @tc.name    RegisterNetConnCallback() is called with NetBearType as 1 and
 *             netCapabilities as 15. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1100,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_VPN);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1200
 * @tc.name    RegisterNetConnCallback() is called with NetBearType as 1 and
 *             netCapabilities as 16. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1200,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_VALIDATED);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1300
 * @tc.name    RegisterNetConnCallback() is called with NetBearType as 1 and
 *             netCapabilities as 17. The return value is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1300,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI);
    netSpecifier->SetCapability(NET_CAPABILITY_CAPTIVE_PORTAL);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1400
 * @tc.name    Call RegisterNetConnCallback(), enter NetBearType as 2 and
 *             netCapabilities as 12, and see what is returned
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1400,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_BLUETOOTH);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1500
 * @tc.name    Call RegisterNetConnCallback(), enter NetBearType as 3 and
*              netCapabilities as 12, and see what is returned
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1500,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_ETHERNET);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1600
 * @tc.name    Call RegisterNetConnCallback(), enter NetBearType as 4 and
 *             netCapabilities as 12, and see what is returned
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1600,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_VPN);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1700
 * @tc.name    Call RegisterNetConnCallback(), enter NetBearType as 5 and
 *             netCapabilities as 12, and see what is returned
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1700,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_WIFI_AWARE);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNET);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1800
 * @tc.name    RegisterNetConnCallback() is called twice in a row with the parameters
 *             NetBearType 0 and netCapabilities 0, and the value returned is 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1800,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret1 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret1:" << ret1 << std::endl;
    ASSERT_EQ(ret1, 0);
    sleep(5);
    int32_t ret2 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret2:" << ret2 << std::endl;
    ASSERT_EQ(ret2, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_1900
 * @tc.name    RegisterNetConnCallback() is called and NetBearType is BEARER_DEFAULT
 *             and netCapabilities is NET_CAPABILITY_DEFAULT.
 *             The return value is error
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_1900,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_DEFAULT);
    netSpecifier->SetCapability(NET_CAPABILITY_INTERNAL_DEFAULT);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, -4);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2000
 * @tc.name    RegisterNetConnCallback (), set NetBearType and netCapabilities twice, and return 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2000,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier1 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier1->SetType(BEARER_CELLULAR);
    netSpecifier1->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret1 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier1, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret1:" << ret1 << std::endl;
    ASSERT_EQ(ret1, 0);
    sleep(5);
    sptr<NetSpecifier> netSpecifier2 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier2->SetType(BEARER_WIFI);
    netSpecifier2->SetCapability(NET_CAPABILITY_NOT_METERED);
    int32_t ret2 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier2, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret2:" << ret2 << std::endl;
    ASSERT_EQ(ret2, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2100
 * @tc.name    RegisterNetConnCallback (), set the same NetBearType and
*              different netCapabilities twice, and return 0
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2100,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier1 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier1->SetType(BEARER_CELLULAR);
    netSpecifier1->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret1 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier1, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret1:" << ret1 << std::endl;
    ASSERT_EQ(ret1, 0);
    sleep(5);
    sptr<NetSpecifier> netSpecifier2 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier2->SetType(BEARER_CELLULAR);
    netSpecifier2->SetCapability(NET_CAPABILITY_NOT_METERED);
    int32_t ret2 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier2, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret2:" << ret2 << std::endl;
    ASSERT_EQ(ret2, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2200
 * @tc.name    Call RegisterNetConnCallback () and set two different NetBearType
 *             and netCapabilities to activate both times
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2200,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier1 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier1->SetType(BEARER_CELLULAR);
    netSpecifier1->SetCapability(NET_CAPABILITY_MMS);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret1 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier1, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret1:" << ret1 << std::endl;
    ASSERT_EQ(ret1, 0);
    sleep(5);
    sptr<NetSpecifier> netSpecifier2 = (std::make_unique<NetSpecifier>()).release();
    netSpecifier2->SetType(BEARER_CELLULAR);
    netSpecifier2->SetCapability(NET_CAPABILITY_MMS);
    int32_t ret2 = DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier2, callback, timeoutMS);
    std::cout << "TestRegisterNetConnCallback ret2:" << ret2 << std::endl;
    ASSERT_EQ(ret2, 0);
    sleep(5);
    DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2300
 * @tc.name    RegisterNetConnCallback (); RegisterNetConnCallback (); RegisterNetConnCallback ()
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2300,
    Function | MediumTest | Level3)
{
    for ( int32_t count = 0; count < TEST_COUNTS_5; ++count) {
        sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
        std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
        ASSERT_EQ(ret, 0);
    }
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2400
 * @tc.name    Continuous call RegisterNetConnCallback (), UnRegisterNetConnCallback (),
 *             activate many times in a row, to activate the default network, can be activated,
 *             to activate the success, to check the return value is zero
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2400,
    Function | MediumTest | Level3)
{
    for ( int32_t count = 0; count < TEST_COUNTS_5; ++count) {
        sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
        std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
        ASSERT_EQ(ret, 0);
        sleep(5);
        DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    }
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_RegisterNetConnCallback_2500
 * @tc.name    Continuous call RegisterNetConnCallback (), UnRegisterNetConnCallback (),
 *             continuous activation for many times, to activate the same network,
 *             can be activated, to activate the success, to check the return value is zero
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_RegisterNetConnCallback_2500,
    Function | MediumTest | Level3)
{
    for (int32_t count = 0; count < TEST_COUNTS_5; ++count) {
        sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
        netSpecifier->SetType(BEARER_CELLULAR);
        netSpecifier->SetCapability(NET_CAPABILITY_MMS);
        uint32_t timeoutMS = 100;
        sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->
            RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
        std::cout << "TestRegisterNetConnCallback ret:" << ret << std::endl;
        ASSERT_EQ(ret, 0);
        sleep(5);
        DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    }
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetConnCallback_0100
 * @tc.name    Continuous call RegisterNetConnCallback (), UnRegisterNetConnCallback (),
 *             continuous activation for many times, to activate the same network,
 *             can be activated, to activate the success, to check the return value is zero
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_UnregisterNetConnCallback_0100,
    Function | MediumTest | Level3)
{
    sptr<NetSpecifier> netSpecifier = (std::make_unique<NetSpecifier>()).release();
    netSpecifier->SetType(BEARER_CELLULAR);
    netSpecifier->SetCapability(NET_CAPABILITY_NOT_METERED);
    uint32_t timeoutMS = 100;
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    DelayedSingleton<NetConnClient>::GetInstance()->
        RegisterNetConnCallback(netSpecifier, callback, timeoutMS);
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    std::cout << "TestUnRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetConnCallback_0200
 * @tc.name    Continuous call RegisterNetConnCallback (), UnRegisterNetConnCallback (),
 *             continuous activation for many times, to activate the same network,
 *             can be activated, to activate the success, to check the return value is zero
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_UnregisterNetConnCallback_0200,
    Function | MediumTest | Level3)
{
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetConnCallback(callback);
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    std::cout << "TestUnRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, 0);
    sleep(5);
    return;
}
/*
 * @tc.number  Telephony_NetworkManager_UnregisterNetConnCallback_0300
 * @tc.name    Call UnRegisterNetConnCallback (), to activate inactive default network,
 *             failed to activate, check the return value is 5
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerRegisterNetconnCallbackTest, Telephony_NetworkManager_UnregisterNetConnCallback_0300,
    Function | MediumTest | Level3)
{
    sptr<INetConnCallback> callback = (std::make_unique<TestNetConnCallback>()).release();
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetConnCallback(callback);
    std::cout << "TestUnRegisterNetConnCallback ret:" << ret << std::endl;
    ASSERT_EQ(ret, -5);
    sleep(5);
    return;
}
// // =================================test RegisterNetConnCallback end===================================
}
}
