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
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
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
	uint32_t start = time(NULL) - 60 * 60 * 24 * 30;
    uint32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, stats);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
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
    std::string  iface =  "wlan0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	uint32_t start = time(NULL) - 60 * 60 * 24 * 30;
    uint32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, stats);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_EQ(stats.rxBytes_, 2024);
    ASSERT_EQ(stats.txBytes_, 1024);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0300
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0300, Function | MediumTest | Level3)
{
    std::string  iface =  "usb0";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	uint32_t start = time(NULL) - 60 * 60 * 24 * 30;
    uint32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, stats);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);
    ASSERT_EQ(stats.rxBytes_, 2024);
    ASSERT_EQ(stats.txBytes_, 1024);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0400
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0400, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    time_t yesterday_timestamp = time(NULL) - 60 * 60 * 24;
    struct tm *_tm = localtime(&yesterday_timestamp);
    char *format = (char*)malloc(sizeof(char ) * 50);
    memset(format, 0, 50);
    sprintf(format, "%d-%02d-%02d 00:00:00", 1900 + _tm->tm_year, 1 + _tm->tm_mon, _tm->tm_mday);
    int ts = standard_to_stamp(format);
	uint32_t start = ts + 60 * 60 * 8;
    uint32_t end = ts + 60 * 60 * 11;
    NetStatsInfo src;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, src);
    start = ts + 60 * 60 * 9;
    end = ts + 60 * 60 * 10;
    NetStatsInfo src2;
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, src2);
    
    NetStatsInfo newInfo;
    newInfo.rxBytes_ = src2.rxBytes_ + 1024 * 1024 * 200;
    newInfo.txBytes_ = src2.txBytes_ + 1024 * 1024 * 100;
    result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, newInfo);
    ASSERT_EQ(result, NetStatsResultCode::ERR_NONE);

    NetStatsInfo ret;
    start = ts + 60 * 60 * 8;
    end = ts + 60 * 60 * 11;
    result = DelayedSingleton<NetStatsClient>::GetInstance()->GetIfaceStatsDetail(iface,
        start, end, ret);
	ASSERT_EQ(src.rxBytes_ + 1024 * 1024 * 200, ret.rxBytes_);
    ASSERT_EQ(src.txBytes_ + 1024 * 1024 * 100, ret.txBytes_);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0500
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0500, Function | MediumTest | Level3)
{
    std::string  iface =  "NULL";
    NetStatsInfo stats;
    stats.rxBytes_ = 2048;
    stats.txBytes_ = 1024;
	uint32_t start = time(NULL)- 60 * 60 * 24 * 30;
    uint32_t end = time(NULL);
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0600
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0600, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = -2048;
    stats.txBytes_ = 1024;
	uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60 * 24 * 30;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_INTERNAL_ERROR);
}

/*
 * @tc.number       Telephony_NetworkManager_UpdateIfacesStats_0700
 * @tc.name
 * @tc.desc     Function test
 */
HWTEST_F(TrafficStatTest, Telephony_NetworkManager_UpdateIfacesStats_0700, Function | MediumTest | Level3)
{
    std::string  iface =  "eth0";
    NetStatsInfo stats;
    stats.rxBytes_ = -2048;
    stats.txBytes_ = -1024;
	uint32_t start = time(NULL);
    uint32_t end = time(NULL) - 60 * 60 * 24 * 30;
    NetStatsResultCode result = DelayedSingleton<NetStatsClient>::GetInstance()->UpdateIfacesStats(iface,
        start, end, stats);    
	ASSERT_EQ(result, NetStatsResultCode::ERR_INVALID_PARAMETER);
}
}
}