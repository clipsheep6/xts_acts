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

#ifndef TELEPHONY_SIM_TEST
#define TELEPHONY_SIM_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"

static OHOS::Telephony::SimProxy g_proxy;
static std::u16string g_defaultCardName;
static int32_t g_defaultSlotId;

class SimTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();

    static const int32_t SLOT_ID_3;
    static const int32_t SLOT_ID_2;
    static const int32_t VAILD_SLOT_ID;
    static const int32_t SLOTID_MINUS;

    static const int32_t LOOP_NUMBER;
    static const int32_t TIME_USEC;

    static const int32_t OTHER_ABNORMAL;
    static const int32_t PASSWORD_ERR;
    static const int32_t UNLOCKED;
    static const int32_t OPEN;
    static const int32_t CLOSE;

    static const int32_t INVALID_VALUE;
    static const int32_t DATA_LENGTH;
    static const unsigned int ICCID_LENGTH;
    static const unsigned int IMSI_LENGTH;
    static const unsigned int OPERATOR_NUM_LENGTH;
    static const unsigned int MIN_LENGTH;
    static const unsigned int PHONE_NUMBER_LENGTH;

    static const std::string MOBILE_CODE_1;
    static const std::string MOBILE_CODE_2;
    static const std::string MOBILE_CODE_3;
    static const std::string MOBILE_CODE_4;
    static const std::string UNICOM_CODE_1;
    static const std::string UNICOM_CODE_2;
    static const std::string UNICOM_CODE_3;
    static const std::string CHINANET_CODE_1;
    static const std::string CHINANET_CODE_2;
    static const std::string CHINANET_CODE_3;

    static const std::string MOBILE_SPN;
    static const std::string UNICOM_SPN;
    static const std::string CHINANET_SPN;

    static const int TYPE_THREE;
    static const int TYPE_FDN;
    static const int TYPE_ADN;
    static const int TYPE_ZERO;
    static const int TYPE_MINUS;
    static const int32_t PARAMETERS_ERR;

    static const std::string CONTACT_NAME;
    static const std::string CONTACT_NUMBER;
    static const std::string NEW_CONTACT_NAME;
    static const std::string NEW_CONTACT_NUMBER;

    static const int CONTACT_INDEX_1;
    static const int CONTACT_INDEX_2;

    static const std::u16string WRONG_PIN2;
    static const std::string ERROR_FDN_PIN2;
    static const std::u16string WRONG_PASSWORD;
    static const int32_t REMAIN_0;
    static const int32_t REMAIN_1;
    static const int32_t REMAIN_2;
    static const int32_t REMAIN_9;

    static const int LOCK_WAIT_SLIP;
    static const int LOCK_WAIT_TIMEOUT;
    static const int32_t CORE_NETWORK_MODE_GSM;

    static const std::string STK_CMD;
    static const std::string RESPONSE_CMD;
};

void SimTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SetUpTestCase telephonyService_ error....");
        return;
    }
    int32_t simId = EFFECTIVE_SLOT_ID;
    std::u16string operatorName = g_proxy.GetHandler()->GetOperatorName(simId);
    if (OHOS::Str16ToStr8(operatorName) != "") {
        g_defaultCardName = operatorName;
    } else {
        g_defaultCardName = OHOS::Str8ToStr16("Card");
    }
    LOG("Default Card Name is: %s", OHOS::Str16ToStr8(g_defaultCardName).c_str());
}

void SimTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

class SimDefaultIdTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimDefaultIdTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimDefaultIdTest SetUpTestCase telephonyService_ error....");
        return;
    }
    g_defaultSlotId = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    LOG("Get Default Voice Slot Id Is %d", g_defaultSlotId);
}

void SimDefaultIdTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimDefaultIdTest::TearDown()
{
    int32_t defaultSimId = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    if (defaultSimId != g_defaultSlotId) {
        bool ret = g_proxy.GetHandler()->SetDefaultVoiceSlotId(g_defaultSlotId);
        if (!ret) {
            LOG("Set Default Voice Slot Id Fail.");
        }
    }
}

#endif
