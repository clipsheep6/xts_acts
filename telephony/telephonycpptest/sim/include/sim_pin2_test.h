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

#ifndef TELEPHONY_SIM_PIN2_TEST
#define TELEPHONY_SIM_PIN2_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"

static bool g_isCorrect = false;

class SimAboutPin2 {
public:
    void TriggerPuk2Lock(std::u16string wrongPin2);
    int32_t RestoreNormalPin2Status(std::u16string rightPin2);
    int32_t RestoreNormalPuk2Status(std::u16string rightPin2, std::u16string rightPuk2);
    bool CheckPin2Puk2Code(int32_t simId);
    bool CheckTheFDNLockFunction(int32_t simId);
};

static std::shared_ptr<SimAboutPin2> g_aboutPin2 = std::make_shared<SimAboutPin2>();

void SimAboutPin2::TriggerPuk2Lock(std::u16string wrongPin2)
{
    int32_t simId = 0;
    int32_t errorTimes = 4;
    int32_t unLocked = 0;
    OHOS::Telephony::LockStatusResponse responseInfo;
    bool ret = g_proxy.GetHandler()->UnlockPin2(simId, OHOS::Str8ToStr16(CORRECT_PIN2), responseInfo);
    if (ret && responseInfo.result == unLocked) {
        // Entering incorrect pin2 code three times causes the puk2 lock to be triggered.
        for (int32_t loopNumber = 0; loopNumber < errorTimes; loopNumber++) {
            g_proxy.GetHandler()->UnlockPin2(simId, wrongPin2, responseInfo);
        }
    } else {
        LOG("The PIN2 code configured is incorrect. Please do not proceed.");
    }
}

int32_t SimAboutPin2::RestoreNormalPin2Status(std::u16string rightPin2)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    bool retValue = g_proxy.GetHandler()->UnlockPin2(simId, rightPin2, response);
    if (retValue) {
        return response.result;
    } else {
        LOG("UnlockPin2 error...");
        return -1;
    }
}

int32_t SimAboutPin2::RestoreNormalPuk2Status(std::u16string rightPin2, std::u16string rightPuk2)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    bool retValue = g_proxy.GetHandler()->UnlockPuk2(simId, rightPin2, rightPuk2, response);
    if (retValue) {
        return response.result;
    } else {
        LOG("UnlockPuk2 error...");
        return -1;
    }
}

bool SimAboutPin2::CheckPin2Puk2Code(int32_t simId)
{
    int32_t unLocked = 0;
    int32_t errorTimes = 3;
    std::string wrongPin2 = "2333";
    bool isRight = false;
    OHOS::Telephony::LockStatusResponse responseInfo;
    bool ret = g_proxy.GetHandler()->UnlockPin2(simId, OHOS::Str8ToStr16(CORRECT_PIN2), responseInfo);
    if (ret && responseInfo.result == unLocked) {
        // Trigger PUK2 lock and verify PUK2 code is correct.
        for (int32_t loopNumber = 0; loopNumber < errorTimes; loopNumber++) {
            g_proxy.GetHandler()->UnlockPin2(simId, OHOS::Str8ToStr16(wrongPin2), responseInfo);
        }
        OHOS::Telephony::LockStatusResponse response;
        bool retValue = g_proxy.GetHandler()->UnlockPuk2(
            simId, OHOS::Str8ToStr16(CORRECT_PIN2), OHOS::Str8ToStr16(CORRECT_PUK2), response);
        if (retValue && response.result == unLocked) {
            isRight = true;
            LOG("The PIN2 code and PUK2 code are correct.");
        } else {
            isRight = false;
            LOG("The PIN2 code is correct, but PUK2 code is wrong!!!");
        }
    } else {
        isRight = false;
        LOG("The PIN2 code is incorrect!!!");
    }
    return isRight;
}

bool SimAboutPin2::CheckTheFDNLockFunction(int32_t simId)
{
    bool isRight = false;
    isRight = CheckPin2Puk2Code(simId);
    if (!isRight) {
        return isRight;
    }

    int32_t unLocked = 0;
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::FDN_LOCK,
        OHOS::Str8ToStr16(CORRECT_PIN2),
        OHOS::Telephony::LockState::LOCK_ON,
    };
    bool retValue = g_proxy.GetHandler()->SetLockState(simId, options, response);
    if (retValue && response.result == unLocked) {
        isRight = true;
        LOG("The FDN function is enabled successfully.");
        options.lockState = OHOS::Telephony::LockState::LOCK_OFF;
        g_proxy.GetHandler()->SetLockState(simId, options, response);
    } else {
        isRight = false;
        LOG("The FND function cannot be enabled!!!");
    }
    return isRight;
}

class SimPin2Test : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

class SimPuk2Test : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimPin2Test::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }

    if (!g_isCorrect) {
        int32_t simId = 0;
        g_isCorrect = g_aboutPin2->CheckPin2Puk2Code(simId);
    }
}

void SimPin2Test::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimPin2Test::TearDown()
{
    if (g_isCorrect) {
        std::u16string truePin2 = OHOS::Str8ToStr16(CORRECT_PIN2);
        // Input the correct pin2 code to restore the normal status of pin2.
        int32_t ret = g_aboutPin2->RestoreNormalPin2Status(truePin2);
        if (ret != 0) {
            LOG("RestoreNormalPin2Status fail.");
        }
    }
}

void SimPuk2Test::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPuk2Test SetUpTestCase telephonyService_ error....");
        return;
    }

    if (!g_isCorrect) {
        int32_t simId = 0;
        g_isCorrect = g_aboutPin2->CheckPin2Puk2Code(simId);
    }
}

void SimPuk2Test::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimPuk2Test::TearDown()
{
    if (g_isCorrect) {
        std::u16string truePin2 = OHOS::Str8ToStr16(CORRECT_PIN2);
        std::u16string truePuk2 = OHOS::Str8ToStr16(CORRECT_PUK2);
        // Input the correct puk2 code to restore the normal status of puk2.
        int32_t ret = g_aboutPin2->RestoreNormalPuk2Status(truePin2, truePuk2);
        if (ret != 0) {
            LOG("RestoreNormalPin2Status fail...");
        }
    }
}

class SimOtherPin2Test : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
};

void SimOtherPin2Test::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimOtherPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }

    if (!g_isCorrect) {
        int32_t simId = 0;
        g_isCorrect = g_aboutPin2->CheckPin2Puk2Code(simId);
    }
}

void SimOtherPin2Test::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

#endif
