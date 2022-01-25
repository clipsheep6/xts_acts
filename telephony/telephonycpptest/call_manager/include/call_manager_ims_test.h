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
#    include "mock_vendor.h"
#endif
#ifdef CALLMANAGER_RTT_MOCK_TEST
#    include "mock_vendor.h"
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
    bool HasState(int callId, TelCallState callState);
    void TestRegisterCallBack(char phoneNumber[BUFSIZ]);
    bool HasActiveStatus();
    static int CleanCallList();

public:
    const int INVALID_SLOT_ID = -1;
    const int INVALID_AUDIO_TYPE = 4;
    const int FALSE_CALLID_100 = 100;
    const int INVALID_CALLID = 1234;
    static const int32_t LONG_NEGATIVE_CALLID = -2147483647;
    const int32_t LONG_FALSE_CALLID = 2147483647;
    const int SLOT_ID = 0;
    const int SLOT_ID_3 = 3;
    const int ACCOUNT_ID = 0;
    const int SUCCESSFUL = 0;
    const int SLEEP_3_SEC = 3;
    const int OPEN = 1;
    const int OFF = 0;
    const int FALSE_DEFAULT = -1;
    const int ERROR_VALUES = 1;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const std::string CLOSE_CAMERA = "";
    const int SLEEP_2_SEC = 2;
    const int SLEEP_5_SEC = 5;
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_30000_MS = 30000;
    const int SLEEP_1000_MS = 1000;
    const std::string VALID_TRANSFER_NUMBER = "12599";
    const std::string VALID_CALL_PASSWORD = "0000";

public:
    const VideoStateType VIDEO_STATE_ERRO = static_cast<VideoStateType>(CallTestEnum::INVALIN_ENUM_VALUE);
    const TelCallState CALL_STATE_ERRO = static_cast<TelCallState>(CallTestEnum::INVALIN_ENUM_VALUE);
    const int EVENT_TYPE_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
    const CallAbilityEventId EVENT_ID_ERRO = static_cast<CallAbilityEventId>(CallTestEnum::INVALIN_ENUM_VALUE);
    const int ACCOUNT_ID_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
    const int CALL_ID_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
    const CallType CALL_TYPE_ERRO = static_cast<CallType>(CallTestEnum::INVALIN_ENUM_VALUE);
    const int NEW_CALL_ID_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
    const int START_TIME_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
    const int CONFERENCE_ERRO = CallTestEnum::INVALIN_ENUM_VALUE;
};

int CallManagerIMSTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

bool CallManagerIMSTest::HasState(int callId, TelCallState callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

bool CallManagerIMSTest::HasActiveStatus()
{
    int sumUseTime = 0;
    int slipMs = 50;
    int increasingTime = 1000;
    int useTimeMs = 18000;
    do {
        if (!(HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE))) {
            usleep(slipMs * increasingTime);
            sumUseTime += slipMs;
        } else {
            LOG("===========wait %d ms callStatus:%d==============", sumUseTime, g_updateCallState);
            return true;
        }
    } while (useTimeMs > sumUseTime);
    LOG("===========wait %d ms callStatus:%d=====not active=========", sumUseTime, g_updateCallState);
    return false;
}
#ifdef CALLMANAGER_RTT_MOCK_TEST
int CallManagerIMSTest::CleanCallList()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, CleanCallList false !");
        return CallTestEnum::INVALIN_ENUM_VALUE;
    } else {
        LOG("------------CleanCallList ------------");
        g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_ALL_CALL, nullptr, 0);
        LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), static_cast<int>(CallStateToApp::CALL_STATE_IDLE),
            CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
        return 0;
    }
}
#endif

#ifdef CALLMANAGER_MOCK_TEST
int CallManagerIMSTest::CleanCallList()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, CleanCallList false !");
        return CallTestEnum::INVALIN_ENUM_VALUE;
    } else {
        LOG("------------CleanCallList ------------");
        g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_ALL_CALL, nullptr, 0);
        LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), static_cast<int>(CallStateToApp::CALL_STATE_IDLE),
            CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
        return 0;
    }
}
#endif

void CallManagerIMSTest::TestRegisterCallBack(char phoneNumber[BUFSIZ])
{
    std::string updatePhoneNumber = g_updateAccountNumber;
    LOCK_STRING_WHILE_NE(updatePhoneNumber.c_str(), phoneNumber, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateSpeaker, true, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateAccountId, ACCOUNT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateVideoState, VideoStateType::TYPE_VOICE, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateIsEcc, false, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, CallType::TYPE_IMS, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_IDLE, SLEEP_50_MS, SLEEP_12000_MS);
}

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
    LOG("connect server success!!!");

    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(ret, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, 0);
    LOG("SetCallPreferenceMode SUCCESS");

    g_camManagerObj = CameraManager::GetInstance();
    g_cameraObjList = g_camManagerObj->GetCameras();
    ASSERT_FALSE(g_cameraObjList.empty());

    g_callIdSet.clear();
    g_callIdSet.insert(CallTestEnum::INVALIN_ENUM_VALUE);
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
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

    // add 2 seconds to prevent blocking by the carrier when dialing too fast
    sleep(SLEEP_2_SEC);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), static_cast<int>(CallStateToApp::CALL_STATE_IDLE),
        SLEEP_50_MS, SLEEP_30000_MS);
    g_updateResult.Clear();
    g_updateReportId = static_cast<CallResultReportId>(CallTestEnum::INVALIN_ENUM_VALUE);
    g_updateConference = static_cast<OHOS::Telephony::TelConferenceState>(CallTestEnum::INVALIN_ENUM_VALUE);
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
#ifndef CALLMANAGER_RTT_MOCK_TEST
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_12000_MS);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS, SLEEP_12000_MS);
    g_newCallId = FALSE_DEFAULT;
#endif
}

// excute after last testcase
void CallManagerIMSTest::TearDownTestCase()
{
#ifdef CALLMANAGER_MOCK_TEST
    CleanCallList();
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_CS);
    ASSERT_EQ(SetCallType, 0);
#endif
#ifdef CALLMANAGER_RTT_MOCK_TEST
    CleanCallList();
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_CS);
    ASSERT_EQ(SetCallType, 0);
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