// /*
//  * Copyright (C) 2021 Huawei Device Co., Ltd.
//  * Licensed under the Apache License, Version 2.0 (the "License");
//  * you may not use this file except in compliance with the License.
//  * You may obtain a copy of the License at
//  *
//  *     http://www.apache.org/licenses/LICENSE-2.0
//  *
//  * Unless required by applicable law or agreed to in writing, software
//  * distributed under the License is distributed on an "AS IS" BASIS,
//  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  * See the License for the specific language governing permissions and
//  * limitations under the License.
//  */

#include "network_manager_detection_test.h"

#include <gtest/gtest.h>

#include "connect_wifi.h"
#include "common.h"
#include "net_specifier.h"
#include "net_all_capabilities.h"
#include "net_conn_types.h"
#include "net_conn_client.h"
#include "time_count_helper.h"
#include "log.h"
#include "net_link_info.h"
#include "i_net_detection_callback.h"
#include "i_net_conn_service.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;
using namespace OHOS::Wifi;

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0100
 * @tc.name    The netId is "NetType" get,test NetDetection()
 *             return "NET_CONN_SUCCESS"
 * @tc.desc    Function test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0100, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    std::list<sptr<NetHandle>> netList;
    netConnClient->GetAllNets(netList);
    std::cout << "netIdList size:" << netList.size() << std::endl;
    int32_t result = 0;
    for (sptr<NetHandle> netHandle : netList) {
        NetAllCapabilities netAllCap;
        netConnClient->GetNetCapabilities(*netHandle, netAllCap);
        std::cout << netAllCap.ToString("|") << std::endl;
        if (netAllCap.bearerTypes_.find(BEARER_ETHERNET) == netAllCap.bearerTypes_.end()) {
            continue;
        }
        result = netConnClient->NetDetection(*netHandle);
        EXPECT_EQ(result, NET_CONN_SUCCESS);
        std::cout << "TestNetDetection result:" << result << std::endl;
    }
}

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0200
 * @tc.name    The netId is "NETID_INVALID", test NetDetection()
 *             return "NET_CONN_ERR_NETID_NOT_FOUND"
 * @tc.desc    Function test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0200, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    NetHandle netHandle(NETID_INVALID);
    int32_t ret = netConnClient->NetDetection(netHandle);
    std::cout << "NetDetection ret:" << ret << std::endl;
    EXPECT_EQ(ret, NET_CONN_ERR_NETID_NOT_FOUND);
}

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0300
 * @tc.name    The netId is Registered Listening, test NetDetection()
 *             return "NET_CONN_SUCCESS", return result the callback
 *             "NET_DETECTION_SUCCESS"
 * @tc.desc    Function test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0300, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    std::list<sptr<NetHandle>> netList;
    netConnClient->GetAllNets(netList);
    std::cout << "netIdList size:" << netList.size() << std::endl;
    int32_t result = 0;
    int32_t netId = 0;
    for (sptr<NetHandle> netHandle : netList) {
        NetAllCapabilities netAllCap;
        netConnClient->GetNetCapabilities(*netHandle, netAllCap);
        std::cout << netAllCap.ToString("|") << std::endl;
        if (netAllCap.bearerTypes_.find(BEARER_ETHERNET) == netAllCap.bearerTypes_.end()) {
            continue;
        }
        netId = netHandle->GetNetId();
        result = m_netConnService->RegisterNetDetectionCallback(netId, detectionCallback);
        std::cout << "TestRegisterNetDetectionCallback netId:" << netId << " result_Re:" << result << std::endl;

        int count = 0;
        bool flag = false;
        while (count < 3)
        {
            count++;
            result = netConnClient->NetDetection(*netHandle);
            sleep(3);
            std::cout << "TestNetDetection result_:" << result << std::endl;
            std::cout << "callback_result :" << TestNetDetectionCallback::m_detectionResult << std::endl;
            if (TestNetDetectionCallback::m_detectionResult == NET_DETECTION_SUCCESS) {
                flag = true;
                break;
            }
        }
        EXPECT_EQ(result, NET_CONN_SUCCESS);
        EXPECT_TRUE(flag);      // callback_result
        result = m_netConnService->UnRegisterNetDetectionCallback(netId, detectionCallback);
        std::cout << "TestNetDetection result_UnRe:" << result << std::endl;
    }
}

/*
 * @tc.number  Telephony_NetworkManager_NetDetection_0400
 * @tc.name    The netId is Unregistered listening, test NetDetection()
 *             return "NET_CONN_SUCCESS"
 * @tc.desc    Function test
 */
HWTEST_F(DetectionTest, Telephony_NetworkManager_NetDetection_0400, Function | MediumTest | Level3)
{
    auto netConnClient = DelayedSingleton<NetConnClient>::GetInstance();
    std::list<sptr<NetHandle>> netList;
    netConnClient->GetAllNets(netList);
    std::cout << "netIdList size:" << netList.size() << std::endl;
    int32_t result = 0;
    for (sptr<NetHandle> netHandle : netList) {
        NetAllCapabilities netAllCap;
        netConnClient->GetNetCapabilities(*netHandle, netAllCap);
        std::cout << netAllCap.ToString("|") << std::endl;
        if (netAllCap.bearerTypes_.find(BEARER_ETHERNET) == netAllCap.bearerTypes_.end()) {
            continue;
        }
        result = netConnClient->NetDetection(*netHandle);
        EXPECT_EQ(result, NET_CONN_SUCCESS);
        std::cout << "TestNetDetection result:" << result << std::endl;
    }
}

}   // NetManagerStandard
}   // OHOS