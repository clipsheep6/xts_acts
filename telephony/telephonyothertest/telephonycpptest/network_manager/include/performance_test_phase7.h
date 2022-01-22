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
#include <cstdlib>
#include <time.h>
#include <vector>
#include <unistd.h>
#include "net_stats_client.h"
#include "net_conn_client.h"
#include "net_policy_constants.h"
#include "net_policy_define.h"
#include "net_policy_client.h"
#include "data_flow_statistics.h"

namespace OHOS {
namespace NetManagerStandard {

class PerformanceTestPhase7 : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void PerformanceTestPhase7::SetUpTestCase()
{
    system("date \"2022-01-20 18:30:50\"");
}

void PerformanceTestPhase7::TearDownTestCase() {}

void PerformanceTestPhase7::SetUp()
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy("");
}

void PerformanceTestPhase7::TearDown() {}
}
}
#endif // TRAFFIC_STAT_TEST_H