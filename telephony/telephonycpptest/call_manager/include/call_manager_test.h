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

#ifndef TELEPHONY_CALL_MANAGER_FUNCTION_TEST
#define TELEPHONY_CALL_MANAGER_FUNCTION_TEST

#include <unordered_set>
#include <securec.h>
#include <string_ex.h>
#include <gtest/gtest.h>

#include "call_manager_basic.h"
#include "condition_lock.h"
#include "log.h"
#include "input/camera_manager.h"
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
enum CallTestEnum {
    SLOT_ID = 0,
    CALL_TYPE_IMS = 3,
    CALL_TYPE_CS = 0,
    INVALID_NEGATIVE_VALUE = -1,
    INVALID_VALUE_2 = 2,
    INVALID_VALUE_3 = 3,
    SLEEP_50_MS = 50,
    SLEEP_1000_MS = 1000,
    SLEEP_12000_MS = 12000,
    INVALIN_ENUM_VALUE = 83886080,
};

static int32_t g_updateCallIdArray[BUFSIZ] = { 0 };
static int g_newCallId = CallTestEnum::INVALIN_ENUM_VALUE;

static OHOS::AppExecFwk::PacMap g_updateResult;
static OHOS::AppExecFwk::PacMap g_updateOttResult;
static int32_t g_updateStartTime = CallTestEnum::INVALIN_ENUM_VALUE;
static bool g_updateIsEcc = CallTestEnum::INVALIN_ENUM_VALUE;
static OHOS::Telephony::TelConferenceState g_updateConference;
static bool g_updateSpeaker = CallTestEnum::INVALIN_ENUM_VALUE;
static CallType g_updateCallType = static_cast<CallType>(CallTestEnum::INVALIN_ENUM_VALUE);
static int32_t g_updateCallId = CallTestEnum::INVALIN_ENUM_VALUE;
static char g_updateAccountNumber[BUFSIZ] = { 0 };
static int32_t g_updateAccountId = CallTestEnum::INVALIN_ENUM_VALUE;
static VideoStateType g_updateVideoState = static_cast<VideoStateType>(CallTestEnum::INVALIN_ENUM_VALUE);
static TelCallState g_updateCallState = static_cast<TelCallState>(CallTestEnum::INVALIN_ENUM_VALUE);
static int32_t g_updateEventType = CallTestEnum::INVALIN_ENUM_VALUE;
static CallAbilityEventId g_updateEventId = static_cast<CallAbilityEventId>(CallTestEnum::INVALIN_ENUM_VALUE);
static int32_t g_updateSupplementResult = CallTestEnum::INVALIN_ENUM_VALUE;
static OHOS::Telephony::CallResultReportId g_updateReportId;
static OHOS::Telephony::OttCallRequestId g_updateOttRequestId;
static OHOS::Telephony::DisconnectedDetails g_updateCause;

class CallManagerFunctionTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static int Dial(std::u16string number);
    static bool HasState(int callId, TelCallState callState);
    void TestRestrictionCallBack(int HasRestriction);
    void TestTransferCallBack(int HasTransfer);
    static bool HasActiveStatus();

public:
    const int INVALID_NEGATIVE_SLOT_ID = -1;
    const int INVALID_SLOT_ID = 2;
    const int SLEEP_2_SEC = 2;
    const int INVALID_NEGATIVE_MODE = -1;
    const int INVALID_MODE = 2;
    const int INVALID_NEGATIVE_CALL_TYPE = -1;
    const int INVALID_RESTRICTION_TYPE = 8;
    const int INVALID_TRANSFER_TYPE = 4;
    const int INVALID_SETTING_TYPE = 5;
    const int SLEEP_30000_MS = 30000;
    const int FALSE_CALLID_100 = 100;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int FALSE_CALLID_1000 = 1000;
    const int FALSE_CALLID_999 = 999;
    const int INVALID_CALLID = 1234;
    const int32_t LONG_FALSE_CALLID = 2147483647;
    const int SLOT_ID = 0;
    const int SLOT_ID_3 = 3;
    static const int DOKA_SLOT_ID = 2;
    const int SET_CALL_WAITING_FIAL = 4;
    const int ERROR_RESULT = 83951647;
    const int SUCCESSFUL = 0;
    const int OPEN = 1;
    const int OFF = 0;
    const int ERROR_VALUES = 1;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string IMS_VALUES_0 = "0";
    const std::string IMS_VALUES_1 = "1";
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
    const int SLEEP_3_SEC = 3;
    const int SLEEP_5_SEC = 5;
    const int SLEEP_8_SEC = 8;
    const int INVALID_EVENT_ID = 20;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_1000_MS = 1000;
    const int32_t LONG_INVALID_CALLID = 2147483647;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string INVALID_CALL_PASSWORD = "0001";
    const std::string VALID_TRANSFER_NUMBER = "12599";
    const std::string INVALID_TRANSFER_NUMBER = "10000000001";

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

class CallManagerDialTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    static void TestRegisterCallBack(char phoneNumber[BUFSIZ]);

public:
    const int INVALID_NEGATIVE_MODE = -1;
    const int INVALID_AUDIO_TYPE = 4;
    const int SLOT_ID = 0;
    const int ACCOUNT_ID = 0;
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_3_SEC = 3;
    const int SLEEP_50_MS = 50;
    const int SLEEP_1000_MS = 1000;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_30000_MS = 30000;

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

class CallManagerMockTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    static void GetCallList(std::vector<std::u16string> ans);
    static int CleanCallList();

public:
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const int SLEEP_50_MS = 50;
    const int SLEEP_1000_MS = 1000;
    const int ACCOUNT_ID = 0;
    const int SLOT_ID = 0;
    const int INVALID_CALLID = 1234;
    const int FALSE_CALLID_999 = 999;
    const int ERROR_RESULT = 83951647;
    const int SLEEP_15000_MS = 15000;
    const int SLEEP_12000_MS = 12000;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string VALID_TRANSFER_NUMBER = "12599";

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

class CallManagerPerformanceTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

public:
    const int TEST_RUN_TIME_20 = 20;
    const int TEST_RUN_TIME_1000 = 1000;
    const int USEC_1000 = 1000;
    const int FALSE_CALLID_999 = 999;
    const int INVALID_CALLID = 1234;
    const int FALSE_DEFAULT = -1;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int SLOT_ID = 0;
    const int SLOT_ID_3 = 3;
    const int SUCCESSFUL = 0;
    const int TRUE_DEFAULT = 0;
    static const int NEGATIVE_DEFAULT = -1;
    const std::string IMS_VALUES_1 = "1";
    const int ERROR_VALUES = -1;
    const int CALL_TYPE_IMS = 3;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
    const int SLEEP_30000_MS = 30000;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string VALID_TRANSFER_NUMBER = "12599";

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

class CallManagerReliabilityTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

public:
    const int ERROR_VALUES = -1;
    const int ACCOUNT_ID = 0;
    static const int NEGATIVE_DEFAULT = -1;
    const int FALSE_DEFAULT = -1;
    const int OPEN = 1;
    const int TEST_RUN_TIME_1000 = 1000;
    const int TEST_RUN_TIME_10 = 10;
    const int TEST_RUN_TIME_5 = 5;
    const int SLOT_ID = 0;
    const int SLOT_ID_3 = 3;
    static const int VALID_ID = 0;
    const int FALSE_CALLID_999 = 999;
    const int INVALID_CALLID = 1234;
    const int SUCCESSFUL = 0;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const std::string EMPTY_DEFAULT = "";
    const std::string IMS_VALUES_0 = "0";
    const std::string IMS_VALUES_1 = "1";
    const int SLEEP_3_SEC = 3;
    const int CALL_TYPE_IMS = 3;
    const int SLEEP_30000_MS = 30000;
    const int SLEEP_3000_MS = 3000;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_50_MS = 50;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string VALID_TRANSFER_NUMBER = "12599";

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

static std::unique_ptr<CallManagerBasic> g_clientPtr = nullptr;
static AppExecFwk::PacMap g_dialInfo;
std::unordered_set<int> g_callIdSet;
std::unordered_map<int, std::unordered_set<TelCallState>> g_callStateMap;
std::vector<sptr<CameraInfo>> g_cameraObjList;
sptr<CameraManager> g_camManagerObj;

