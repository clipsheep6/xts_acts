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

#include "traffic_stat_test.h"
#include <vector>
#include "data_flow_statistics.h"
#include "net_stats_constants.h"
#include "net_stats_client.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0100, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_TRUE(statsInfo.rxBytes_ > 0);
    ASSERT_TRUE(statsInfo.txBytes_ > 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0200, Function | MediumTest | Level3)
{
    std::string  iface =  "wlan0";
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_TRUE(statsInfo.rxBytes_ > 0);
    ASSERT_TRUE(statsInfo.txBytes_ > 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0300, Function | MediumTest | Level3)
{
    std::string  iface =  "usb0";
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_TRUE(statsInfo.rxBytes_ > 0);
    ASSERT_TRUE(statsInfo.txBytes_ > 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0400, Function | MediumTest | Level3)
{
    std::string  iface =  "test";
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_INTERNAL_ERROR);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0500
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0500, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0100, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0200, Function | MediumTest | Level3)
{
    std::string  iface = "wlan0" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0300, Function | MediumTest | Level3)
{
    std::string  iface = "usb0";
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0400, Function | MediumTest | Level3)
{
    std::string  iface = "test" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_INTERNAL_ERROR);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0500
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0500, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
    ASSERT_EQ(statsInfo.rxBytes_, 0);
    ASSERT_EQ(statsInfo.txBytes_, 0);
}
}
}