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

#ifndef TRAFFIC_STAT_TEST_H
#define TRAFFIC_STAT_TEST_H

#include <gtest/gtest.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <unistd.h>
#include "data_flow_statistics.h"
#include "net_stats_constants.h"
#include "net_stats_client.h"
namespace OHOS {
namespace NetManagerStandard {
class TrafficStatTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void TrafficStatTest::SetUpTestCase()
{
    DelayedSingleton<NetStatsClient>::GetInstance()->UpdateStatsData();
}

void TrafficStatTest::TearDownTestCase() {}

void TrafficStatTest::SetUp() {}

void TrafficStatTest::TearDown() {}

time_t standard_to_stamp(char *str_time)
{
    struct tm stm;
    int year, month, day, hour, min, second;

    memset(&stm, 0, sizeof(stm));
    year = atoi(str_time);
    month = atoi(str_time + 5);
    day = atoi(str_time + 8);
    hour = atoi(str_time + 11);
    min = atoi(str_time + 14);
    second = atoi(str_time + 17);

    stm.tm_year = year - 1900;
    stm.tm_mon = month - 1;
    stm.tm_mday = day;
    stm.tm_hour = hour;
    stm.tm_min = min;
    stm.tm_sec = second;

    printf("%d-%0d-%0d %0d:%0d:%0d\n", year, month, day, hour, min, second);   // 标准时间格式例如：2016:08:02 12:12:30
    return mktime(&stm);
}

uint32_t GetCurrentTime()
{
    time_t now;
    time(&now);
    std::stringstream ss;
    ss << now;
    return static_cast<uint32_t>(std::stoi(ss.str()));
}
}
}
#endif // TRAFFIC_STAT_TEST_H