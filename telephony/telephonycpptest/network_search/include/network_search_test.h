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

#ifndef NETWORK_SEARCH_TEST_H
#define NETWORK_SEARCH_TEST_H

#include "condition_lock.h"
#include "i_network_search_callback_stub.h"
#include "mock_vendor.h"
#include "network_search_manager.h"
#include "network_search_proxy.h"
#include <gtest/gtest.h>
#include <securec.h>

#define MEMSET_S_NETWORK(buff) memset_s(buff, sizeof(buff), '\0', sizeof(buff))
#ifdef NETWORSEARCH_MOCK_TEST
static MockVendor g_mockVender;
#endif
static char g_buff[BUFSIZ];

static int ARR_NAME_LENGTH = 3;
static int ARR_PLMN_LENGTH = 11;

namespace OHOS {
namespace Telephony {
namespace NetworkSearch {
enum LockType {
    GET_NETWORK_MODEL = 0,
    SET_NETWORK_MODEL = 1,
    SET_RADIO_STATUS = 2,
    GET_RADIO_STATUS = 3,
    GET_NETWORK_SEARCH_RESULT = 4,
    MAX_DATA_LEN = 5
};
class NetworkSearchTest : public testing::Test {
public:
    NetworkSearchTest() = default;
    ~NetworkSearchTest() = default;
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();

    static int Init();
    static sptr<ICoreService> GetProxy();
    static sptr<NetworkState> GetNetworkState();
    static sptr<NetworkState> GetNetworkStateCache();
    static void RecoverNetworkSelectionMode();
    static void RecoverRadioState();
    static sptr<NetworkInformation> SetNetworkInformation(int32_t selectionMode);
#ifdef NETWORSEARCH_MOCK_TEST
    static void SetMockOperatorData(const std::string longname, const std::string shortname, const std::string numeric);
#endif
public:
    static const int SLOT_0 = 0;
    static const int TEST_RUN_TIME_1000 = 1000;
    const int USEC_500 = 500;
    static const int SIGNAL_STRENGTH_INVALID = 0;
    static const int SIGNAL_STRENGTH_HIGHEST = 5;
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;
    static const int WAIT_TELEPHONY_RUN = 100000;
    static const int WAIT_CACHE_DATA = 2;
    static const int WAIT_RECOVER = 5;
    const int TELEPHONY_ERROR = -1;
    const int PLMN_SIZE = 5;
#ifdef NETWORSEARCH_MOCK_TEST
    static const int NETWORK_OPERATOR_NUMERIC_LEN = 5;
    static const int NETWORK_OPERATOR_SHORTNAME_LEN = 4;
    static const int NETWORK_OPERATOR_LONGNAME_LEN = 20;
    const int NETWORK_WAIT_LOCK_SIZE = 0;
#endif
    static sptr<NetworkState> networkStateCache;

    static int32_t originRadioState;

    static int32_t getNetworkModeCallbackResult;
    static bool setNetworkModeCallbackResult;
    static bool getNetworkResultCallback;
    static bool setRadioStatusCallback;
    static bool getRadioStatusCallback;
    static int32_t errCodeResult;

    static bool hasNewData[MAX_DATA_LEN];

