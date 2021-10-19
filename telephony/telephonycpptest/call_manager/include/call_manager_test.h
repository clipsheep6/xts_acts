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

#include <gtest/gtest.h>
#include <securec.h>
#include <string_ex.h>

#include "call_manager_basic.h"
#include "condition_lock.h"

#include "log.h"
#include <unordered_set>
#ifdef CALLMANAGER_MOCK_TEST
#include "mock_vendor.h"
#endif

namespace OHOS {
namespace Telephony {
namespace CallManager {
static int32_t g_updateCallIdArray[BUFSIZ] = { 0 };
static int g_newCallId = -1;
static int g_newCallState = -1;

static OHOS::AppExecFwk::PacMap g_updateResult;
static int32_t g_updateStartTime = -1;
static bool g_updateIsEcc = -1;
static OHOS::Telephony::TelConferenceState g_updateConference;
static bool g_updateSpeaker = -1;
static int32_t g_updateCallType = -1;
static int32_t g_updateCallId = -1;
static char g_updateAccountNumber[BUFSIZ] = { 0 };
static int32_t g_updateAccountId = -1;
static int32_t g_updateVideoState = -1;
static int32_t g_updateCallState = -1;
static int32_t g_updateEventType = -1;
static int32_t g_updateEventId = -1;
static int32_t g_updateSupplementResult = -1;
static OHOS::Telephony::CallResultReportId g_updateReportId;

class CallManagerFunctionTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    int Dial(std::u16string number);
    void GetCallList(std::vector<std::u16string> ans);
    bool HasState(int callId, int callState);
    void TestRestrictionCallBack(int HasRestriction);
    void TestTransferCallBack(int HasTransfer, int type);
    void RecoveryCallTransfer(CallTransferInfo CallTransfer);
    void RecoveryCallRestriction(CallRestrictionInfo CallRestriction);

public:
    const int INVALID_SLOT_ID = 10;
    const int SLEEP_30000_MS = 30000;
    const int FALSE_CALLID_100 = 100;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int FALSE_CALLID_1000 = 1000;
    const int AT_WILL_CALLID = 1234;
    const int SLOT_ID = 0;
    const int SUCCESSFUL = 0;
    const int OPEN = 1;
    const int OFF = 0;
    const int ERROR_VALUES = 1;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int32_t LONG_AT_WILL_CALLID = 2147483647;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string INVALID_CALL_PASSWORD = "0001";
    const std::string VALID_TRANSFER_NUMBER = "12599";
    const int SLEEP_15000_MS = 15000;

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

class CallManagerDialTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);
    void GetCallList(std::vector<std::u16string> ans);
    bool HasState(int callId, int callState);
    void TestRegisterCallBack(char phoneNumber[BUFSIZ]);

public:
    const int SLOT_ID = 0;
    const int ACCOUNT_ID = 0;
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_15000_MS = 15000;
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

class CallManagerMockTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);
    void GetCallList(std::vector<std::u16string> ret);
    bool HasState(int callId, int callState);
    void TestRegisterCallBack(char phoneNumber[BUFSIZ]);
#ifdef CALLMANAGER_MOCK_TEST
    static int CleanCallList();
#endif
public:
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int ACCOUNT_ID = 0;
    const int SLOT_ID = 0;
    const int SLEEP_15000_MS = 15000;
    const int SLEEP_30000_MS = 30000;
    const std::string VALID_CALL_PASSWORD = "0000";
    const std::string VALID_TRANSFER_NUMBER = "12599";

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

class CallManagerPerformanceTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);

public:
    const int TEST_RUN_TIME_20 = 20;
    const int USEC_500 = 500;
    const int FALSE_DEFAULT = -1;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int SLOT_ID = 0;
    const int SUCCESSFUL = 0;
    const int TRUE_DEFAULT = 0;
    static const int NEGATIVE_DEFAULT = -1;
    const int ERROR_VALUES = -1;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
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

class CallManagerReliabilityTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);
    bool HasState(int callId, int callState);

public:
    const int ERROR_VALUES = -1;
    const int ACCOUNT_ID = 0;
    static const int NEGATIVE_DEFAULT = -1;
    const int FALSE_DEFAULT = -1;
    const int TEST_RUN_TIME_1000 = 1000;
    const int TEST_RUN_TIME_50 = 50;
    const int SLOT_ID = 0;
    const int SUCCESSFUL = 0;
    const int TRUE_DEFAULT = 0;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_30000_MS = 30000;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_50_MS = 50;
    const std::string VALID_TRANSFER_NUMBER = "12599";

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

