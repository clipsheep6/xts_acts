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

#include "network_manager_getallnets_test.h"

#include "net_conn_client.h"
#include "singleton.h"
#include "net_specifier.h"
#include "net_conn_constants.h"
#include "net_conn_types.h"
#include "net_mgr_log_wrapper.h"
#include "net_handle.h"

namespace OHOS {
namespace NetManagerStandard {
static const uint32_t SIZE_ZERO = 0;
static const int32_t DEFAULT_NET_SUPPLI_ID = 1003;
using namespace testing::ext;
// =================================test GetAllNets start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetAllNets_0100
 * @tc.name    Test GetAllNets () to obtain all network success return value 0, and check that no NEtid is generated
 * @tc.desc   Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetAllNets_0100, Function | MediumTest | Level3)
{
    for (int32_t i = 0 ; i <16; i++) {
        int32_t Supplier_Id = DEFAULT_NET_SUPPLI_ID+i;
        int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(Supplier_Id);
        std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
    }
    std::list<sptr<NetHandle>> netIdList;
    int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    std::cout << "TestGetAllNets ret:" << result<< std::endl;
    ASSERT_EQ(result, NET_CONN_SUCCESS);
    ASSERT_EQ(SIZE_ZERO, netIdList.size());
}

/*
 * @tc.number  Telephony_NetworkManager_GetAllNetss_0200
 * @tc.name    Test GetAllNets () to get all network successfully return value 0, and check that the parameter
 *             has netid generated
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetAllNets_0200, Function | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;
    std::list<sptr<NetHandle>> netIdList;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    std::cout << "TestGetAllNets ret:" << ret<< std::endl;
    ASSERT_EQ(ret, NET_CONN_SUCCESS);
    ASSERT_NE(SIZE_ZERO, netIdList.size());
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(ressupplierId1);
    std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
}
// =================================test GetAllNets end===================================
// =================================test GetConnectionProperties start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetConnectionProperties_0100
 * @tc.name    Verification uint32 netId indicates the presence ID. Test GetConnectionProperties () to check the
 *             returned value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetConnectionProperties_0100,
        Function | MediumTest | Level3)
{
    std::set<NetCap> netCaps {NET_CAPABILITY_INTERNET};
    std::string ident = "ident";
    uint32_t ressupplierId1;
    DelayedSingleton<NetConnClient>::GetInstance()->RegisterNetSupplier(BEARER_CELLULAR,
        ident, netCaps, ressupplierId1);
    std::cout << "RegisterNetSupplier ret:" << ressupplierId1 << std::endl;
    std::list<sptr<NetHandle>> netIdList;
    int32_t ret = DelayedSingleton<NetConnClient>::GetInstance()->GetAllNets(netIdList);
    std::cout << "TestGetAllNets ret:" << ret<< std::endl;
    sptr<NetLinkInfo> netLinkInfo = (std::make_unique<NetLinkInfo>()).release();
    netLinkInfo->ifaceName_ = "str01";
    netLinkInfo->domain_ = "str02";
    uint32_t result = DelayedSingleton<NetConnClient>::GetInstance()->UpdateNetLinkInfo(ressupplierId1, netLinkInfo);
    std::cout << "UpdateNetSupplierInfo ret:" << result << std::endl;
    NetLinkInfo  info;
    if (!netIdList.empty()) {
        result = DelayedSingleton<NetConnClient>::GetInstance()->GetConnectionProperties(*(netIdList.back()), info);
        std::cout << "TestGetConnectionProperties ret:" << result << std::endl;
    }
    ASSERT_EQ(result, NET_CONN_SUCCESS);
    ASSERT_EQ(info.ifaceName_, "str01");
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(ressupplierId1);
    std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
}

/*
 * @tc.number  Telephony_NetworkManager_GetConnectionProperties_0200
 * @tc.name    Verification uint32 netId indicates a non-existent ID. Test GetConnectionProperties () to check the
 *             returned value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetConnectionProperties_0200,
        Function | MediumTest | Level3)
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
    int32_t notExistId = netIdList.back()->GetNetId() +5;
    NetHandle handler(notExistId);
    NetLinkInfo info;
    int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->GetConnectionProperties(handler, info);
    std::cout << "TestGetConnectionProperties notExistId ret:" << result << std::endl;
    ASSERT_EQ(result, ERR_NO_NETWORK);
    ASSERT_TRUE(info.ifaceName_.empty());
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(ressupplierId1);
    std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
}
// =================================test GetConnectionProperties end===================================
// =================================test GetNetCapabilities start===================================
/*
 * @tc.number  Telephony_NetworkManager_GetNetCapabilities_0100
 * @tc.name    Verification uint32 netId indicates the presence ID. Test GetNetCapabilities() to view the returned
 *             value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetNetCapabilities_0100, Function | MediumTest | Level3)
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
    NetAllCapabilities cap;
    int32_t result;
    if (!netIdList.empty()) {
        result = DelayedSingleton<NetConnClient>::GetInstance()->GetNetCapabilities(*(netIdList.front()), cap);
        std::cout << "TestGetNetCapabilities ret:" << result << std::endl;
    }
    ASSERT_EQ(result, NET_CONN_SUCCESS);
    ASSERT_TRUE(!cap.netCaps_.empty());
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(ressupplierId1);
    std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
}

/*
 * @tc.number  Telephony_NetworkManager_GetNetCapabilities_0200
 * @tc.name    Verification uint32 netId indicates a nonexistent ID. Test GetNetCapabilities() to check the returned
 *             value
 * @tc.desc    Function test
 */
HWTEST_F(NetworkManagerGetAllNetsTest, Telephony_NetworkManager_GetNetCapabilities_0200, Function | MediumTest | Level3)
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
    int32_t notExistId = netIdList.back()->GetNetId() +5;
    NetHandle handler(notExistId);
    NetAllCapabilities cap;
    int32_t result = DelayedSingleton<NetConnClient>::GetInstance()->GetNetCapabilities(handler, cap);
    std::cout << "TestGetNetCapabilities notExistId ret:" << result << std::endl;
    ASSERT_EQ(result, ERR_NO_NETWORK);
    ASSERT_TRUE(cap.netCaps_.empty());
    ret = DelayedSingleton<NetConnClient>::GetInstance()->UnregisterNetSupplier(ressupplierId1);
    std::cout << "TestUnregisterNetSupplier ret:" << ret<< std::endl;
}
// =================================test GetNetCapabilities end===================================
}
}