    static std::vector<std::string> operatorNumeric;
    static std::vector<std::string> operatorShortName;
    static std::vector<std::string> operatorLongName;

private:
    static NetworkSearchProxy proxy_;
    static int32_t originPsRadioTech_;
    static int32_t originCsRadioTech_;
    static int32_t originRegState_;
    static std::string originOperatorNumeric_;
    static std::string originOperatorShortName_;
    static std::string originOperatorLongName_;
};

NetworkSearchProxy NetworkSearchTest::proxy_;
sptr<NetworkState> NetworkSearchTest::networkStateCache;

int32_t NetworkSearchTest::originPsRadioTech_;
int32_t NetworkSearchTest::originCsRadioTech_;
int32_t NetworkSearchTest::originRegState_;
std::string NetworkSearchTest::originOperatorNumeric_;
std::string NetworkSearchTest::originOperatorShortName_;
std::string NetworkSearchTest::originOperatorLongName_;

int32_t NetworkSearchTest::originRadioState;

int32_t NetworkSearchTest::getNetworkModeCallbackResult;
bool NetworkSearchTest::setNetworkModeCallbackResult;
bool NetworkSearchTest::getNetworkResultCallback;
bool NetworkSearchTest::setRadioStatusCallback;
bool NetworkSearchTest::getRadioStatusCallback;
int32_t NetworkSearchTest::errCodeResult;

bool NetworkSearchTest::hasNewData[MAX_DATA_LEN];

std::vector<std::string> NetworkSearchTest::operatorNumeric;
std::vector<std::string> NetworkSearchTest::operatorShortName;
std::vector<std::string> NetworkSearchTest::operatorLongName;

class NetworkSearchResultCallBack : public INetworkSearchCallbackStub {
public:
    void OnGetNetworkModeCallback(const int32_t searchModel, const int32_t errorCode) override;
    void OnSetNetworkModeCallback(const bool setResult, const int32_t errorCode) override;
    void OnSetRadioStatusCallback(const bool setResult, const int32_t errorCode) override;
    void OnGetRadioStatusCallback(const bool getResult, const int32_t errorCode) override;
    void OnGetNetworkSearchResult(
        const sptr<NetworkSearchResult> &networkSearchResult, const int32_t errorCode) override;
};

OHOS::sptr<NetworkSearchResultCallBack> g_callback(new NetworkSearchResultCallBack());

sptr<NetworkInformation> NetworkSearchTest::SetNetworkInformation(int32_t selectionMode)
{
    sptr<NetworkInformation> networkInfo(new NetworkInformation());
    if (selectionMode == MODE_TYPE_AUTO) {
        return nullptr;
    }
    if (networkInfo == nullptr) {
        LOG("SetNetworkInformation is fail");
        return networkInfo;
    }
    networkInfo->SetOperateInformation(originOperatorLongName_, originOperatorShortName_, originOperatorNumeric_,
        NETWORK_PLMN_STATE_AVAILABLE, NETWORK_LTE);
    LOG("originOperatorLongName : %s originOperatorShortName : %s originOperatorNumeric : %s ",
        originOperatorLongName_.c_str(), originOperatorShortName_.c_str(), originOperatorNumeric_.c_str());
    return networkInfo;
}

void NetworkSearchTest::RecoverNetworkSelectionMode()
{
    int ret = GetProxy()->SetNetworkSelectionMode(
        SLOT_0, MODE_TYPE_AUTO, SetNetworkInformation(MODE_TYPE_AUTO), false, g_callback);
    if (ret == true) {
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_NETWORK_MODEL] = false;
        if (setNetworkModeCallbackResult == true) {
            LOG("RecoverNetworkSelectionMode------SUCCESS------");
        }
    }
    // To restore initialization, wait 5 seconds before testing
    sleep(WAIT_RECOVER);
}

void NetworkSearchTest::RecoverRadioState()
{
    int ret = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
    if (ret == false) {
        LOG("RecoverRadioState is faild");
    } else {
        LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        LOG("RecoverRadioState------SUCCESS------");
        hasNewData[SET_RADIO_STATUS] = false;
        // To restore initialization, wait 5 seconds before testing
        sleep(WAIT_RECOVER);
    }
}

sptr<ICoreService> NetworkSearchTest::GetProxy()
{
    return proxy_.GetHandler();
}

sptr<NetworkState> NetworkSearchTest::GetNetworkState()
{
    return proxy_.GetHandler()->GetNetworkState(SLOT_0);
}

sptr<NetworkState> NetworkSearchTest::GetNetworkStateCache()
{
    return networkStateCache;
}

int NetworkSearchTest::Init()
{
#ifdef NETWORSEARCH_MOCK_TEST
    if (g_mockVender.Init() != 0) {
        LOG("Init faild");
        return -1;
    }
    LOG("network mock test init ... ");
#endif
    int ret = proxy_.Init();
    if (ret != 0) {
        LOG("proxy_ init failed");
        return -1;
    }
    networkStateCache = GetNetworkState();
    if (networkStateCache == nullptr) {
        LOG("networkStateCache null");
        return -1;
    }
    LOG("net_search_test init done");
    return 0;
}

void NetworkSearchTest::SetUpTestCase()
{
    Init();

    originOperatorNumeric_ = networkStateCache->GetPlmnNumeric();
    originOperatorShortName_ = networkStateCache->GetShortOperatorName();
    originOperatorLongName_ = networkStateCache->GetLongOperatorName();
}

void NetworkSearchTest::TearDownTestCase()
{
    RecoverNetworkSelectionMode();
    RecoverRadioState();
}

void NetworkSearchTest::SetUp()
{
    hasNewData[GET_NETWORK_MODEL] = false;
    hasNewData[SET_NETWORK_MODEL] = false;
    hasNewData[SET_RADIO_STATUS] = false;
    hasNewData[GET_RADIO_STATUS] = false;
    hasNewData[GET_NETWORK_SEARCH_RESULT] = false;

    getNetworkModeCallbackResult = false;
    setNetworkModeCallbackResult = false;
    getNetworkResultCallback = false;
    setRadioStatusCallback = false;
    getRadioStatusCallback = false;
    errCodeResult = -1;

    operatorNumeric.clear();
    operatorShortName.clear();
    operatorLongName.clear();
}

void NetworkSearchTest::TearDown()
{
#ifdef NETWORSEARCH_MOCK_TEST
    SetMockOperatorData(originOperatorLongName_, originOperatorShortName_, originOperatorNumeric_);
    LOG("NETWORSEARCH_MOCK_TEST originOperatorLongName : %s originOperatorShortName : %s originOperatorNumeric : %s ",
        originOperatorLongName_.c_str(), originOperatorShortName_.c_str(), originOperatorNumeric_.c_str());
#endif
}

void NetworkSearchResultCallBack::OnGetNetworkModeCallback(const int32_t searchModel, const int32_t errorCode)
{
    NetworkSearchTest::getNetworkModeCallbackResult = searchModel;
    ASSERT_EQ(errorCode, HRIL_ERR_SUCCESS);
    LOG("getNetworkModeCallbackResult: = %d errCodeResult = %d", searchModel, errorCode);
    NetworkSearchTest::hasNewData[GET_NETWORK_MODEL] = true;
}

void NetworkSearchResultCallBack::OnSetNetworkModeCallback(const bool setResult, const int32_t errorCode)
{
    NetworkSearchTest::setNetworkModeCallbackResult = setResult;
    NetworkSearchTest::errCodeResult = errorCode; // Set selection mode error code have multiple results
    LOG("setNetworkModeCallbackResult: = %d errCodeResult = %d", setResult, errorCode);
    NetworkSearchTest::hasNewData[SET_NETWORK_MODEL] = true;
}

void NetworkSearchResultCallBack::OnSetRadioStatusCallback(const bool setResult, const int32_t errorCode)
{
    NetworkSearchTest::setRadioStatusCallback = setResult;
    NetworkSearchTest::errCodeResult = errorCode; // Set radio error code have multiple results
    LOG("setRadioStatusCallback: = %d errCodeResult = %d", setResult, errorCode);
    NetworkSearchTest::hasNewData[SET_RADIO_STATUS] = true;
}

void NetworkSearchResultCallBack::OnGetRadioStatusCallback(const bool getResult, const int32_t errorCode)
{
    NetworkSearchTest::getRadioStatusCallback = getResult;
    ASSERT_EQ(errorCode, HRIL_ERR_SUCCESS);
    LOG("getRadioStatusCallback: = %d errCodeResult = %d", getResult, errorCode);
    NetworkSearchTest::hasNewData[GET_RADIO_STATUS] = true;
}

void NetworkSearchResultCallBack::OnGetNetworkSearchResult(
    const sptr<NetworkSearchResult> &networkSearchResult, const int32_t errorCode)
{
    sptr<NetworkSearchResult> nsResult = networkSearchResult;
    if (nsResult != nullptr) {
        std::vector<NetworkInformation> networkInformation = nsResult->GetNetworkSearchResult();
        if (!networkInformation.empty()) {
            NetworkSearchTest::getNetworkResultCallback = true;
            for (auto &networkInformation : networkInformation) {
                NetworkSearchTest::operatorNumeric.push_back(networkInformation.GetOperatorNumeric());
                NetworkSearchTest::operatorShortName.push_back(networkInformation.GetOperatorShortName());
                NetworkSearchTest::operatorLongName.push_back(networkInformation.GetOperatorLongName());
                LOG("NetworkSearchTestCallbackStub OnGetNetworkSearchResult plmnNumeric:%s,"
                    " shortOperatorName:%s, longOperatorName:%s",
                    networkInformation.GetOperatorNumeric().c_str(), networkInformation.GetOperatorShortName().c_str(),
                    networkInformation.GetOperatorLongName().c_str());
            }
        } else {
            LOG("NetworkSearchTestCallbackStub OnGetNetworkSearchResult is empty!!!");
        }
    } else {
        LOG("getNetworkResultCallback: = %d errCodeResult = %d", NetworkSearchTest::getNetworkResultCallback,
            errorCode);
    }
    ASSERT_EQ(errorCode, HRIL_ERR_SUCCESS);
    NetworkSearchTest::hasNewData[GET_NETWORK_SEARCH_RESULT] = true;
}

#ifdef NETWORSEARCH_MOCK_TEST
void NetworkSearchTest::SetMockOperatorData(
    const std::string longname, const std::string shortname, const std::string numeric)
{
    int err = 0;
    int sleepTime = 2;
    MEMSET_S_NETWORK(g_buff);
    int ret = memcpy_s(g_buff, sizeof(g_buff), longname.c_str(), sizeof(char[NETWORK_OPERATOR_LONGNAME_LEN]));
    ASSERT_EQ(ret, err);
    g_mockVender.MockVendorSetWithDelay(DISPATCHID::NETWORK_SEARCH_SET_LONG_OPERATOR, g_buff, strlen(g_buff));
    MEMSET_S_NETWORK(g_buff);
    ret = memcpy_s(g_buff, sizeof(g_buff), shortname.c_str(), sizeof(char[NETWORK_OPERATOR_SHORTNAME_LEN]));
    ASSERT_EQ(ret, err);
    g_mockVender.MockVendorSetWithDelay(DISPATCHID::NETWORK_SEARCH_SET_SHORT_OPERATOR, g_buff, strlen(g_buff));
    MEMSET_S_NETWORK(g_buff);
    ret = memcpy_s(g_buff, sizeof(g_buff), numeric.c_str(), sizeof(char[NETWORK_OPERATOR_NUMERIC_LEN]));
    ASSERT_EQ(ret, err);
    g_mockVender.MockVendorSetWithDelay(DISPATCHID::NETWORK_SEARCH_SET_NUMERIC, g_buff, strlen(g_buff));
    // Set parameter need to wait 2 seconds to get the data
    sleep(sleepTime);
}
#endif
} // namespace NetworkSearch
} // namespace Telephony
} // namespace OHOS
#endif // NETWORK_SEARCH_TEST_H