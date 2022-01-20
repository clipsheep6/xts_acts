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
#include "network_manager_getBytes_test.h"
#include <iostream>
#include "ethernet_client.h"
#include "dns_resolver_client.h"
#include "static_configuration.h"
#include "inet_addr.h"

#include "system_ability_definition.h"
#include "data_flow_statistics.h"
#include "i_net_stats_service.h"
#include "net_stats_csv.h"
#include "net_stats_client.h"
#include "timer.h"
#include <unistd.h>
#include <vector>
#include <memory>
#include <thread>
#include "wifi_msg.h"

// static const int ADDR_PREFIX_LENGTH_25 = 25;
// const uint8_t FAMILY  = 2;

namespace OHOS
{
    namespace NetManagerStandard
    {
        using namespace testing::ext;

        const int BYTES_DATA_NUM_0 = 0;

        // =================================test GetCellularRxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetCellularRxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularRxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            long ret = flow->GetCellularRxBytes();
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetCellularRxBytes end===================================

        // =================================test GetCellularTxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetCellularTxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularTxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            long ret = flow->GetCellularTxBytes();
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetCellularTxBytes end===================================

        // =================================test GetUidRxByte start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetUidRxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidRxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            int app_uid=567;
            long ret = flow->GetUidRxBytes(app_uid);
            std::cout << ret << std::endl;
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetUidRxBytes_0200
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidRxBytes_0200, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            int app_useless_uid =10000;
            long ret = flow->GetUidRxBytes(app_useless_uid);
            EXPECT_LT(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetUidRxByte end===================================

        // =================================test GetUidTxByte start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetUidTxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidTxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            int app_uid=567;
            long ret = flow->GetUidTxBytes(app_uid);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetUidTxBytes_0200
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetUidTxBytes_0200, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            int app_useless_uid = 10000;
            long ret = flow->GetUidTxBytes(app_useless_uid);
            EXPECT_LT(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetUidTxByte end===================================

        // =================================test GetIfaceRxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "usb0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0200
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0200, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "wlan0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0300
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0300, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "eth0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0400
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0400, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "xlan0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_EQ(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetIfaceRxBytes end===================================

        // =================================test GetIfaceTxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "usb0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0200
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0200, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "wlan0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0300
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0400, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "eth0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
        * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0400
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0500, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface = "xlan0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_EQ(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetAllRxBytes end===================================

        // =================================test GetAllRxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetAllRxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllRxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface_cell = "usb0";
            std::string iface_wlan = "wlan0";
            std::string iface_eth = "eth0";

            long ret_usb = flow->GetIfaceRxBytes(iface_cell);
            long ret_wlan = flow->GetIfaceRxBytes(iface_wlan);
            long ret_eth = flow->GetIfaceRxBytes(iface_eth);
            long ret = flow->GetAllRxBytes();
            EXPECT_GE(ret, ret_usb + ret_wlan + ret_eth);
        }

        // =================================test GetIfaceRxBytes end===================================

        // =================================test GetAllTxBytes start===================================

        /*
        * @tc.number  Telephony_NetworkManager_GetAllRxBytes_0100
        * @tc.name
        * @tc.desc    Function test
        */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllTxBytes_0100, Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow(new DataFlowStatistics());
            std::string iface_cell = "usb0";
            std::string iface_wlan = "wlan0";
            std::string iface_eth = "eth0";

            long ret_usb = flow->GetIfaceTxBytes(iface_cell);
            long ret_wlan = flow->GetIfaceTxBytes(iface_wlan);
            long ret_eth = flow->GetIfaceTxBytes(iface_eth);

            long ret = flow->GetAllTxBytes();
            EXPECT_GE(ret, ret_usb + ret_wlan + ret_eth);
        }

        // =================================test GetIfaceTxBytes end===================================

    }
}
