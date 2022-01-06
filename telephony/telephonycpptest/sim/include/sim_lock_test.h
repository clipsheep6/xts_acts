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

#ifndef TELEPHONY_SIM_LOCK_TEST
#define TELEPHONY_SIM_LOCK_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_test.h"

class SimLockTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
};

void SimLockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimLockTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimLockTest::TearDownTestCase()
{
    int32_t simId = 0;
    int32_t totalType = 10;
    OHOS::Telephony::LockStatusResponse response;
    typedef typename OHOS::Telephony::PersoLockType PersoLockType;
    PersoLockType lockType;
    std::string lockPassword = "";
    int32_t unLock = 0;
    OHOS::Telephony::PersoLockInfo lockInfo = {
        OHOS::Telephony::PersoLockType::PN_PUK_LOCK,
        OHOS::Str8ToStr16(PN_PUK_LOCK_PASSWORD),
    };
    bool ret = g_proxy.GetHandler()->UnlockSimLock(simId, lockInfo, response);
    if (ret != true || response.result != unLock) {
        LOG("UnlockSimLock of PN_PUK_LOCK fail.");
    }

    for (int32_t type = 0; type < totalType; type++) {
        switch (type) {
            case 0:
                lockType = OHOS::Telephony::PersoLockType::PN_PIN_LOCK;
                lockPassword = PN_PIN_LOCK_PASSWORD;
                break;
            case 1:
                lockType = OHOS::Telephony::PersoLockType::PN_PUK_LOCK;
                lockPassword = PN_PUK_LOCK_PASSWORD;
                break;
            case 2:
                lockType = OHOS::Telephony::PersoLockType::PU_PIN_LOCK;
                lockPassword = PU_PIN_LOCK_PASSWORD;
                break;
            case 3:
                lockType = OHOS::Telephony::PersoLockType::PU_PUK_LOCK;
                lockPassword = PU_PUK_LOCK_PASSWORD;
                break;
            case 4:
                lockType = OHOS::Telephony::PersoLockType::PP_PIN_LOCK;
                lockPassword = PP_PIN_LOCK_PASSWORD;
                break;
            case 5:
                lockType = OHOS::Telephony::PersoLockType::PP_PUK_LOCK;
                lockPassword = PP_PUK_LOCK_PASSWORD;
                break;
            case 6:
                lockType = OHOS::Telephony::PersoLockType::PC_PIN_LOCK;
                lockPassword = PC_PIN_LOCK_PASSWORD;
                break;
            case 7:
                lockType = OHOS::Telephony::PersoLockType::PC_PUK_LOCK;
                lockPassword = PC_PUK_LOCK_PASSWORD;
                break;
            case 8:
                lockType = OHOS::Telephony::PersoLockType::SIM_PIN_LOCK;
                lockPassword = SIM_PIN_LOCK_PASSWORD;
                break;
            case 9:
                lockType = OHOS::Telephony::PersoLockType::SIM_PUK_LOCK;
                lockPassword = SIM_PUK_LOCK_PASSWORD;
                break;
            default:
                break;
        }
        OHOS::Telephony::PersoLockInfo lockInfos = {
            lockType,
            OHOS::Str8ToStr16(lockPassword),
        };
        bool results = g_proxy.GetHandler()->UnlockSimLock(simId, lockInfos, response);
        if (results != true || response.result != unLock) {
            LOG("UnlockSimLock fail, lock type is %d", (int32_t)lockType);
        }
    }
}

#endif
