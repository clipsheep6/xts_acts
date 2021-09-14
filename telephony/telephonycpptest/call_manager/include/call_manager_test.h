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

#include "call_manager_basic.h"
#include <gtest/gtest.h>
#include <securec.h>
#include <string_ex.h>
#include "log.h"
#include "utils.h"
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
static int32_t g_updateCallType = -1;
static int32_t g_updateCallId = -1;
static char g_updateAccountNumber[BUFSIZ] = { 0 };
static int32_t g_updateAccountId = -1;
static int32_t g_updateVideoState = -1;
static int32_t g_updateCallState = -1;
static int32_t g_updateEventType = -1;
static int32_t g_updateEventId = -1;
static int32_t g_updateSupplementResult = -1;
static int32_t g_updateReportId = -1;

class CallManagerFunctionTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    int Dial(std::u16string number);
    void GetCallList(std::vector<std::u16string> ans);
    bool HasState(int callId, int callState);

public:
    const int SLEEP_3000_MS = 3000;
    const int FALSE_CALLID_100 = 100;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int FALSE_CALLID_1000 = 1000;
    const int AT_WILL_CALLID = 1234;
    const int SLOT_ID = 0;
    static const int SLOT_ID_NO_CARD = 0;
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    const int ERROR_VALUES = 1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const std::string EMPTY_DEFAULT = "";
    const int INVALID_SLOT_ID = 10;
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_15000_MS = 15000;
    const int SLEEP_30000_MS = 30000;

public:
    const int VIDEO_STATE_ERRO = -1;
    const int CALL_STATE_ERRO = -1;
    const int EVENT_TYPE_ERRO = -1;
    const int EVENT_ID_ERRO = -1;
    const int REPORT_ID_ERRO = -1;
    const int ACCOUNT_ID_ERRO = -1;
    const int CALL_ID_ERRO = -1;
    const int CALL_TYPE_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
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

public:
    const int SLEEP_3000_MS = 3000;
    const int FALSE_CALLID_100 = 100;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int FALSE_CALLID_1000 = 1000;
    const int AT_WILL_CALLID = 1234;
    const int SLOT_ID = 0;
    static const int SLOT_ID_NO_CARD = 0;
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
    const int REPORT_ID_ERRO = -1;
    const int ACCOUNT_ID_ERRO = -1;
    const int CALL_ID_ERRO = -1;
    const int CALL_TYPE_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
};

class CallManagerMockTest : public testing::Test {
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
    const int SUCCESSFUL = 0;
    const int FALSE_DEFAULT = -1;
    static const int NEGATIVE_FALSE = -1;
    static const int TRUE_DEFAULT = 0;
    const int SLEEP_50_MS = 50;
    const int SLEEP_12000_MS = 12000;
    const int SLEEP_30000_MS = 30000;

public:
    const int VIDEO_STATE_ERRO = -1;
    const int CALL_STATE_ERRO = -1;
    const int EVENT_TYPE_ERRO = -1;
    const int EVENT_ID_ERRO = -1;
    const int REPORT_ID_ERRO = -1;
    const int ACCOUNT_ID_ERRO = -1;
    const int CALL_ID_ERRO = -1;
    const int CALL_TYPE_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
};

class CallManagerPerformanceTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

public:
    const int TEST_RUN_TIME_20 = 20;
    const int USEC_500 = 500;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const int SLOT_ID = 0;
    const int SUCCESSFUL = 0;
    const int TRUE_DEFAULT = 0;
    static const int NEGATIVE_DEFAULT = -1;
    const int ERROR_VALUES = -1;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_50_MS = 50;
    const int SLEEP_30000_MS = 30000;
};

class CallManagerReliabilityTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    bool HasState(int callId, int callState);

public:
    const int ERROR_VALUES = -1;
    static const int NEGATIVE_DEFAULT = -1;
    const int TEST_RUN_TIME_1000 = 1000;
    const int SLOT_ID = 0;
    const int SLEEP_8000_MS = 8000;
    const int SUCCESSFUL = 0;
    const int TRUE_DEFAULT = 0;
    const int FALSE_NEGATIVE_CALLID_100 = -100;
    const std::string EMPTY_DEFAULT = "";
    const int SLEEP_30000_MS = 30000;
    const int SLEEP_50_MS = 50;

