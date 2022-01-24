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

#ifndef TELEPHONY_SIM_MOCK_TEST
#define TELEPHONY_SIM_MOCK_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"
#include "mock_vendor.h"
#include "mock_vendor_common.h"

static int32_t g_defaultSimCardType;
static std::shared_ptr<MockVendor> g_mockCardType = std::make_shared<MockVendor>();

class SimCardTypeMockTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimCardTypeMockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimCardTypeMockTest SetUpTestCase telephonyService_ error....");
        return;
    }
    if (g_mockCardType->Init() != 0) {
        LOG("Init faild");
        return;
    }
    int32_t simId = EFFECTIVE_SLOT_ID;
    g_defaultSimCardType = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(simId));
}

void SimCardTypeMockTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
    int32_t dataLength = 0;
    g_mockCardType->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

void SimCardTypeMockTest::TearDown()
{
    // Call the analog vendor library interface to pre-set the card type to SINGLE_MODE_USIM_CARD.
    g_mockCardType->MockVendorSetCardType(g_defaultSimCardType);
}

#endif
