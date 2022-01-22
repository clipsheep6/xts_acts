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

#include <cstdio>
#include "traffic_stat_test.h"
#include "data_flow_statistics.h"
#include "net_stats_constants.h"
#include "net_stats_client.h"

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number       Telephony_NetworkManager_UpdateStatsData_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateStatsData_0100, Function | MediumTest | Level3)
{
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_NONE));
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0100
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0100, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	int32_t start = time(NULL) - 60 * 60 * 24 * 30;
    int32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);
	ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_NONE));
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, stats);
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_NONE));
    ASSERT_EQ(stats.rxBytes_, 2048);
    ASSERT_EQ(stats.txBytes_, 1024);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0200
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0200, Function | MediumTest | Level3)
{
    std::string  iface =  "";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	int32_t start = time(NULL)- 60 * 60 * 24 * 30;
    int32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0300, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = -2048;
    stats.txBytes_ = 1024;
	int32_t start = time(NULL);
    int32_t end = time(NULL) - 60 * 60 * 24 * 30;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);
    ASSERT_EQ(static_cast<int32_t>(result), static_cast<int32_t>(NetStatsResultCode::ERR_INVALID_PARAMETER));
}
}
}