#ifdef CALLMANAGER_MOCK_TEST
int CallManagerMockTest::CleanCallList()
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

#ifdef CALLMANAGER_RTT_MOCK_TEST
int CallManagerMockTest::CleanCallList()
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

int CallManagerFunctionTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

void CallManagerMockTest::GetCallList(std::vector<std::u16string> ret)
{
    bool isEmpty = ret.empty();
    EXPECT_EQ(isEmpty, true);
    if (!ret.empty()) {
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            LOG("------------GetSubCallIdList = %s ------------", Str16ToStr8(*it).c_str());
        }
        ret.clear();
    }
}

bool CallManagerFunctionTest::HasState(int callId, TelCallState callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

bool CallManagerFunctionTest::HasActiveStatus()
{
    LOG("Waiting for activation !");
    int sumUseTime = 0;
    int slipMs = 50;
    int increasingTime = 1000;
    int useTimeMs = 18000;
    do {
        if (!(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_ACTIVE))) {
            usleep(slipMs * increasingTime);
            sumUseTime += slipMs;
        } else {
            LOG("===========wait %d ms callStatus:%d==============", sumUseTime, g_updateCallState);
            return true;
        }
    } while (useTimeMs > sumUseTime);
    LOG("===========wait %d ms callStatus:%d=====not ative=========", sumUseTime, g_updateCallState);
    return false;
}

void CallManagerFunctionTest::TestRestrictionCallBack(int HasRestriction)
{
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), HasRestriction, SLEEP_50_MS, SLEEP_1000_MS);
}

void CallManagerFunctionTest::TestTransferCallBack(int HasTransfer)
{
    LOCK_NUM_WHILE_NE(g_updateReportId, CallResultReportId::GET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), HasTransfer, SLEEP_50_MS, SLEEP_1000_MS);
    LOCK_STRING_WHILE_NE(
        g_updateResult.GetStringValue("number").c_str(), VALID_TRANSFER_NUMBER.c_str(), SLEEP_50_MS, SLEEP_1000_MS);
}

