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
#include "i_network_search_callback_stub.h"
#include "sim_proxy.h"
#include "sim_test.h"

const int32_t SIM_CARD_MODE_CDMA = 200;
const int32_t SIM_CARD_MODE_ISIM = 201;
const int32_t SIM_CARD_MODE_AUTO = 0;

class SetCardType {
public:
    void SetSimCardType(int32_t simId, int32_t cardType, int32_t mode)
    {
        int32_t maxStepNumber = 6;
        OHOS::sptr<OHOS::Telephony::INetworkSearchCallbackStub> callback(
            new OHOS::Telephony::INetworkSearchCallbackStub());

        int32_t getCurrentType = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(simId));
        if (getCurrentType != cardType) {
            for (int32_t stepNumber = 0; stepNumber < maxStepNumber; stepNumber++) {
                bool setMode = g_proxy.GetHandler()->SetPreferredNetwork(simId, mode, callback);
                if (!setMode) {
                    LOG("Set sim card type error : %d", cardType);
                    break;
                }
                sleep(3);
                int32_t getType = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(simId));
                if (getType == cardType) {
                    LOG("Set sim card type success : %d", getType);
                    break;
                } else if ((getType != cardType) && (stepNumber == maxStepNumber - 1)) {
                    LOG("Set sim card type fail : %d", getType);
                    break;
                }
            }
        } else {
            LOG("The current card type is already the desired type : %d", getCurrentType);
        }
    }
};

static std::shared_ptr<SetCardType> setType = std::make_shared<SetCardType>();

class SimCMDATest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    static void TearDownTestCase();
};

class SimISIMTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    static void TearDownTestCase();
};

void SimCMDATest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimCMDATest SetUpTestCase telephonyService_ error....");
        return;
    }

    int32_t simId = 0;
    setType->SetSimCardType(simId, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_RUIM_CARD, SIM_CARD_MODE_CDMA);
}

void SimCMDATest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimCMDATest::TearDownTestCase()
{
    int32_t simId = 0;
    setType->SetSimCardType(simId, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_USIM_CARD, SIM_CARD_MODE_AUTO);
}

void SimISIMTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimISIMTest SetUpTestCase telephonyService_ error....");
        return;
    }

    int32_t simId = 0;
    setType->SetSimCardType(simId, (int32_t)OHOS::Telephony::CardType::CARD_MODE_IMS, SIM_CARD_MODE_ISIM);
}

void SimISIMTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimISIMTest::TearDownTestCase()
{
    int32_t simId = 0;
    setType->SetSimCardType(simId, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_USIM_CARD, SIM_CARD_MODE_AUTO);
}

#endif
