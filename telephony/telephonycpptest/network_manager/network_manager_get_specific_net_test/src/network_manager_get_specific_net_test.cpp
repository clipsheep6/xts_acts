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
#include <iostream>
#include <list>
#include "net_conn_client.h"
#include "singleton.h"
#include "net_specifier.h"
#include "net_conn_constants.h"
#include "net_conn_types.h"
#include "net_mgr_log_wrapper.h"
#include "get_specific_net_test.h"
#include "net_conn_callback_test.h"
#include "net_detection_callback_test.h"

static const int32_t DEFAULT_SUPPLIER_ID = 1003;
static const int32_t DEFAULT_NET_ID = 100;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

// =================================test GetDefaultNet start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0100
 * @tc.name    Without network registration, the default network
 *             GetDefaultNet() is sent and the ERR_NET_NOT_FIND_NETID returned
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0100, Function | MediumTest | Level3)
{
    NetHandle netHandle;
    sptr<NetSupplierInfo> suppInfo = (std::make_unique<NetSupplierInfo>()).release();
    suppInfo->isAvailable_ = false;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()-> UpdateNetSupplierInfo(DEFAULT_SUPPLIER_ID, suppInfo);
    sleep(1);
    ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
    std::cout << "TestGetDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, ERR_NET_NOT_FIND_NETID);
    sleep(1);
    suppInfo->isAvailable_ = true;
    ret = DelayedSingleton<NetConnClient>::GetInstance()-> UpdateNetSupplierInfo(DEFAULT_SUPPLIER_ID, suppInfo);
    sptr<NetLinkInfo> linkInfo = (std::make_unique<NetLinkInfo>()).release();
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UpdateNetLinkInfo(DEFAULT_SUPPLIER_ID, linkInfo);
    ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
    std::cout << "TestGetDefaultNet netid is:" << netHandle.GetNetId() << std::endl;
}

/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0200
 * @tc.name    When there is only one Ethernet connection, the default network gets
 *             GetDefaultNet() successfully returns the default network netId
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0200, Function | MediumTest | Level3)
{
    NetHandle netHandle;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
    std::cout << "TestGetDefaultNet ret:" << ret << std::endl;
    int32_t netId = netHandle.GetNetId();
    std::cout << "TestGetDefaultNet netId:" << netId << std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_EQ(netId, DEFAULT_NET_ID);
}

/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0300
 * @tc.name    When multiple Ethernets are registered, the default network
 *             GetDefaultNet() successfully returns the default network netId
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0300, Function | MediumTest | Level3)
{
    NetBearType bearerType = BEARER_ETHERNET;
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET,NET_CAPABILITY_MMS};
    std::string ident = "ident";
    int32_t result_1 = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[0]);
    ASSERT_TRUE(result_1 == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[0] << std::endl;
    ident = "ident2";
    int32_t result_2 = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[1]);
    ASSERT_TRUE(result_2 == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[1] << std::endl;
    NetHandle netHandle;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
    int32_t netId = netHandle.GetNetId();
    std::cout << "The DefaultNet netId:" << netId << std::endl;
    std::cout << "TestGetDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_EQ(netId, DEFAULT_NET_ID);
}

