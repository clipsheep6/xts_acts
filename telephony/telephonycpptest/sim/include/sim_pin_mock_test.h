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

#ifndef TELEPHONY_SIM_PIN_MOCK_TEST
#define TELEPHONY_SIM_PIN_MOCK_TEST
#include <gtest/gtest.h>
#include <thread>
#include "stdio.h"
#include "securec.h"
#include "sim_proxy.h"
#include "sim_test.h"
#include "hril.h"
#include "sim_state_type.h"
#include "mock_vendor.h"
#include "mock_vendor_common.h"

static int32_t g_defaultSimState;

class SimPinMock {
public:
    void SwitchPinLockOpen(int32_t simId, std::string defaultPin);
    void SwitchPinLockClose(int32_t simId, std::string defaultPin);
    void MockSimStateSet(int32_t simState);
    void MockPinCodeSet(std::string pinCode);
    void MockPukCodeSet(std::string pukCode);
};

static std::shared_ptr<MockVendor> g_mockVender = std::make_shared<MockVendor>();
static std::shared_ptr<SimPinMock> g_pinMock = std::make_shared<SimPinMock>();

void SimPinMock::SwitchPinLockOpen(int32_t simId, std::string defaultPin)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(defaultPin),
        OHOS::Telephony::LockState::LOCK_ON,
    };

    int32_t result = g_proxy.GetHandler()->GetLockState(simId, OHOS::Telephony::LockType::PIN_LOCK);
    if (result == (int32_t)OHOS::Telephony::LockState::LOCK_OFF) {
        bool retValue = g_proxy.GetHandler()->SetLockState(simId, options, response);
        if (retValue != true || response.result != 0) {
            LOG("EnablePinLockState Fail...");
        }
    }
}

void SimPinMock::SwitchPinLockClose(int32_t simId, std::string defaultPin)
{
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::LockInfo options = {
        OHOS::Telephony::LockType::PIN_LOCK,
        OHOS::Str8ToStr16(defaultPin),
        OHOS::Telephony::LockState::LOCK_OFF,
    };

    int32_t result = g_proxy.GetHandler()->GetLockState(simId, OHOS::Telephony::LockType::PIN_LOCK);
    if (result == (int32_t)OHOS::Telephony::LockState::LOCK_ON) {
        bool retValue = g_proxy.GetHandler()->SetLockState(simId, options, response);
        if (retValue != true || response.result != 0) {
            LOG("DisablePinLockState Fail...");
        }
    }
}

void SimPinMock::MockSimStateSet(int32_t simState)
{
    int32_t rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
    char simStateStr[20];
    memset_s(simStateStr, sizeof(simStateStr), '\0', sizeof(simStateStr));
    switch (simState) {
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_UNKNOWN:
            rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT:
            rilSimState = HRilSimState::HRIL_SIM_NOT_INSERTED;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED:
            rilSimState = HRilSimState::HRIL_SIM_PIN;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY:
            rilSimState = HRilSimState::HRIL_SIM_READY;
            break;
        default:
            LOG("Input simState error...");
            break;
    }
    int ret = sprintf_s(simStateStr, sizeof(simStateStr), "%d", rilSimState);
    if (ret == -1) {
        LOG("An exception occurred in sprintf_s function...");
    } else {
        g_mockVender->MockVendorSet(DISPATCHID::SIM_SET_STATE, simStateStr, strlen(simStateStr));
    }
}

void SimPinMock::MockPinCodeSet(std::string pinCode)
{
    g_mockVender->MockVendorSet(DISPATCHID::SIM_SET_PIN, pinCode.c_str(), strlen(pinCode.c_str()));
}

void SimPinMock::MockPukCodeSet(std::string pukCode)
{
    g_mockVender->MockVendorSet(DISPATCHID::SIM_SET_PUK, pukCode.c_str(), strlen(pukCode.c_str()));
}

class SimStateMockTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

class SimPinLockMockTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

class SimPuk2MockTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimStateMockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimStateMockTest SetUpTestCase telephonyService_ error....");
        return;
    }
    if (g_mockVender->Init() != 0) {
        LOG("Init faild");
        return;
    }
    int32_t simId = EFFECTIVE_SLOT_ID;
    g_defaultSimState = g_proxy.GetHandler()->GetSimState(simId);
}

void SimStateMockTest::SetUp()
{
    int32_t dataLength = 0;
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
    g_mockVender->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

void SimStateMockTest::TearDown()
{
    int32_t simId = EFFECTIVE_SLOT_ID;
    int32_t retState = g_proxy.GetHandler()->GetSimState(simId);
    if (retState != g_defaultSimState) {
        g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    }
}

void SimPinLockMockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPinLockMockTest SetUpTestCase telephonyService_ error....");
        return;
    }
    if (g_mockVender->Init() != 0) {
        LOG("Init faild");
        return;
    }
}

void SimPinLockMockTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
    std::string defaultPin = "1234";
    int32_t dataLength = 0;
    int32_t simId = EFFECTIVE_SLOT_ID;
    g_mockVender->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
    g_pinMock->MockPinCodeSet(defaultPin);
    // Enable the PIN lock function.
    g_pinMock->SwitchPinLockOpen(simId, defaultPin);
}

void SimPinLockMockTest::TearDown()
{
    int32_t simId = EFFECTIVE_SLOT_ID;
    OHOS::Telephony::LockStatusResponse response;
    std::string defaultPin = "1234";
    std::string defaultPuk = "12345678";
    int32_t passwordWrong = -1;
    int32_t otherAbnormal = -2;
    int32_t retState = g_proxy.GetHandler()->GetSimState(simId);
    if (retState != g_defaultSimState) {
        g_pinMock->MockSimStateSet((int32_t)OHOS::Telephony::SimState::SIM_STATE_READY);
    }
    bool retValue = g_proxy.GetHandler()->UnlockPin(simId, OHOS::Str8ToStr16(defaultPin), response);
    if (retValue == true && response.result == passwordWrong) {
        // Use the analog vendor library to set the PIN to 1234
        g_pinMock->MockPinCodeSet(defaultPin);
        g_proxy.GetHandler()->UnlockPin(simId, OHOS::Str8ToStr16(defaultPin), response);
    } else if (retValue == true && response.result == otherAbnormal) {
        // Use the analog vendor library to set the PIN to 1234
        g_pinMock->MockPinCodeSet(defaultPin);
        // Use the analog vendor library to set the PUK to 12345678
        g_pinMock->MockPukCodeSet(defaultPuk);
        g_proxy.GetHandler()->UnlockPuk(simId, OHOS::Str8ToStr16(defaultPin), OHOS::Str8ToStr16(defaultPuk), response);
    }
    // Turn off the PIN lock function.
    g_pinMock->SwitchPinLockClose(simId, defaultPin);
}

void SimPuk2MockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimStateMockTest SetUpTestCase telephonyService_ error....");
        return;
    }
    if (g_mockVender->Init() != 0) {
        LOG("Init faild");
        return;
    }
}

void SimPuk2MockTest::SetUp()
{
    int32_t dataLength = 0;
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
    g_mockVender->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

void SimPuk2MockTest::TearDown()
{
    int32_t dataLength = 0;
    g_mockVender->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

#endif
