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

const int TEST_COUNTS_1000 = 1000;

class NetMgrStabilityTestPhase7 : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void NetMgrStabilityTestPhase7::SetUpTestCase() {}

void NetMgrStabilityTestPhase7::TearDownTestCase() {}

void NetMgrStabilityTestPhase7::SetUp() {}

void NetMgrStabilityTestPhase7::TearDown() {}


#endif // TRAFFIC_STAT_TEST_H