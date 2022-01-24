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

#ifndef TELEPHONY_SIM_LOCK_TYPE_TEST
#define TELEPHONY_SIM_LOCK_TYPE_TEST
#include <gtest/gtest.h>
#include <map>
#include <thread>
#include "sim_test.h"

class SimSetLockType {
public:
    void ResetAllLockTypes(int32_t simId);
};

void SimSetLockType::ResetAllLockTypes(int32_t simId)
{
    int32_t unLock = 0;
    typedef typename OHOS::Telephony::PersoLockType PersoLockType;
    OHOS::Telephony::LockStatusResponse response;
    std::map<PersoLockType, std::string> lockTypeAndPassword = {
        {OHOS::Telephony::PersoLockType::PN_PIN_LOCK, PN_PIN_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PN_PUK_LOCK, PN_PUK_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PU_PIN_LOCK, PU_PIN_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PU_PUK_LOCK, PU_PUK_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PP_PIN_LOCK, PP_PIN_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PP_PUK_LOCK, PP_PUK_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PC_PIN_LOCK, PC_PIN_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::PC_PUK_LOCK, PC_PUK_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::SIM_PIN_LOCK, SIM_PIN_LOCK_PASSWORD},
        {OHOS::Telephony::PersoLockType::SIM_PUK_LOCK, SIM_PUK_LOCK_PASSWORD}};

    auto iter = lockTypeAndPassword.begin();
    while (iter != lockTypeAndPassword.end()) {
        OHOS::Telephony::PersoLockInfo lockInfos = {
            iter->first,
            OHOS::Str8ToStr16(iter->second),
        };
        bool results = g_proxy.GetHandler()->UnlockSimLock(simId, lockInfos, response);
        if (results != true || response.result != unLock) {
            LOG("UnlockSimLock fail, lock type is %d", (int32_t)(iter->first));
        }
        iter++;
    }
}

class SimLockTypeTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
};

void SimLockTypeTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimLockTypeTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimLockTypeTest::TearDownTestCase()
{
    int32_t simId = EFFECTIVE_SLOT_ID;
    int32_t unLock = 0;
    OHOS::Telephony::LockStatusResponse response;
    OHOS::Telephony::PersoLockInfo lockInfo = {
        OHOS::Telephony::PersoLockType::PN_PUK_LOCK,
        OHOS::Str8ToStr16(PN_PUK_LOCK_PASSWORD),
    };
    bool ret = g_proxy.GetHandler()->UnlockSimLock(simId, lockInfo, response);
    if (ret != true || response.result != unLock) {
        LOG("UnlockSimLock of PN_PUK_LOCK fail.");
    }
    static std::shared_ptr<SimSetLockType> g_lockType = std::make_shared<SimSetLockType>();
    g_lockType->ResetAllLockTypes(simId);
}

#endif
