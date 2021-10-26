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

enum LockRetvalue {
    LOCK_VALUE_0,
    LOCK_VALUE_1,
    LOCK_VALUE_2,
    LOCK_VALUE_3,
    LOCK_VALUE_4,
    LOCK_VALUE_5,
    LOCK_VALUE_6,
    LOCK_VALUE_7,
    LOCK_VALUE_8,
    LOCK_VALUE_9,
    LOCK_VALUE_10
};

enum RemainValue {
    REMAIN_0,
    REMAIN_1,
    REMAIN_2,
    REMAIN_3,
    REMAIN_4,
    REMAIN_5,
    REMAIN_6,
    REMAIN_7,
    REMAIN_8,
    REMAIN_9,
    REMAIN_10
};

class SimTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();

    static const int32_t INVALID_VALUE;
    static const int32_t DATA_LENGTH;
    static const int32_t OTHER_ABNORMAL;
    static const int32_t PASSWORD_ERR;
    static const int32_t LOOP_NUMBER;
    static const int32_t LOOP_TEN_TIMES;
    static const int32_t TIME_USEC;
    static const int32_t UNLOCKED;
    static const int32_t SLOTID_4;
    static const int32_t SLOTID_3;
    static const int32_t SLOTID_2;
    static const int32_t SLOTID_1;
    static const int32_t SLOTID_0;
    static const int32_t SLOTID_MINUS;
    static const int32_t OPEN;
    static const int32_t CLOSE;
    static const unsigned int ICCID_LENGTH;
    static const unsigned int IMSI_LENGTH;
    static const unsigned int OPERATOR_NUM_LENGTH;
    static const std::string MOBILE_CODE_1;
    static const std::string MOBILE_CODE_2;
    static const std::string MOBILE_CODE_3;
    static const std::string MOBILE_CODE_4;
    static const std::string UNICOM_CODE_1;
    static const std::string UNICOM_CODE_2;
    static const std::string UNICOM_CODE_3;
    static const std::string TELECOM_CODE_1;
    static const std::string TELECOM_CODE_2;
    static const std::string TELECOM_CODE_3;
    static const std::string MOBILE_SPN;
    static const std::string UNICOM_SPN;
    static const std::string TELECOM_SPN;
    static const unsigned int MIN_LENGTH;
    static const int TYPE_THREE;
    static const int TYPE_FDN;
    static const int TYPE_ADN;
    static const int TYPE_ZERO;
    static const int TYPE_MINUS;
    static const int32_t PARAMETERS_ERR;
    static const std::string CARD_NAME;
    static const std::string CARD_NUMBER;
    static const std::string NEW_CARD_NAME;
    static const std::string NEW_CARD_NUMBER;
    static const int CONTACT_INDEX_1;
    static const int CONTACT_INDEX_2;
    static const unsigned int PHONE_NUMBER_LENGTH;
    static const std::u16string WRONG_PIN2;
};

void SimTest::SetUpTestCase()
{
    LOG("SetUpTestCase start");
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SetUpTestCase telephonyService_ error....");
        return;
    }
    LOG("SetUpTestCase done");
}

void SimTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

#endif
