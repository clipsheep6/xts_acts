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

#ifndef TELEPHONY_CALL_MANAGER_IMS_TEST
#define TELEPHONY_CALL_MANAGER_IMS_TEST

#include <unordered_set>
#include <securec.h>
#include <string_ex.h>
#include <gtest/gtest.h>

#include "call_manager_basic.h"
#include "call_manager_test.h"
#include "condition_lock.h"
#include "input/camera_manager.h"
#include "log.h"
#ifdef CALLMANAGER_MOCK_TEST
#include "mock_vendor.h"
#endif

namespace OHOS {
namespace Telephony {
namespace CallManager {
using namespace OHOS::CameraStandard;
class CallManagerIMSTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);
    bool HasState(int callId, int callState);
#ifdef CALLMANAGER_MOCK_TEST
    static int CleanCallList();
#endif

public:
    const int INVALID_SLOT_ID = -1;
    const int INVALID_AUDIO_TYPE = 4;
    const int FALSE_CALLID_100 = 100;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int INVALID_CALLID = 1234;
    const int32_t LONG_INVALID_CALLID = 2147483647;
    const int SLOT_ID = 0;
    const int SLOT_ID_1 = 1;
    const int ACCOUNT_ID = 0;
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const std::string CLOSE_CAMERA = "";
    const int SLEEP_2_SEC = 2;
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_30000_MS = 30000;

public:
    const int VIDEO_STATE_ERRO = -1;
    const int CALL_STATE_ERRO = -1;
    const int EVENT_TYPE_ERRO = -1;
    const int EVENT_ID_ERRO = -1;
    const int ACCOUNT_ID_ERRO = -1;
    const int CALL_ID_ERRO = -1;
    const int CALL_TYPE_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
    const int START_TIME_ERRO = -1;
    const int CONFERENCE_ERRO = -1;
};

int CallManagerIMSTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

bool CallManagerIMSTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

#ifdef CALLMANAGER_MOCK_TEST
int CallManagerIMSTest::CleanCallList()
{
    int loop = 0;
    int maxLoop = 50;
    int sleepUs = 500000;
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, CleanCallList false !");
        return -1;
    } else {
        while (g_clientPtr->GetPtr()->GetCallState() != (int)CallStateToApp::CALL_STATE_IDLE && loop < maxLoop) {
            usleep(sleepUs);
            g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_ALL_CALL, nullptr, 0);
            loop++;
        }
        return 0;
    }
}
#endif

// excute before first testcase
void CallManagerIMSTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_FALSE) {
        LOG("connect server fail!!!");
    }

    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(slotId, CallTestEnum::callTypeIMS);
    ASSERT_EQ(SetCallType, 0);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, CallTestEnum::SLEEP_50_MS,
        CallTestEnum::SLEEP_12000_MS);

    g_camManagerObj = CameraManager::GetInstance();
    g_cameraObjList = g_camManagerObj->GetCameras();
    ASSERT_FALSE(g_cameraObjList.empty());

    g_callIdSet.clear();
    g_callIdSet.insert(-1);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_PRIVILEGED);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerIMSTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
        return;
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }

#ifdef CALLMANAGER_MOCK_TEST
    CleanCallList();
#endif

// add 2 seconds to prevent blocking by the carrier when dialing too fast
    sleep(SLEEP_2_SEC);
#ifdef CALLMANAGER_IMS_TEST
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), (int)CallStateToApp::CALL_STATE_IDLE,
        SLEEP_50_MS, SLEEP_30000_MS);
#endif
    g_updateStartTime = START_TIME_ERRO;
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateAccountId = ACCOUNT_ID_ERRO;
    g_updateCallId = CALL_ID_ERRO;
    g_updateCallType = CALL_TYPE_ERRO;
    g_newCallId = NEW_CALL_ID_ERRO;
}

// excute after each testcase
void CallManagerIMSTest::TearDown()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
        return;
    }
#ifdef CALLMANAGER_IMS_TEST
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
        SLEEP_12000_MS);
    g_newCallId = FALSE_DEFAULT;
#endif
}

// excute after last testcase
void CallManagerIMSTest::TearDownTestCase()
{
#ifdef CALLMANAGER_MOCK_TEST
    CleanCallList();
#endif
#ifdef CALLMANAGER_MOCK_TEST
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(slotId, CallTestEnum::callTypeCS);
    ASSERT_EQ(SetCallType, 0);
    LOCK_NUM_WHILE_NE(g_updateEventId, EVENT_SET_CALL_PREFERENCE_MODE_SUCCESS, CallTestEnum::SLEEP_50_MS,
        CallTestEnum::SLEEP_12000_MS);
#endif
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
        return;
    } else {
        g_clientPtr->UnInit();
    }
}
} // namespace CallManager
} // namespace Telephony
} // namespace OHOS

#endif // TELEPHONY_CALL_MANAGER_IMS_TEST