static std::unique_ptr<CallManagerBasic> g_clientPtr = nullptr;
static AppExecFwk::PacMap g_dialInfo;
std::unordered_set<int> g_callIdSet;
std::unordered_map<int, std::unordered_set<int>> g_callStateMap;

#ifdef CALLMANAGER_MOCK_TEST
int CallManagerMockTest::CleanCallList()
{
    int loop = 0;
    int maxLoop = 50;
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, CleanCallList false !");
        return -1;
    } else {
        while (g_clientPtr->GetPtr()->GetCallState() != (int)CallStateToApp::CALL_STATE_IDLE && loop < maxLoop) {
            g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_ALL_CALL, nullptr, 0);
            loop++;
        }
        return 0;
    }
}
#endif

int CallManagerFunctionTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}


void CallManagerFunctionTest::GetCallList(std::vector<std::u16string> ret)
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

bool CallManagerFunctionTest::HasState(int callId, int callState)
{
    if(g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if(g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

void CallManagerFunctionTest::TestRestrictionCallBack(int HasRestriction)
{
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_RESTRICTION_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), HasRestriction, SLEEP_50_MS, SLEEP_12000_MS);
}

void CallManagerFunctionTest::TestTransferCallBack(int HasTransfer, int type)
{
    LOCK_NUM_WHILE_NE(g_updateReportId, GET_CALL_TRANSFER_REPORT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("result"), SUCCESSFUL, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("status"), HasTransfer, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_STRING_WHILE_NE(g_updateResult.GetStringValue("number").c_str(), VALID_TRANSFER_NUMBER.c_str(),
            SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateResult.GetIntValue("type"), type, SLEEP_50_MS, SLEEP_12000_MS);
}

void CallManagerFunctionTest::RecoveryCallTransfer(CallTransferInfo CallTransfer)
{
    CallTransfer.settingType = REGISTRATION;
    int ret = strcpy_s(CallTransfer.transferNum, BUFSIZ, VALID_TRANSFER_NUMBER.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallTransferInfo(SLOT_ID, CallTransfer), SUCCESSFUL);
}

void CallManagerFunctionTest::RecoveryCallRestriction(CallRestrictionInfo CallRestriction)
{
    CallRestriction.mode = RESTRICTION_MODE_ACTIVATION;
    int ret = strcpy_s(CallRestriction.password, BUFSIZ, VALID_CALL_PASSWORD.c_str());
    ASSERT_EQ(ret, SUCCESSFUL);
    EXPECT_EQ(g_clientPtr->GetPtr()->SetCallRestriction(SLOT_ID, CallRestriction), SUCCESSFUL);
}

int CallManagerMockTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

void CallManagerMockTest::GetCallList(std::vector<std::u16string> ret)
{
    bool isEmpty = ret.empty();
    EXPECT_EQ(isEmpty, true);
    if (isEmpty == false) {
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            LOG("------------GetCallIdList = %s ------------", Str16ToStr8(*it).c_str());
        }
        ret.clear();
    }
}

void CallManagerMockTest::TestRegisterCallBack(char phoneNumber[BUFSIZ])
{
    std::string updatePhoneNumber = g_updateAccountNumber;
    LOCK_STRING_WHILE_NE(updatePhoneNumber.c_str(), phoneNumber, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateSpeaker, false, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateAccountId, ACCOUNT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateVideoState, (int)VideoStateType::TYPE_VOICE, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateIsEcc, false, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, (int)CallType::TYPE_CS, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_IDLE, SLEEP_50_MS, SLEEP_12000_MS);
}

void CallManagerDialTest::TestRegisterCallBack(char phoneNumber[BUFSIZ])
{
    std::string updatePhoneNumber = g_updateAccountNumber;
    LOCK_STRING_WHILE_NE(updatePhoneNumber.c_str(), phoneNumber, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateSpeaker, false, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateAccountId, ACCOUNT_ID, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateVideoState, (int)VideoStateType::TYPE_VOICE, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateIsEcc, false, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateCallType, (int)CallType::TYPE_CS, SLEEP_50_MS, SLEEP_12000_MS);
    LOCK_NUM_WHILE_NE(g_updateConference, (int)TelConferenceState::TEL_CONFERENCE_IDLE, SLEEP_50_MS, SLEEP_12000_MS);
}

bool CallManagerMockTest::HasState(int callId, int callState)
{
    if(g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if(g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

int CallManagerDialTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

bool CallManagerDialTest::HasState(int callId, int callState)
{
    if(g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if(g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

int CallManagerPerformanceTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

int CallManagerReliabilityTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

//screen callid and call state whether null
bool CallManagerReliabilityTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
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

//set callid remove duplication, and set g_callStateMap space
    if (g_callIdSet.find(g_updateCallId) == g_callIdSet.end()) {
        g_callIdSet.insert(g_updateCallId);
        g_newCallId = g_updateCallId;
        g_newCallState = g_updateCallState;
        std::unordered_set<int> newSet;
        newSet.clear();
        g_callStateMap.insert(std::pair<int, std::unordered_set<int>>(g_newCallId, newSet));
        LOG("===========================RegisterCallBack Successful===============================");
    }

//set Map key and value
    g_callStateMap[g_updateCallId].insert(g_updateCallState);

    (void)memset_s(g_updateAccountNumber, sizeof(g_updateAccountNumber), '\0', sizeof(g_updateAccountNumber));
    int ret = strcpy_s(g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    if (ret != SUCCESSFUL) {
        LOG("g_updateAccountNumber copy failed");
        strcpy_s(g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    }
    g_updateVideoState = callInfo.videoState;
    TELEPHONY_LOGI("OnUpdateCallStateInfo on");
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnCallEventChange(const CallEventInfo &info)
{
    g_updateEventId = info.eventId;
    TELEPHONY_LOGI("OnUpdateCallEvent on");
    return SUCCESSFUL;
}

int32_t CallAbilityCallbackBasic::OnSupplementResult(const CallResultReportId id, AppExecFwk::PacMap &resultInfo)
{
    g_updateReportId = id;
    g_updateResult = resultInfo;
    TELEPHONY_LOGI("OnUpdateSupplementResult on");
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
    }
    g_callIdSet.clear();
    g_callIdSet.insert(-1);
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerMockTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
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
    }
    g_callIdSet.clear();
    g_callIdSet.insert(-1);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerFunctionTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState() ,(int)CallStateToApp::CALL_STATE_IDLE,
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
void CallManagerFunctionTest::TearDown() {}

// excute after last testcase
void CallManagerFunctionTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
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
    }
    g_callIdSet.clear();
    g_callIdSet.insert(-1);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerDialTest::SetUp()
{
    if (g_clientPtr == nullptr) {
        LOG("g_clientPtr is nullptr, SetUp failed!");
    } else {
        ASSERT_EQ(g_clientPtr->IsInit(), SUCCESSFUL);
    }
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState() ,(int)CallStateToApp::CALL_STATE_IDLE,
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
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_15000_MS);
    int hangUpRet = g_clientPtr->GetPtr()->HangUpCall(g_newCallId);
    EXPECT_EQ(hangUpRet, SUCCESSFUL);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DISCONNECTED), true, SLEEP_50_MS,
        SLEEP_15000_MS);
}

// excute after last testcase
void CallManagerDialTest::TearDownTestCase()
{
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
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
    }
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerPerformanceTest::SetUp()
{
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
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
    } else {
        g_clientPtr->UnInit();
    }
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
    }
    g_callIdSet.clear();
    g_callIdSet.insert(-1);
    g_updateResult.Clear();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_NORMAL);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
    LOG("connect server success!!!");
}

// excute before each testcase
void CallManagerReliabilityTest::SetUp()
{
    ASSERT_EQ(g_clientPtr->IsInit(), 0);
    LOCK_NUM_WHILE_NE(g_clientPtr->GetPtr()->GetCallState() ,(int)CallStateToApp::CALL_STATE_IDLE,
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
    LOG("> ---------- unInit");
    if (g_clientPtr == nullptr) {
        LOG("g_clentPtr is nullptr, TearDownTestCase false !");
    } else {
        g_clientPtr->UnInit();
    }
}
} // namespace CallManager
} // namespace Telephony
} // namespace OHOS

#endif