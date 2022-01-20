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

#ifndef TELEPHONY_SIM_NO_SIM_TEST
#define TELEPHONY_SIM_NO_SIM_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"

static bool g_isHasCard = true;

class SimNoSimTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
};

void SimNoSimTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimNoSimTest SetUpTestCase telephonyService_ error....");
        return;
    }
    int32_t simId = 0;
    g_isHasCard = true;
    bool result = g_proxy.GetHandler()->HasSimCard(simId);
    if (!result) {
        g_isHasCard = false;
    }
}

void SimNoSimTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

#endif