/*
 * @tc.number  Telephony_NetworkManager_GetDefaultNet_0400
 * @tc.name    When cellular data, Ethernet, WiFi, Bluetooth, aware, and VPN are all registered,
 *             the default network GetDefaultNet() successfully returns the default network netId
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_GetDefaultNet_0400, Function | MediumTest | Level3)
{
    NetBearType bearerType = BEARER_CELLULAR;
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET,NET_CAPABILITY_MMS};
    std::string ident = "ident";
    int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[0]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[0] << std::endl;
    bearerType = BEARER_WIFI;
    ident = "ident2";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[1]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[1] << std::endl;
    bearerType = BEARER_BLUETOOTH;
    ident = "ident3";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[2]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[2] << std::endl;
    bearerType = BEARER_VPN;
    ident = "ident4";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[3]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[3] << std::endl;
    bearerType = BEARER_WIFI_AWARE;
    ident = "ident5";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[4]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[4] << std::endl;
    NetHandle netHandle;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetDefaultNet(netHandle);
    int32_t netId = netHandle.GetNetId();
    std::cout << "The DefaultNet netId:" << netId << std::endl;
    std::cout << "TestGetDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_EQ(netId, DEFAULT_NET_ID);
}
// =================================test GetDefaultNet end===================================

// =================================test HasDefaultNet start===================================
/*
 * @tc.number  Telephony_NetworkManager_HasDefaultNet_0100
 * @tc.name    In the absence of network registration, a query is issued to determine whether the
 *             default network has activated HasDefaultNet(), and the expected return is not activated
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_HasDefaultNet_0100, Function | MediumTest | Level3)
{
    sptr<NetSupplierInfo> suppInfo = (std::make_unique<NetSupplierInfo>()).release();
    suppInfo->isAvailable_ = false;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()-> UpdateNetSupplierInfo(DEFAULT_SUPPLIER_ID, suppInfo);
    sleep(1);
    bool flag;
    ret = DelayedSingleton<NetConnClient>::GetInstance()->HasDefaultNet(flag);
    std::cout << "TestHasDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, ERR_NET_DEFAULTNET_NOT_EXIST);
    sleep(1);
    suppInfo->isAvailable_ = true;
    ret = DelayedSingleton<NetConnClient>::GetInstance()-> UpdateNetSupplierInfo(DEFAULT_SUPPLIER_ID, suppInfo);
    sptr<NetLinkInfo> linkInfo = (std::make_unique<NetLinkInfo>()).release();
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UpdateNetLinkInfo(DEFAULT_SUPPLIER_ID, linkInfo);
}

/*
 * @tc.number  Telephony_NetworkManager_HasDefaultNet_0200
 * @tc.name    After the Ethernet registration, a query is issued to determine whether the default
 *             network has activated HasDefaultNet(), and it is expected to return activated
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_HasDefaultNet_0200, Function | MediumTest | Level3)
{
    NetBearType bearerType = BEARER_ETHERNET;
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET,NET_CAPABILITY_MMS};
    std::string ident = "ident";
    int32_t result_1 = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[0]);
    ASSERT_TRUE(result_1 == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[0] << std::endl;
    ident = "ident2";
    int32_t result_2 = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[1]);
    ASSERT_TRUE(result_2 == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[1] << std::endl;
    bool flag = false;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->HasDefaultNet(flag);
    std::cout << "TestHasDefaultNet flag:" << flag << std::endl;
    std::cout << "TestHasDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_TRUE(flag);
}

/*
 * @tc.number  Telephony_NetworkManager_HasDefaultNet_0300
 * @tc.name    After Ethernet, Cellular, WiFi, VPN, Bluetooth, and aware registration,
 *             a query is issued to determine whether the default network has activated HasDefaultNet(),
 *             and it is expected to return activated
 * @tc.desc    Function test
 */
HWTEST_F(GetSpecificNetTest, Telephony_NetworkManager_HasDefaultNet_0300, Function | MediumTest | Level3)
{
    NetBearType bearerType = BEARER_CELLULAR;
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET,NET_CAPABILITY_MMS};
    std::string ident = "ident";
    int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[0]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[0] << std::endl;
    bearerType = BEARER_WIFI;
    ident = "ident2";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[1]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[1] << std::endl;
    bearerType = BEARER_BLUETOOTH;
    ident = "ident3";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[2]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[2] << std::endl;
    bearerType = BEARER_VPN;
    ident = "ident4";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[3]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[3] << std::endl;
    bearerType = BEARER_WIFI_AWARE;
    ident = "ident5";
    result = DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(bearerType,
        ident, netCaps, supplierIdTest[4]);
    ASSERT_TRUE(result == NET_CONN_SUCCESS);
    std::cout << "supplierId : " << supplierIdTest[4] << std::endl;
    bool flag = false;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->HasDefaultNet(flag);
    std::cout << "TestHasDefaultNet flag:" << flag << std::endl;
    std::cout << "TestHasDefaultNet ret:" << ret << std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_TRUE(flag);
}
// =================================test HasDefaultNet end===================================
}
}