void CallManagerDialTest::TestRegisterCallBack(char phoneNumber[BUFSIZ])
{
    std::string updatePhoneNumber = g_updateAccountNumber;
    LOCK_STRING_WHILE_NE(
        updatePhoneNumber.c_str(), phoneNumber, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateSpeaker, true, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(
        g_updateAccountId, CallTestEnum::SLOT_ID, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(
        g_updateVideoState, VideoStateType::TYPE_VOICE, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateIsEcc, false, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, CallType::TYPE_CS, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateConference, TelConferenceState::TEL_CONFERENCE_IDLE, CallTestEnum::SLEEP_50_MS,
        CallTestEnum::SLEEP_12000_MS);
}

int32_t CallAbilityCallbackBasic::OnCallDetailsChange(const CallAttributeInfo &info)
{
    CallAttributeInfo callInfo = info;
    g_updateSpeaker = callInfo.speakerphoneOn;
    g_updateStartTime = callInfo.startTime;
    g_updateIsEcc = callInfo.isEcc;
    g_updateConference = callInfo.conferenceState;
    g_updateAccountId = callInfo.accountId;
    g_updateCallType = callInfo.callType;
    g_updateCallId = callInfo.callId;
    g_updateCallState = callInfo.callState;

    // set callid remove duplication, and set g_callStateMap space
    if (g_callIdSet.find(g_updateCallId) == g_callIdSet.end()) {
        g_callIdSet.insert(g_updateCallId);
        g_newCallId = g_updateCallId;
        std::unordered_set<TelCallState> newSet;
        newSet.clear();
        g_callStateMap.insert(std::pair<int, std::unordered_set<TelCallState>>(g_newCallId, newSet));
        LOG("===========================RegisterCallBack Successful===============================");
    }

    // set Map key and value
    g_callStateMap[g_updateCallId].insert(g_updateCallState);

    (void)memset_s(g_updateAccountNumber, sizeof(g_updateAccountNumber), '\0', sizeof(g_updateAccountNumber));
    int ret = strcpy_s(g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    if (ret != SUCCESSFUL) {
        LOG("g_updateAccountNumber copy failed");
        strcpy_s(g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    }
    g_updateVideoState = callInfo.videoState;
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnCallEventChange(const CallEventInfo &info)
{
    g_updateEventId = info.eventId;
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnReportAsyncResults(CallResultReportId reportId, AppExecFwk::PacMap &resultInfo)
{
    g_updateReportId = reportId;
    g_updateResult = resultInfo;
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnOttCallRequest(OttCallRequestId requestId, AppExecFwk::PacMap &info)
{
    g_updateOttRequestId = requestId;
    g_updateOttResult = info;
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnCallDisconnectedCause(DisconnectedDetails cause)
{
    g_updateCause = cause;
    return SUCCESSFUL;
}

// excute before first testcase
void CallManagerMockTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_FALSE) {
        LOG("connect server fail!!!");
        return;
    }
#ifdef CALLMANAGER_MOCK_TEST
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(ret, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, 0);
    LOG("SetCallPreferenceMode SUCCESS");
#endif
    g_callIdSet.clear();
    g_callIdSet.insert(CallTestEnum::INVALIN_ENUM_VALUE);
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerMockTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
        return;
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }
    g_updateStartTime = START_TIME_ERRO;
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateAccountId = ACCOUNT_ID_ERRO;
    g_updateCallId = CALL_ID_ERRO;
    g_updateCallType = CALL_TYPE_ERRO;
    g_newCallId = NEW_CALL_ID_ERRO;
#ifdef CALLMANAGER_MOCK_TEST
    CleanCallList();
#endif
}

// excute after each testcase
void CallManagerMockTest::TearDown() {}

// excute after last testcase
void CallManagerMockTest::TearDownTestCase()
{
#ifdef CALLMANAGER_MOCK_TEST
    CleanCallList();
#endif
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
        return;
    } else {
        g_clientPtr->UnInit();
    }
}

// excute before first testcase
void CallManagerFunctionTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_FALSE) {
        LOG("connect server fail!!!");
        return;
    }
    LOG("connect server success!!!");
#ifndef CALLMANAGER_FOUNCTION_HAVE_CARD_TEST
    int setCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(setCallType, 0);
    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(ret, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
#endif
#ifndef CALLMANAGER_FOUNCTION_TEST
    int setType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(setType, 0);
    int imsRet = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(imsRet, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
    LOG("SetCallPreferenceMode SUCCESS");
#endif

    g_callIdSet.clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
}

// excute before each testcase
void CallManagerFunctionTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
        return;
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }
    // add 2 seconds to prevent blocking by the carrier when dialing too fast
    sleep(SLEEP_3_SEC);
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
void CallManagerFunctionTest::TearDown() {}

// excute after last testcase
void CallManagerFunctionTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
        return;
    } else {
        g_clientPtr->UnInit();
    }
}

// excute before first testcase
void CallManagerDialTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_FALSE) {
        LOG("connect server fail!!!");
        return;
    }
    g_callIdSet.clear();
    g_callIdSet.insert(CallTestEnum::INVALIN_ENUM_VALUE);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerDialTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
        return;
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }

    // add 2 seconds to prevent blocking by the carrier when dialing too fast
    sleep(SLEEP_3_SEC);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), static_cast<int>(CallStateToApp::CALL_STATE_IDLE),
        SLEEP_50_MS, SLEEP_30000_MS);
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
void CallManagerDialTest::TearDown()
{
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_1000_MS);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(CallManagerFunctionTest::HasState(g_newCallId, TelCallState::CALL_STATUS_DISCONNECTED), true,
        SLEEP_50_MS, SLEEP_12000_MS);
    g_newCallId = FALSE_DEFAULT;
}

// excute after last testcase
void CallManagerDialTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
        return;
    } else {
        g_clientPtr->UnInit();
    }
}

// excute before first testcase
void CallManagerPerformanceTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_DEFAULT) {
        LOG("connect server fail!!!");
        return;
    }

    g_camManagerObj = CameraManager::GetInstance();
    g_cameraObjList = g_camManagerObj->GetCameras();
    ASSERT_FALSE(g_cameraObjList.empty());

    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(ret, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, 0);
    LOG("SetCallPreferenceMode SUCCESS");

    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerPerformanceTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    ASSERT_EQ(g_clientPtr->IsInit(), 0);
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
void CallManagerPerformanceTest::TearDown() {}

