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
#include "net_stat_callback_test.h"

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
    std::string  iface =  "test";
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0200, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
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
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0600
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0600, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = 1;
    uint32_t end = 2;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_TIME_PERIOD));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetIfaceStatsDetail_0700
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetIfaceStatsDetail_0700, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    uint32_t start = 1981080000;
    uint32_t end = 1981083600;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_TIME_PERIOD));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0100, Function | MediumTest | Level3)
{
    std::string  iface = "test" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0200, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 1001;
    uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    EXPECT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
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
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0600
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0600, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 0;
    uint32_t start = time(NULL) - 60 * 60;
    uint32_t end = time(NULL);
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0700
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0700, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 1001;
    uint32_t start = 1;
    uint32_t end = 2;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    if ((static_cast<int32_t>(result) == static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER)) ||
        (static_cast<int32_t>(result) ==static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_TIME_PERIOD))) {
        EXPECT_TRUE(true);
    } else {
        EXPECT_TRUE(false);
    }
    EXPECT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_TIME_PERIOD));
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_GetUidStatsDetail_0800
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_GetUidStatsDetail_0800, Function | MediumTest | Level3)
{
    std::string  iface = "eth0" ;
    uint32_t uid = 1001;
    uint32_t start = 1981080000;
    uint32_t end = 1981083600;
    NetStatsInfo statsInfo ;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetUidStatsDetail(iface,
        uid, start, end, statsInfo);
    if ((static_cast<int32_t>(result) == static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER)) ||
        (static_cast<int32_t>(result) ==static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_TIME_PERIOD))) {
        EXPECT_TRUE(true);
    } else {
        EXPECT_TRUE(false);
    }
    EXPECT_EQ(statsInfo.rxBytes_, 0);
    EXPECT_EQ(statsInfo.txBytes_, 0);
}

/*
 * @tc.number       Telephony_NetworkManager_RegisterNetStatsCallback_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_RegisterNetStatsCallback_0100, Function | MediumTest | Level3)
{
    sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
    int32_t ret = DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
    EXPECT_EQ(ret, 0);
    DelayedSingleton<NetStatsClient>::GetInstance()->UnregisterNetStatsCallback(callback);
}

/*
 * @tc.number       Telephony_NetworkManager_UnregisterNetStatsCallback_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UnregisterNetStatsCallback_0100, Function | MediumTest | Level3)
{
    sptr<INetStatsCallback> callback = (std::make_unique<NetStatsCallbackTest>()).release();
    int32_t ret = DelayedSingleton<NetStatsClient>::GetInstance()->RegisterNetStatsCallback(callback);
    ret = DelayedSingleton<NetStatsClient>::GetInstance()->UnregisterNetStatsCallback(callback);
    EXPECT_EQ(ret, 0);
}
}
}