/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

#ifndef TELEPHONY_SIM_LOCK_STATE_TEST
#define TELEPHONY_SIM_LOCK_STATE_TEST
#include <gtest/gtest.h>
#include <thread>

#include "sim_pin2_test.h"
#include "sim_proxy.h"
#include "sim_test.h"

namespace OHOS {
namespace Telephony {
static bool g_isPin2True = false;
static bool g_isPinTrue = false;

class SimLockState {
public:
    void EnablePinLockState(int32_t simId)
    {
        OHOS::Telephony::LockStatusResponse response;
        OHOS::Telephony::LockInfo options = {
            OHOS::Telephony::LockType::PIN_LOCK,
            OHOS::Str8ToStr16(CORRECT_PIN),
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

    void DisablePinLockState(int32_t simId)
    {
        OHOS::Telephony::LockStatusResponse response;
        OHOS::Telephony::LockInfo options = {
            OHOS::Telephony::LockType::PIN_LOCK,
            OHOS::Str8ToStr16(CORRECT_PIN),
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

    void EnableFDNLockState(int32_t simId)
    {
        OHOS::Telephony::LockStatusResponse response;
        OHOS::Telephony::LockInfo options = {
            OHOS::Telephony::LockType::FDN_LOCK,
            OHOS::Str8ToStr16(CORRECT_PIN2),
            OHOS::Telephony::LockState::LOCK_ON,
        };

        int32_t result = g_proxy.GetHandler()->GetLockState(simId, OHOS::Telephony::LockType::FDN_LOCK);
        if (result == (int32_t)OHOS::Telephony::LockState::LOCK_OFF) {
            bool retValue = g_proxy.GetHandler()->SetLockState(simId, options, response);
            if (retValue != true || response.result != 0) {
                LOG("EnableFDNLockState Fail...");
            }
        }
    }

    void DisableFDNLockState(int32_t simId)
    {
        OHOS::Telephony::LockStatusResponse response;
        OHOS::Telephony::LockInfo options = {
            OHOS::Telephony::LockType::FDN_LOCK,
            OHOS::Str8ToStr16(CORRECT_PIN2),
            OHOS::Telephony::LockState::LOCK_OFF,
        };

        int32_t result = g_proxy.GetHandler()->GetLockState(simId, OHOS::Telephony::LockType::FDN_LOCK);
        if (result == (int32_t)OHOS::Telephony::LockState::LOCK_ON) {
            bool retValue = g_proxy.GetHandler()->SetLockState(simId, options, response);
            if (retValue != true || response.result != 0) {
                LOG("DisableFDNLockState Fail...");
            }
        }
    }

    bool CheckPinPukCode(int32_t simId)
    {
        int32_t unLocked = 0;
        std::string wrongPin = "2333";
        bool isRight = false;

        OHOS::Telephony::LockStatusResponse responseInfo;
        OHOS::Telephony::LockInfo options = {
            OHOS::Telephony::LockType::PIN_LOCK,
            OHOS::Str8ToStr16(CORRECT_PIN),
            OHOS::Telephony::LockState::LOCK_ON,
        };

        bool ret = g_proxy.GetHandler()->SetLockState(simId, options, responseInfo);
        if (ret && responseInfo.result == unLocked) {
            isRight = true;
            LOG("The PIN code is correct.");
            DisablePinLockState(simId);
            int32_t pinLockState = g_proxy.GetHandler()->GetLockState(simId, OHOS::Telephony::LockType::PIN_LOCK);
            LOG("The pin lock state is = %d", pinLockState);
        } else {
            isRight = false;
            LOG("Set pin lock state fail,maybe the PIN code is incorrect!!!");
        }
        return isRight;
    }
};

static std::shared_ptr<SimLockState> lockInfo = std::make_shared<SimLockState>();

class SimLockStateTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimLockStateTest::SetUpTestCase()
{
    LOG("The current sim card slot id valid value is : %d", EFFECTIVE_SLOT_ID);
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimLockStateTest SetUpTestCase telephonyService_ error....");
        return;
    }
    int32_t simId = EFFECTIVE_SLOT_ID;
    bool result = lockInfo->CheckPinPukCode(simId);
    if (result) {
        g_isPinTrue = true;
        lockInfo->DisablePinLockState(simId);
    }
    bool value = g_aboutPin2->CheckTheFDNLockFunction(simId);
    if (value) {
        g_isPin2True = true;
        lockInfo->DisableFDNLockState(simId);
    }
}

void SimLockStateTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimLockStateTest::TearDown()
{
    int32_t simId = EFFECTIVE_SLOT_ID;
    if (g_isPinTrue) {
        lockInfo->DisablePinLockState(simId);
    }
    if (g_isPin2True) {
        lockInfo->DisableFDNLockState(simId);
    }
}
} // namespace Telephony
} // namespace OHOS
#endif