public:
    const int VIDEO_STATE_ERRO = -1;
    const int CALL_STATE_ERRO = -1;
    const int EVENT_TYPE_ERRO = -1;
    const int EVENT_ID_ERRO = -1;
    const int REPORT_ID_ERRO = -1;
    const int ACCOUNT_ID_ERRO = -1;
    const int CALL_ID_ERRO = -1;
    const int CALL_TYPE_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
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
            g_mockVender_.MockVendorSet(DISPATCHID::CALL_REMOVE_ALL_CALL, nullptr, TRUE_DEFAULT);
            loop++;
        }
        return TRUE_DEFAULT;
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
    EXPECT_NE(isEmpty, true);
    if (!ret.empty()) {
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            LOG("------------GetSubCallIdList = %s ------------", Str16ToStr8(*it).c_str());
        }
        ret.clear();
    }
}

bool CallManagerFunctionTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

int CallManagerMockTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

int CallManagerDialTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

void CallManagerDialTest::GetCallList(std::vector<std::u16string> ret)
{
    bool isEmpty = ret.empty();
    EXPECT_NE(isEmpty, true);
    if (!ret.empty()) {
        for (auto it = ret.begin(); it != ret.end(); ++it) {
            LOG("------------GetSubCallIdList = %s ------------", Str16ToStr8(*it).c_str());
        }
        ret.clear();
    }
}

bool CallManagerDialTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

bool CallManagerMockTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

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

    g_updateAccountId = callInfo.accountId;
    g_updateCallType = callInfo.callType;
    g_updateCallId = callInfo.callId;
    g_updateCallState = callInfo.callState;

    if (g_callIdSet.find(g_updateCallId) == g_callIdSet.end()) {
        g_callIdSet.insert(g_updateCallId);
        g_newCallId = g_updateCallId;
        g_newCallState = g_updateCallState;
        std::unordered_set<int> newSet;
        newSet.clear();
        g_callStateMap.insert(std::pair<int, std::unordered_set<int>>(g_newCallId, newSet));
        LOG("===========================RegisterCallBack Successful===============================");
    }

    g_callStateMap[g_newCallId].insert(g_updateCallState);

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
    g_updateResult = resultInfo;
    g_updateReportId = id;
    TELEPHONY_LOGI("OnUpdateSupplementResult on");
    return TELEPHONY_SUCCESS;
}

CallAbilityCallbackBasicStub::~CallAbilityCallbackBasicStub()
{
    memberFuncMap_.clear();
}

int CallAbilityCallbackBasicStub::OnRemoteRequest(uint32_t code, MessageParcel &data, MessageParcel &reply,
                                                  MessageOption &option)
{
    std::u16string myDescriptor = CallAbilityCallbackBasicStub::GetDescriptor();
    std::u16string remoteDescriptor = data.ReadInterfaceToken();
    if (myDescriptor != remoteDescriptor) {
        TELEPHONY_LOGE("descriptor checked failed");
        return TELEPHONY_BAD_TYPE;
    }
    TELEPHONY_LOGD("OnReceived, cmd = %{public}u", code);

    auto itFunc = memberFuncMap_.find(code);
    if (itFunc != memberFuncMap_.end()) {
        auto memberFunc = itFunc->second;
        if (memberFunc != nullptr) {
            return (this->*memberFunc)(data, reply);
        }
    }
    return IPCObjectStub::OnRemoteRequest(code, data, reply, option);
}

int32_t CallAbilityCallbackBasicStub::CallStateInfoRequestBasic(MessageParcel &data, MessageParcel &reply)
{
    TELEPHONY_LOGE("start");
    int32_t result = TELEPHONY_SUCCESS;
    const CallAttributeInfo *parcelPtr = nullptr;
    int32_t len = data.ReadInt32();
    if (len <= 0) {
        TELEPHONY_LOGE("Invalid parameter, len = %{public}d", len);
        return TELEPHONY_FAIL;
    }
    if (!data.ContainFileDescriptors()) {
        TELEPHONY_LOGW("sent raw data is less than 32k");
    }
    if ((parcelPtr = reinterpret_cast<const CallAttributeInfo *>(data.ReadRawData(len))) == nullptr) {
        TELEPHONY_LOGE("reading raw data failed, length = %d", len);
        return TELEPHONY_FAIL;
    }

    result = OnCallDetailsChange(*parcelPtr);
    if (!reply.WriteInt32(result)) {
        TELEPHONY_LOGE("writing parcel failed");
        return TELEPHONY_FAIL;
    }
    TELEPHONY_LOGE("end");
    return TELEPHONY_SUCCESS;
}

