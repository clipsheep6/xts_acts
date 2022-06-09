/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

#ifndef TRAFFIC_STAT_TEST_H
#define TRAFFIC_STAT_TEST_H
#include <cstdlib>
#include <gtest/gtest.h>
#include <time.h>
#include <unistd.h>
#include <vector>
#include <securec.h>

#include "data_flow_statistics.h"
#include "net_stats_client.h"
#include "net_stats_constants.h"
namespace OHOS {
namespace NetManagerStandard {
constexpr int32_t FIVE_SECOND = 5;
constexpr int32_t EIGHT_SECOND = 8;
constexpr int32_t ELEVEN_SECOND = 11;
constexpr int32_t FOURTEEN_SECOND = 14;
constexpr int32_t SEVENTEEN_SECOND = 17;
constexpr int32_t START_YEAR = 1900;
constexpr int32_t JANUARY_MONTH = 1;
class TrafficStatTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void TrafficStatTest::SetUpTestCase()
{
    system("date \"2022-01-20 18:30:50\"");
    DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
}

void TrafficStatTest::TearDownTestCase() {}

void TrafficStatTest::SetUp() {}

void TrafficStatTest::TearDown() {}

time_t standard_to_stamp(char *str_time)
{
    struct tm stm;
    int year, month, day, hour, min, second;

    (void)memset_s(&stm, sizeof(stm), 0, sizeof(stm));
    year = atoi(str_time);
    month = atoi(str_time + FIVE_SECOND);
    day = atoi(str_time + EIGHT_SECOND);
    hour = atoi(str_time + ELEVEN_SECOND);
    min = atoi(str_time + FOURTEEN_SECOND);
    second = atoi(str_time + SEVENTEEN_SECOND);

    stm.tm_year = year - START_YEAR;
    stm.tm_mon = month - JANUARY_MONTH;
    stm.tm_mday = day;
    stm.tm_hour = hour;
    stm.tm_min = min;
    stm.tm_sec = second;

    printf("%d-%0d-%0d %0d:%0d:%0d\n", year, month, day, hour, min, second); // 标准时间格式例如：2016:08:02 12:12:30
    return mktime(&stm);
}

uint32_t GetCurrentTime()
{
    time_t now;
    (void)time(&now);
    std::stringstream ss;
    ss << now;
    return static_cast<uint32_t>(std::stoi(ss.str()));
}
} // namespace NetManagerStandard
} // namespace OHOS
#endif // TRAFFIC_STAT_TEST_H