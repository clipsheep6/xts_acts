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
#include <vector>
#include <iostream>
#include <gtest/gtest.h>
#include "inet_addr.h"
#include "data_flow_statistics.h"
#include "dns_resolver_client.h"
#include "i_net_stats_service.h"
#include "static_configuration.h"
#include "network_manager_getBytes_test.h"

namespace OHOS {
    namespace NetManagerStandard {
        using namespace testing::ext;

        const int BYTES_DATA_NUM_0 = 0;

        // =================================test GetCellularRxBytes start===================================

        /*
         * @tc.number  Telephony_NetworkManager_GetCellularRxBytes_0100
         * @tc.name    The APP calls GetCellularRxBytes() and gets traffic successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularRxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            long ret = flow->GetCellularRxBytes();
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetCellularRxBytes end===================================

        // =================================test GetCellularTxBytes start===================================

        /*
         * @tc.number  Telephony_NetworkManager_GetCellularTxBytes_0100
         * @tc.name    The APP calls GetCellularTxBytes() and gets traffic successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetCellularTxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            long ret = flow->GetCellularTxBytes();
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetCellularTxBytes end===================================

        // =================================test GetIfaceRxBytes start===================================

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0100
         * @tc.name    Set the network interface to cellular, call GetIfaceRxBytes ()
         *             and get the traffic value successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "usb0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0200
         * @tc.name    Set network interface to WIFI network interface, call GetIfaceRxBytes (),
         *             successfully obtain traffic value (>=0)
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0200,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "wlan0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0300
         * @tc.name    Set the network interface to an Ethernet interface, call GetIfaceRxBytes (),
         *             and get the traffic value successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0300,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "eth0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceRxBytes_0400
         * @tc.name    Set the network interface to a nonexistent one, call GetIfaceRxBytes (),
         *             and get a traffic value of 0
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceRxBytes_0400,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "xlan0";
            long ret = flow->GetIfaceRxBytes(iface);
            EXPECT_EQ(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetIfaceRxBytes end===================================

        // =================================test GetIfaceTxBytes start===================================

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0100
         * @tc.name    Set the network interface to cellular, call GetIfaceTxBytes ()
         *             and get the traffic value successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "usb0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0200
         * @tc.name    Set network interface to WIFI network interface, call GetIfaceTxBytes (),
         *             successfully obtain traffic value (>=0)
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0200,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "wlan0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0300
         * @tc.name    Set the network interface to an Ethernet interface, call GetIfaceTxBytes (),
         *             and get the traffic value successfully (>=0).
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0300,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "eth0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_GE(ret, BYTES_DATA_NUM_0);
        }

        /*
         * @tc.number  Telephony_NetworkManager_GetIfaceTxBytes_0400
         * @tc.name    Set the network interface to a nonexistent one, call GetIfaceTxBytes (),
         *             and get a traffic value of 0
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetIfaceTxBytes_0400,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
            std::string iface = "xlan0";
            long ret = flow->GetIfaceTxBytes(iface);
            EXPECT_EQ(ret, BYTES_DATA_NUM_0);
        }

        // =================================test GetAllRxBytes end===================================

        // =================================test GetAllRxBytes start===================================

        /*
         * @tc.number  Telephony_NetworkManager_GetAllRxBytes_0100
         * @tc.name    GetAllRxBytes () successfully returns traffic data (>=0)
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllRxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
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
         * @tc.name    GetAllRxTytes () successfully returns traffic data (>=0)
         * @tc.desc    Function test
         */
        HWTEST_F(NetworkManagerGetBytesTest, Telephony_NetworkManager_GetAllTxBytes_0100,
                Function | MediumTest | Level3)
        {
            std::unique_ptr<DataFlowStatistics> flow = std::make_unique<DataFlowStatistics>();
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