int32_t CallAbilityCallbackBasicStub::CallEventRequestBasic(MessageParcel &data, MessageParcel &reply)
{
    int32_t result = TELEPHONY_SUCCESS;
    const CallEventInfo *parcelPtr = nullptr;
    int32_t len = data.ReadInt32();
    if (len <= 0) {
        TELEPHONY_LOGE("Invalid parameter, len = %{public}d", len);
        return TELEPHONY_FAIL;
    }
    if (!data.ContainFileDescriptors()) {
        TELEPHONY_LOGW("sent raw data is less than 32k");
    }
    if ((parcelPtr = reinterpret_cast<const CallEventInfo *>(data.ReadRawData(len))) == nullptr) {
        TELEPHONY_LOGE("reading raw data failed, length = %d", len);
        return TELEPHONY_FAIL;
    }

    result = OnCallEventChange(*parcelPtr);
    if (!reply.WriteInt32(result)) {
        TELEPHONY_LOGE("writing parcel failed");
        return TELEPHONY_FAIL;
    }
    return TELEPHONY_SUCCESS;
}

int32_t CallAbilityCallbackBasicStub::SupplementResultRequestBasic(MessageParcel &data, MessageParcel &reply)
{
    int32_t result = TELEPHONY_SUCCESS;
    AppExecFwk::PacMap resultInfo;
    CallResultReportId reportId = static_cast<CallResultReportId>(data.ReadInt32());
    resultInfo.PutIntValue("result", data.ReadInt32());
    switch (reportId) {
        case CallResultReportId::GET_CALL_WAITING_REPORT_ID:
        case CallResultReportId::GET_CALL_RESTRICTION_REPORT_ID:
            resultInfo.PutIntValue("status", data.ReadInt32());
            resultInfo.PutIntValue("classCw", data.ReadInt32());
            break;
        case CallResultReportId::GET_CALL_TRANSFER_REPORT_ID:
            resultInfo.PutIntValue("status", data.ReadInt32());
            resultInfo.PutIntValue("classx", data.ReadInt32());
            resultInfo.PutStringValue("number", data.ReadString());
            resultInfo.PutIntValue("type", data.ReadInt32());
            break;
        case CallResultReportId::GET_CALL_CLIP_ID:
            resultInfo.PutIntValue("action", data.ReadInt32());
            resultInfo.PutIntValue("clipStat", data.ReadInt32());
            break;
        case CallResultReportId::GET_CALL_CLIR_ID:
            resultInfo.PutIntValue("action", data.ReadInt32());
            resultInfo.PutIntValue("clirStat", data.ReadInt32());
            break;
        default:
            break;
    }
    if (!data.ContainFileDescriptors()) {
        TELEPHONY_LOGW("sent raw data is less than 32k");
    }
    result = OnSupplementResult(reportId, resultInfo);
    if (!reply.WriteInt32(result)) {
        TELEPHONY_LOGE("writing parcel failed");
        return TELEPHONY_FAIL;
    }
    return TELEPHONY_SUCCESS;
}

CallAbilityCallbackBasicStub::CallAbilityCallbackBasicStub()
{
    memberFuncMap_[UPDATE_CALL_STATE_INFO] = &CallAbilityCallbackBasicStub::CallStateInfoRequestBasic;
    memberFuncMap_[UPDATE_CALL_EVENT] = &CallAbilityCallbackBasicStub::CallEventRequestBasic;
    memberFuncMap_[UPDATE_CALL_SUPPLEMENT_REQUEST] = &CallAbilityCallbackBasicStub::SupplementResultRequestBasic;
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
    g_dialInfo.PutIntValue("accountId", TRUE_DEFAULT);
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
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateReportId = REPORT_ID_ERRO;
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
    g_dialInfo.PutIntValue("accountId", TRUE_DEFAULT);
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
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateReportId = REPORT_ID_ERRO;
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
    g_dialInfo.PutIntValue("accountId", TRUE_DEFAULT);
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
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateReportId = REPORT_ID_ERRO;
    g_updateAccountId = ACCOUNT_ID_ERRO;
    g_updateCallId = CALL_ID_ERRO;
    g_updateCallType = CALL_TYPE_ERRO;
    g_newCallId = NEW_CALL_ID_ERRO;
}

// excute after each testcase
void CallManagerDialTest::TearDown()
{
    LOCK_NUM_WHILE_EQ(g_newCallId, FALSE_DEFAULT, SLEEP_50_MS, SLEEP_15000_MS);
    LOCK_NUM_WHILE_NE(HasState(g_newCallId, (int)TelCallState::CALL_STATUS_DIALING), true, SLEEP_50_MS,
        SLEEP_15000_MS);
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
}

// excute before each testcase
void CallManagerPerformanceTest::SetUp()
{
    ASSERT_EQ(g_clientPtr->IsInit(), TRUE_DEFAULT);
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
    g_updateVideoState = VIDEO_STATE_ERRO;
    g_updateCallState = CALL_STATE_ERRO;
    g_updateEventType = EVENT_TYPE_ERRO;
    g_updateEventId = EVENT_ID_ERRO;
    g_updateReportId = REPORT_ID_ERRO;
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