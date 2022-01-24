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

#ifndef TELEPHONY_SIM_STK_TEST
#define TELEPHONY_SIM_STK_TEST
#include <gtest/gtest.h>
#include <thread>
#include "common_event_manager.h"
#include "common_event_support.h"
#include "sim_proxy.h"
#include "sim_test.h"

const std::string ACTION_SESSION_END = "usual.event.telpnony.STK_SESSION_END";
static std::string g_getAction;

class SimCommonEvent {
public:
    std::string GetStkActionData()
    {
        int microsecond = 200000;
        usleep(microsecond);
        return g_getAction;
    }
};

class CommonEventTest : public OHOS::EventFwk::CommonEventSubscriber {
public:
    explicit CommonEventTest(const OHOS::EventFwk::CommonEventSubscribeInfo &sp)
        : OHOS::EventFwk::CommonEventSubscriber(sp) {};
    ~CommonEventTest() {};

    void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data);

private:
    const std::string PARAM_STK_SLOTID = "slotID";
    const int32_t DEFAULT_PARAM = -5;
};

void CommonEventTest::OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data)
{
    OHOS::EventFwk::Want want = data.GetWant();
    std::string action = want.GetAction();
    if (action == ACTION_SESSION_END) {
        g_getAction = action;
        want.GetIntParam(PARAM_STK_SLOTID, DEFAULT_PARAM);
        data.GetCode();
        data.GetData();
    }
};

class SimStkTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
};

void SimStkTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimStkTest SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimStkTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);

    g_getAction = "";
    OHOS::EventFwk::MatchingSkills matchingSkills;
    matchingSkills.AddEvent(ACTION_SESSION_END);
    OHOS::EventFwk::CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    std::shared_ptr<CommonEventTest> subScriber = std::make_shared<CommonEventTest>(subscribeInfo);
    OHOS::EventFwk::CommonEventManager::SubscribeCommonEvent(subScriber);
}

#endif
