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

#ifndef TELEPHONY_SIM_CDMA_TEST
#define TELEPHONY_SIM_CDMA_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"

static bool isCDMA = false;

class SimCDMATest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
};

void SimCDMATest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimCDMATest SetUpTestCase telephonyService_ error....");
        return;
    }
    int32_t simId = 0;
    int32_t delayTime = 2;
    int32_t result = g_proxy.GetHandler()->RefreshSimState(simId);
    LOG("RefreshSimState return value is : %d", result);
    sleep(delayTime);
    int32_t cardType = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(simId));
    LOG("Card type is : %d", cardType);
    if (cardType == (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_RUIM_CARD) {
        isCDMA = true;
    }
}

void SimCDMATest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

#endif
