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

#ifndef CELLULAR_DATA_SERVICE_PROXY_H
#define CELLULAR_DATA_SERVICE_PROXY_H
#include <unordered_set>
#include <gtest/gtest.h>
#include "cellular_data_proxy.h"
#include "network_search_proxy.h"
#include "call_manager_basic.h"
#include "cellular_data_types.h"
#include "i_network_search_callback_stub.h"
#include "condition_lock.h"

namespace OHOS {
namespace Telephony {
enum PreferredNetwork {
    CORE_NETWORK_MODE_AUTO,
    CORE_NETWORK_MODE_GSM,
    CORE_NETWORK_MODE_WCDMA,
    CORE_NETWORK_MODE_LTE,
    CORE_NETWORK_MODE_LTE_WCDMA,
    CORE_NETWORK_MODE_LTE_WCDMA_GSM,
    CORE_NETWORK_MODE_WCDMA_GSM
};

enum LockType { SET_RADIO_STATUS = 0, GET_RADIO_STATUS = 1, SET_PREFERRED_NETWORK_MODE = 2, MAX_DATA_LEN = 3 };
static NetworkSearchProxy proxy_;
class CelluarDataStateTest : public testing::Test {
public:
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;
    static const int SLOT_ID = 0;
    static const int TIME = 7;
    static bool getRadioStatusCallback;
    static bool setRadioStatusCallback;
    static int32_t errCodeResult;
    static sptr<ICoreService> GetProxy_();
    static void SetRadioStateOff();
    static bool hasNewData[MAX_DATA_LEN];
    static int Init();

public:
    static int g_newCallState;
    static int g_newCallId;
    static int32_t g_updateCallId;
    static int32_t g_updateCallState;
    static char g_updateAccountNumber[BUFSIZ];
    static const int NEGATIVE_FALSE = -1;
    const int CALL_ID_ERRO = -1;
    const int NEW_CALL_ID_ERRO = -1;
    const int CALL_STATE_ERRO = -1;
    const int SUCCESSFUL = 0;

public:
    int Dial(std::u16string number);
    bool HasState(int callId, int callState);
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

};
int32_t CelluarDataStateTest::g_updateCallState = -1;
int32_t CelluarDataStateTest::g_updateCallId = -1;
int CelluarDataStateTest::g_newCallId = -1;
int CelluarDataStateTest::g_newCallState = -1;
char CelluarDataStateTest::g_updateAccountNumber[BUFSIZ] = { 0 };
static std::unique_ptr<CallManager::CallManagerBasic> g_clientPtr = nullptr;
static AppExecFwk::PacMap g_dialInfo;
std::unordered_set<int> g_callIdSet;
std::unordered_map<int, std::unordered_set<int>> g_callStateMap;

int CelluarDataStateTest::Dial(std::u16string number)
{
    return g_clientPtr->GetPtr()->DialCall(number, g_dialInfo);
}

bool CelluarDataStateTest::HasState(int callId, int callState)
{
    if (g_callStateMap.find(callId) == g_callStateMap.end()) {
        return false;
    }
    if (g_callStateMap[callId].find(callState) == g_callStateMap[callId].end()) {
        return false;
    }
    return true;
}

int32_t CallManager::CallAbilityCallbackBasic::OnCallEventChange(const CallEventInfo &info)
{
    return SUCCESSFUL;
}

int32_t CallManager::CallAbilityCallbackBasic::OnSupplementResult(const CallResultReportId id,
    AppExecFwk::PacMap &resultInfo)
{
    return SUCCESSFUL;
}


int32_t CallManager::CallAbilityCallbackBasic::OnCallDetailsChange(const CallAttributeInfo &info)
{
    CallAttributeInfo callInfo = info;
    CelluarDataStateTest::g_updateCallId = callInfo.callId;
    CelluarDataStateTest::g_updateCallState = callInfo.callState;


// set callid remove duplication, and set g_callStateMap space
    if (g_callIdSet.find(CelluarDataStateTest::g_updateCallId) == g_callIdSet.end()) {
        g_callIdSet.insert(CelluarDataStateTest::g_updateCallId);
        CelluarDataStateTest::g_newCallId = CelluarDataStateTest::g_updateCallId;
        CelluarDataStateTest::g_newCallState = CelluarDataStateTest::g_updateCallState;
        std::unordered_set<int> newSet;
        newSet.clear();
        g_callStateMap.insert(std::pair<int, std::unordered_set<int>>(CelluarDataStateTest::g_newCallId, newSet));
        LOG("===========================RegisterCallBack Successful===============================");
    }

// set Map key and value
    g_callStateMap[CelluarDataStateTest::g_updateCallId].insert(CelluarDataStateTest::g_updateCallState);

    (void)memset_s(CelluarDataStateTest::g_updateAccountNumber, sizeof(CelluarDataStateTest::g_updateAccountNumber),
        '\0', sizeof(CelluarDataStateTest::g_updateAccountNumber));
    int ret = strcpy_s(CelluarDataStateTest::g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    if (ret != SUCCESSFUL) {
        LOG("g_updateAccountNumber copy failed");
        strcpy_s(CelluarDataStateTest::g_updateAccountNumber, BUFSIZ, callInfo.accountNumber);
    }
    // g_updateVideoState = callInfo.videoState;
    TELEPHONY_LOGI("OnUpdateCallStateInfo on");
    return SUCCESSFUL;
}

bool CelluarDataStateTest::setRadioStatusCallback;
bool CelluarDataStateTest::getRadioStatusCallback;
int32_t CelluarDataStateTest::errCodeResult;

class NetworkSearchResultCallBack : public INetworkSearchCallbackStub {
public:
    void OnSetRadioStateCallback(const bool setResult, const int32_t errorCode) override;
    void OnGetRadioStateCallback(const bool getResult, const int32_t errorCode) override;
};

OHOS::sptr<NetworkSearchResultCallBack> g_callback(new NetworkSearchResultCallBack());
bool CelluarDataStateTest::hasNewData[MAX_DATA_LEN];
void CelluarDataStateTest::SetRadioStateOff()
{
    bool ret = GetProxy_()->SetRadioState(true, g_callback);
    if (ret == false) {
        LOG("RecoverRadioState is faild");
    } else {
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LOG("RecoverRadioState------SUCCESS------");
        hasNewData[SET_RADIO_STATUS] = false;
        // To restore initialization, wait 5 seconds before testing
        sleep(5);
    }
}

void NetworkSearchResultCallBack::OnSetRadioStateCallback(const bool setResult, const int32_t errorCode)
{
    CelluarDataStateTest::setRadioStatusCallback = setResult;
    CelluarDataStateTest::errCodeResult = errorCode; // Set radio error code have multiple results
    LOG("setRadioStatusCallback: = %d errCodeResult = %d", setResult, errorCode);
    CelluarDataStateTest::hasNewData[SET_RADIO_STATUS] = true;
}

void NetworkSearchResultCallBack::OnGetRadioStateCallback(const bool getResult, const int32_t errorCode)
{
    CelluarDataStateTest::getRadioStatusCallback = getResult;
    EXPECT_EQ(errorCode, HRIL_ERR_SUCCESS);
    LOG("getRadioStatusCallback: = %d errCodeResult = %d", getResult, errorCode);
    CelluarDataStateTest::hasNewData[GET_RADIO_STATUS] = true;
}

int CelluarDataStateTest::Init()
{
    int ret = proxy_.Init();
    if (ret != 0) {
        LOG("proxy_ init failed");
        return -1;
    }
    LOG("proxy_ init successful");
    g_clientPtr = std::make_unique<CallManager::CallManagerBasic>();
    if (g_clientPtr == nullptr) {
        LOG("new CallManagerBasic failed!");
        return -1;
    }
    if (g_clientPtr->Init() == NEGATIVE_FALSE) {
        LOG("connect server fail!!!");
        return -1;
    }
    return 0;
}

void CelluarDataStateTest::SetUpTestCase()
{
    Init();
    OHOS::Telephony::g_telephonyService = OHOS::Telephony::GetProxy();
    if (OHOS::Telephony::g_telephonyService == nullptr) {
        return;
    }
    SetRadioStateOff();
    g_dialInfo.PutIntValue("accountId", 0);
    g_dialInfo.PutIntValue("videoState", (int)VideoStateType::TYPE_VOICE);
    g_dialInfo.PutIntValue("dialScene", CALL_PRIVILEGED);
    g_dialInfo.PutIntValue("dialType", (int)DialType::DIAL_CARRIER_TYPE);
}

void CelluarDataStateTest::SetUp()
{
    hasNewData[SET_RADIO_STATUS] = false;
    hasNewData[GET_RADIO_STATUS] = false;
    hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
    setRadioStatusCallback = false;
    getRadioStatusCallback = false;
    errCodeResult = -1;
    g_newCallId = NEW_CALL_ID_ERRO;
    g_updateCallId = CALL_ID_ERRO;
}

void CelluarDataStateTest::TearDown() {}

void CelluarDataStateTest::TearDownTestCase() {}

sptr<ICoreService> CelluarDataStateTest::GetProxy_()
{
    return proxy_.GetHandler();
}

} // namespace Telephony
} // namespace OHOS
#endif // CELLULAR_DATA_SERVICE_PROXY_H