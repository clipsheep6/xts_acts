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

#ifndef TELEPHONY_SIM_SET_TEST
#define TELEPHONY_SIM_SET_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"

static std::u16string g_defaultMailName;
static std::u16string g_defaultMailNumber;

class SimSetTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

class SimSetVoiceMailTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimSetTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }
    if (OHOS::Str16ToStr8(g_defaultCardName) == "") {
        int32_t simId = 0;
        std::u16string operatorName = g_proxy.GetHandler()->GetOperatorName(simId);
        if (OHOS::Str16ToStr8(operatorName) != "") {
            g_defaultCardName = operatorName;
        } else {
            g_defaultCardName = OHOS::Str8ToStr16("Card0");
        }
    }
    LOG("Default Card Name is: %s", OHOS::Str16ToStr8(g_defaultCardName).c_str());
}

void SimSetTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimSetTest::TearDown()
{
    // Restore initial state.
    int32_t simId = 0;
    int32_t open = 1;
    int sleepTime = 2;
    bool result = g_proxy.GetHandler()->IsSimActive(simId);
    if (!result) {
        bool retSet = g_proxy.GetHandler()->SetActiveSim(simId, open);
        if (!retSet) {
            LOG("SetActiveSim:Restore initial state fail...");
        }
    }
    sleep(sleepTime);
    std::u16string cardName = g_proxy.GetHandler()->GetShowName(simId);
    if (cardName != g_defaultCardName && OHOS::Str16ToStr8(g_defaultCardName) != "") {
        bool ret = g_proxy.GetHandler()->SetShowName(simId, g_defaultCardName);
        if (!ret) {
            LOG("SetShowName:Restore initial state fail...");
        }
    }
}

void SimSetVoiceMailTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }
    int32_t simId = 0;
    g_defaultMailName = g_proxy.GetHandler()->GetVoiceMailIdentifier(simId);
    g_defaultMailNumber = g_proxy.GetHandler()->GetVoiceMailNumber(simId);
}

void SimSetVoiceMailTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimSetVoiceMailTest::TearDown()
{
    int32_t simId = 0;
    if (OHOS::Str16ToStr8(g_defaultMailName) != "" && OHOS::Str16ToStr8(g_defaultMailNumber) != "") {
        bool ret = g_proxy.GetHandler()->SetVoiceMailInfo(simId, g_defaultMailName, g_defaultMailNumber);
        if (!ret) {
            LOG("Set voice mail information abnormal...");
        }
    }
}

#endif