// excute after last testcase
void CallManagerPerformanceTest::TearDownTestCase()
{
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    char callPassword[BUFSIZ] = "0000";
    char transferNumber[BUFSIZ] = "12599";
    ASSERT_EQ(g_clientPtr->GetPtr()->SetMuted(false), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(CallManagerReliabilityTest::VALID_ID, true), 0);
    CallTransferInfo CallTransfer;
    CallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ERASURE;
    CallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    ASSERT_EQ(strcpy_s(CallTransfer.transferNum, BUFSIZ, callPassword), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(CallManagerReliabilityTest::VALID_ID, CallTransfer), 0);

    CallRestrictionInfo CallRestriction;
    CallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    CallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    ASSERT_EQ(strcpy_s(CallRestriction.password, BUFSIZ, transferNumber), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(CallManagerReliabilityTest::VALID_ID, CallRestriction), 0);
    LOG("> ---------- unInit");
    g_clientPtr->UnInit();
}

// excute before first testcase
void CallManagerReliabilityTest::SetUpTestCase()
{
    LOG("> ---------- publish ability");
    g_clientPtr = std::make_unique<CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    if (g_clientPtr->Init() == NEGATIVE_DEFAULT) {
        LOG("connect server fail!!!");
        return;
    }
    g_camManagerObj = CameraManager::GetInstance();
    g_cameraObjList = g_camManagerObj->GetCameras();
    ASSERT_FALSE(g_cameraObjList.empty());

    int ret = g_clientPtr->GetPtr()->EnableImsSwitch(CallTestEnum::SLOT_ID);
    ASSERT_EQ(ret, 0);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), 0, CallTestEnum::SLEEP_50_MS, CallTestEnum::SLEEP_1000_MS);
    int SetCallType = g_clientPtr->GetPtr()->SetCallPreferenceMode(CallTestEnum::SLOT_ID, CallTestEnum::CALL_TYPE_IMS);
    ASSERT_EQ(SetCallType, 0);
    LOG("SetCallPreferenceMode SUCCESS");
    g_callIdSet.clear();
    g_callIdSet.insert(CallTestEnum::INVALIN_ENUM_VALUE);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", static_cast<int>(VideoStateType::TYPE_VOICE));
    g_dialInfo.PutIntValue("dialScene", static_cast<int>(DialScene::CALL_PRIVILEGED));
    g_dialInfo.PutIntValue("dialType", static_cast<int>(DialType::DIAL_CARRIER_TYPE));
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerReliabilityTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    ASSERT_EQ(g_clientPtr->IsInit(), 0);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState(), static_cast<int>(CallStateToApp::CALL_STATE_IDLE),
        SLEEP_50_MS, SLEEP_30000_MS);
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
void CallManagerReliabilityTest::TearDown() {}

// excute after last testcase
void CallManagerReliabilityTest::TearDownTestCase()
{
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return;
    }
    char callPassword[BUFSIZ] = "0000";
    char transferNumber[BUFSIZ] = "12599";
    ASSERT_EQ(g_clientPtr->GetPtr()->SetMuted(false), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallWaiting(VALID_ID, true), 0);
    CallTransferInfo CallTransfer;
    CallTransfer.settingType = CallTransferSettingType::CALL_TRANSFER_ERASURE;
    CallTransfer.type = CallTransferType::TRANSFER_TYPE_UNCONDITIONAL;
    ASSERT_EQ(strcpy_s(CallTransfer.transferNum, BUFSIZ, callPassword), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(VALID_ID, CallTransfer), 0);

    CallRestrictionInfo CallRestriction;
    CallRestriction.mode = CallRestrictionMode::RESTRICTION_MODE_DEACTIVATION;
    CallRestriction.fac = CallRestrictionType::RESTRICTION_TYPE_ROAMING_INCOMING;
    ASSERT_EQ(strcpy_s(CallRestriction.password, BUFSIZ, transferNumber), 0);
    ASSERT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(VALID_ID, CallRestriction), 0);
    LOG("> ---------- unInit");
    g_clientPtr->UnInit();
}
} // namespace CallManager
} // namespace Telephony
} // namespace OHOS

#endif