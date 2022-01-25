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

#include <securec.h>
#include <gtest/gtest.h>
#include "network_search_manager.h"
#include "network_search_proxy.h"
#include "i_network_search_callback_stub.h"
#include "mock_vendor.h"
#include "condition_lock.h"

#ifdef NETWORSEARCH_MOCK_TEST
static MockVendor g_mockVender;
typedef enum {
    DOMAIN_TYPE_PS,
    DOMAIN_TYPE_CS,
} DomainType;
#endif
static char g_buff[BUFSIZ];

namespace OHOS {
namespace Telephony {
namespace NetworkSearch {
enum LockType {
    GET_NETWORK_MODEL = 0,
    SET_NETWORK_MODEL = 1,
    SET_RADIO_STATUS = 2,
    GET_RADIO_STATUS = 3,
    GET_NETWORK_SEARCH_RESULT = 4,
    SET_PREFERRED_NETWORK_MODE = 5,
    GET_PREFERRED_NETWORK_MODE = 6,
    MAX_DATA_LEN = 7
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
    static void RecoverPreferredNetwork();
    static void VendorTestCDMA(PreferredNetworkMode cdmaType);
    static sptr<NetworkInformation> SetNetworkInformation(int32_t selectionMode);
    static int32_t RadioTechToNetworkType(RadioTech radioTech);
#ifdef NETWORSEARCH_MOCK_TEST
    static void SetMockOperatorData(const std::string longname, const std::string shortname, const std::string numeric);
#endif
public:
    static const int SLOT_0 = 1;
    static const int TEST_PERFORMANCE_RUN_TIME_10 = 10;
    static const int TEST_RELIABILITY_RUN_TIME_1000 = 1000;
    static const int TEST_RELIABILITY_RUN_TIME_10 = 10;
    const int USEC_1000 = 1000;
    static const int SIGNAL_STRENGTH_INVALID = 0;
    static const int SIGNAL_STRENGTH_HIGHEST = 5;
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 60000;
    static const int LOCK_WAIT_TIMEOUT_RESULT = 180000;
    static const int WAIT_TELEPHONY_RUN = 10;
    static const int WAIT_CACHE_DATA = 2;
    static const int WAIT_RECOVER = 15;
    const int TELEPHONY_ERROR = -1;
    const int PLMN_SIZE = 5;
    const int IMEI_SIZE = 15;
    const int MEID_SIZE = 14;
    const int CELL_INFO_MIN = 0;
    const int CELL_INFO_LAC_TAC_MAX = 0xffff;
    const int CELL_INFO_GSM_CELLID_MAX = 0xffff;
    const int CELL_INFO_WCDMA_CELLID_MAX = 0xfffffff;
    const int CELL_INFO_LTE_CELLID_MAX = 0xfffffff;
    const int CELL_INFO_ARFCN_MAX = 1023;
    const int CELL_INFO_EARFCN_MAX = 41589;
    const int CELL_INFO_BSIC_MAX = 63;
    const int CELL_INFO_PSC_MAX = 511;
    const int CELL_INFO_PCI_MAX = 503;
    const int CELL_INFO_MCC = 460;
    const int CELL_INFO_MNC_MAX = 20;
    const int CELL_INFO_LATITU_MIN = -1296000;
    const int CELL_INFO_LATITU_MAX = 1296000;
    const int CELL_INFO_LONGITU_MIN = -1296000;
    const int CELL_INFO_LONGITU_MAX = 1296000;
    const int CELL_INFO_NID_MAX = 65535;
    const int CELL_INFO_SID_MAX = 32767;
    const int CELL_INFO_CPID_MAX = 127;
    const int CELL_INFO_UARFCN_9400 = 9400;
    const int CELL_INFO_UARFCN_9600 = 9600;
    const int CELL_INFO_UARFCN_10050 = 10050;
    const int CELL_INFO_UARFCN_10125 = 10125;
    const int CELL_INFO_UARFCN_11500 = 11500;
    const int CELL_INFO_UARFCN_12000 = 12000;
    const int CELL_INFO_NR_PCI_MAX = 1007;
    const int CELL_INFO_NR_NRARFCN_MAX = 3279165;
    const int64_t CELL_INFO_NR_NCI_MAX = 68719476735;
#ifdef NETWORSEARCH_MOCK_TEST
    static const int NETWORK_OPERATOR_NUMERIC_LEN = 5;
    static const int NETWORK_OPERATOR_SHORTNAME_LEN = 4;
    static const int NETWORK_OPERATOR_LONGNAME_LEN = 20;
    const int NETWORK_WAIT_LOCK_SIZE = 0;
#endif
    static sptr<NetworkState> networkStateCache;

    static int32_t getNetworkModeCallbackResult;
    static bool setNetworkModeCallbackResult;
    static bool getNetworkResultCallback;
    static bool setRadioStatusCallback;
    static bool getRadioStatusCallback;
    static bool setPreferredNetworkModeResult;
    static int32_t getPreferredNetworkModeResult;
    static int32_t errCodeResult;

    static bool hasNewData[MAX_DATA_LEN];

    static std::vector<std::string> operatorNumeric;
    static std::vector<std::string> operatorShortName;
    static std::vector<std::string> operatorLongName;
    static std::vector<int> networkPlmnState;
    static std::vector<int> networkRat;

private:
    static NetworkSearchProxy proxy_;
    static std::string originOperatorNumeric_;
    static std::string originOperatorShortName_;
    static std::string originOperatorLongName_;
};

NetworkSearchProxy NetworkSearchTest::proxy_;
sptr<NetworkState> NetworkSearchTest::networkStateCache;

std::string NetworkSearchTest::originOperatorNumeric_;
std::string NetworkSearchTest::originOperatorShortName_;
std::string NetworkSearchTest::originOperatorLongName_;

int32_t NetworkSearchTest::getNetworkModeCallbackResult;
bool NetworkSearchTest::setNetworkModeCallbackResult;
bool NetworkSearchTest::getNetworkResultCallback;
bool NetworkSearchTest::setRadioStatusCallback;
bool NetworkSearchTest::getRadioStatusCallback;
bool NetworkSearchTest::setPreferredNetworkModeResult;
int32_t NetworkSearchTest::getPreferredNetworkModeResult;
int32_t NetworkSearchTest::errCodeResult;

bool NetworkSearchTest::hasNewData[MAX_DATA_LEN];

std::vector<std::string> NetworkSearchTest::operatorNumeric;
std::vector<std::string> NetworkSearchTest::operatorShortName;
std::vector<std::string> NetworkSearchTest::operatorLongName;
std::vector<int> NetworkSearchTest::networkPlmnState;
std::vector<int> NetworkSearchTest::networkRat;

class NetworkSearchResultCallBack : public INetworkSearchCallbackStub {
public:
    void OnGetNetworkModeCallback(const int32_t searchModel, const int32_t errorCode) override;
    void OnSetNetworkModeCallback(const bool setResult, const int32_t errorCode) override;
    void OnSetRadioStateCallback(const bool setResult, const int32_t errorCode) override;
    void OnGetRadioStateCallback(const bool getResult, const int32_t errorCode) override;
    void OnGetNetworkSearchInformation(
        const sptr<NetworkSearchResult> &networkSearchResult, const int32_t errorCode) override;
    void OnSetPreferredNetworkCallback(const bool setResult, const int32_t errorCode) override;
    void OnGetPreferredNetworkCallback(const int32_t networkMode, const int32_t errorCode) override;
};

OHOS::sptr<NetworkSearchResultCallBack> g_callback(new NetworkSearchResultCallBack());

sptr<NetworkInformation> NetworkSearchTest::SetNetworkInformation(int32_t selectionMode)
{
    if (selectionMode == static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO)) {
        return nullptr;
    }
    sptr<NetworkInformation> networkInfo(new NetworkInformation());
    if (networkInfo == nullptr) {
        LOG("SetNetworkInformation is fail");
        return networkInfo;
    }
    networkInfo->SetOperateInformation(originOperatorLongName_, originOperatorShortName_, originOperatorNumeric_,
        static_cast<int32_t>(NetworkPlmnState::NETWORK_PLMN_STATE_AVAILABLE),
        static_cast<int32_t>(NetworkRat::NETWORK_LTE));
    LOG("originOperatorLongName : %s originOperatorShortName : %s originOperatorNumeric : %s ",
        originOperatorLongName_.c_str(), originOperatorShortName_.c_str(), originOperatorNumeric_.c_str());
    return networkInfo;
}

int32_t NetworkSearchTest::RadioTechToNetworkType(RadioTech radioTech)
{
    switch (radioTech) {
        case RadioTech::RADIO_TECHNOLOGY_GSM:
            return static_cast<int32_t>(SignalInformation::NetworkType::GSM);
        case RadioTech::RADIO_TECHNOLOGY_WCDMA:
        case RadioTech::RADIO_TECHNOLOGY_HSPAP:
        case RadioTech::RADIO_TECHNOLOGY_HSPA:
            return static_cast<int32_t>(SignalInformation::NetworkType::WCDMA);
        case RadioTech::RADIO_TECHNOLOGY_LTE:
        case RadioTech::RADIO_TECHNOLOGY_LTE_CA:
            return static_cast<int32_t>(SignalInformation::NetworkType::LTE);
        case RadioTech::RADIO_TECHNOLOGY_TD_SCDMA:
            return static_cast<int32_t>(SignalInformation::NetworkType::TDSCDMA);
        case RadioTech::RADIO_TECHNOLOGY_1XRTT:
        case RadioTech::RADIO_TECHNOLOGY_EVDO:
        case RadioTech::RADIO_TECHNOLOGY_EHRPD:
            return static_cast<int32_t>(SignalInformation::NetworkType::CDMA);
        case RadioTech::RADIO_TECHNOLOGY_NR:
            return static_cast<int32_t>(SignalInformation::NetworkType::NR);
        default:
            return -1;
    }
}

void NetworkSearchTest::RecoverNetworkSelectionMode()
{
    bool ret = GetProxy()->SetNetworkSelectionMode(SLOT_0, static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO),
        SetNetworkInformation(static_cast<int32_t>(SelectionMode::MODE_TYPE_AUTO)), false, g_callback);
    if (ret == false) {
        LOG("RecoverNetworkSelectionMode is faild");
    } else {
        LOCK_NUM_WHILE_NE(hasNewData[SET_NETWORK_MODEL], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_NETWORK_MODEL] = false;
        if (setNetworkModeCallbackResult == true) {
            LOG("RecoverNetworkSelectionMode------SUCCESS------");
            // To restore initialization, wait 5 seconds before testing
            sleep(WAIT_RECOVER);
        }
    }
}

void NetworkSearchTest::RecoverRadioState()
{
    bool ret = GetProxy()->SetRadioState(SLOT_0, true, g_callback);
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

void NetworkSearchTest::RecoverPreferredNetwork()
{
    bool ret = GetProxy()->SetPreferredNetwork(
        SLOT_0, static_cast<int32_t>(PreferredNetworkMode::CORE_NETWORK_MODE_AUTO), g_callback);
    if (ret == false) {
        LOG("RecoverPreferredNetwork is faild");
    } else {
        LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        if (setPreferredNetworkModeResult == true) {
            LOG("RecoverPreferredNetwork------SUCCESS------");
            // To restore initialization, wait 5 seconds before testing
            sleep(WAIT_RECOVER);
        }
    }
}

void NetworkSearchTest::VendorTestCDMA(PreferredNetworkMode cdmaType)
{
    bool ret = GetProxy()->SetPreferredNetwork(SLOT_0, static_cast<int32_t>(cdmaType), g_callback);
    if (ret == false) {
        LOG("VendorTestCDMA is faild");
    } else {
        LOCK_NUM_WHILE_NE(hasNewData[SET_PREFERRED_NETWORK_MODE], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
        hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
        if (setPreferredNetworkModeResult == true) {
            LOG("VendorTestCDMA------SUCCESS------");
            // To restore initialization, wait 5 seconds before testing
            sleep(WAIT_RECOVER);
        }
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
    LOG("network SLOT = %d", SLOT_0);
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
// The mock test restore initial value
#ifdef NETWORSEARCH_MOCK_TEST
    SetMockOperatorData(originOperatorLongName_, originOperatorShortName_, originOperatorNumeric_);
    LOG("NETWORSEARCH_MOCK_TEST originOperatorLongName : %s originOperatorShortName : %s originOperatorNumeric : %s ",
        originOperatorLongName_.c_str(), originOperatorShortName_.c_str(), originOperatorNumeric_.c_str());
#endif
// The function test restore initial value
#ifdef NETWORSEARCH_FUNCTION_TEST
    RecoverNetworkSelectionMode();
    RecoverPreferredNetwork();
    RecoverRadioState();
#endif
}

void NetworkSearchTest::SetUp()
{
    hasNewData[GET_NETWORK_MODEL] = false;
    hasNewData[SET_NETWORK_MODEL] = false;
    hasNewData[SET_RADIO_STATUS] = false;
    hasNewData[GET_RADIO_STATUS] = false;
    hasNewData[GET_NETWORK_SEARCH_RESULT] = false;
    hasNewData[SET_PREFERRED_NETWORK_MODE] = false;
    hasNewData[GET_PREFERRED_NETWORK_MODE] = false;

    getNetworkModeCallbackResult = false;
    setNetworkModeCallbackResult = false;
    getNetworkResultCallback = false;
    setRadioStatusCallback = false;
    getRadioStatusCallback = false;
    setPreferredNetworkModeResult = false;
    getPreferredNetworkModeResult = false;
    errCodeResult = -1;

    operatorNumeric.clear();
    operatorShortName.clear();
    operatorLongName.clear();
    networkPlmnState.clear();
    networkRat.clear();
}

void NetworkSearchTest::TearDown()
{
#ifdef NETWORSEARCH_FUNCTION_TEST
    RecoverPreferredNetwork();
#endif
}

void NetworkSearchResultCallBack::OnGetNetworkModeCallback(const int32_t searchModel, const int32_t errorCode)
{
    NetworkSearchTest::getNetworkModeCallbackResult = searchModel;
    EXPECT_EQ(errorCode, HRIL_ERR_SUCCESS);
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

void NetworkSearchResultCallBack::OnSetRadioStateCallback(const bool setResult, const int32_t errorCode)
{
    NetworkSearchTest::setRadioStatusCallback = setResult;
    NetworkSearchTest::errCodeResult = errorCode; // Set radio error code have multiple results
    LOG("setRadioStatusCallback: = %d errCodeResult = %d", setResult, errorCode);
    NetworkSearchTest::hasNewData[SET_RADIO_STATUS] = true;
}

void NetworkSearchResultCallBack::OnGetRadioStateCallback(const bool getResult, const int32_t errorCode)
{
    NetworkSearchTest::getRadioStatusCallback = getResult;
    EXPECT_EQ(errorCode, HRIL_ERR_SUCCESS);
    LOG("getRadioStatusCallback: = %d errCodeResult = %d", getResult, errorCode);
    NetworkSearchTest::hasNewData[GET_RADIO_STATUS] = true;
}

void NetworkSearchResultCallBack::OnGetNetworkSearchInformation(
    const sptr<NetworkSearchResult> &networkSearchResult, const int32_t errorCode)
{
    sptr<NetworkSearchResult> nsResult = networkSearchResult;
    if (nsResult != nullptr) {
        std::vector<NetworkInformation> networkInformation = nsResult->GetNetworkSearchInformation();
        if (!networkInformation.empty()) {
            NetworkSearchTest::getNetworkResultCallback = true;
            for (auto &networkInformation : networkInformation) {
                NetworkSearchTest::operatorNumeric.push_back(networkInformation.GetOperatorNumeric());
                NetworkSearchTest::operatorShortName.push_back(networkInformation.GetOperatorShortName());
                NetworkSearchTest::operatorLongName.push_back(networkInformation.GetOperatorLongName());
                NetworkSearchTest::networkPlmnState.push_back(networkInformation.GetNetworkState());
                NetworkSearchTest::networkRat.push_back(networkInformation.GetRadioTech());
                LOG("NetworkSearchTestCallbackStub OnGetNetworkSearchInformation networkPlmnState:%d, networkRat:%d, "
                    "plmnNumeric:%s, shortOperatorName:%s, longOperatorName:%s",
                    networkInformation.GetNetworkState(), networkInformation.GetRadioTech(),
                    networkInformation.GetOperatorNumeric().c_str(), networkInformation.GetOperatorShortName().c_str(),
                    networkInformation.GetOperatorLongName().c_str());
            }
        } else {
            LOG("NetworkSearchTestCallbackStub OnGetNetworkSearchInformation is empty!!!");
        }
    }
    LOG("getNetworkResultCallback: = %d errCodeResult = %d", NetworkSearchTest::getNetworkResultCallback, errorCode);
    EXPECT_EQ(errorCode, HRIL_ERR_SUCCESS);
    NetworkSearchTest::hasNewData[GET_NETWORK_SEARCH_RESULT] = true;
}

void NetworkSearchResultCallBack::OnSetPreferredNetworkCallback(const bool setResult, const int32_t errorCode)
{
    NetworkSearchTest::setPreferredNetworkModeResult = setResult;
    NetworkSearchTest::errCodeResult = errorCode; // Set preferred network error code have multiple results
    LOG("setPreferredNetworkCallback: = %d errCodeResult = %d", setResult, errorCode);
    NetworkSearchTest::hasNewData[SET_PREFERRED_NETWORK_MODE] = true;
}

void NetworkSearchResultCallBack::OnGetPreferredNetworkCallback(const int32_t preferredMode, const int32_t errorCode)
{
    NetworkSearchTest::getPreferredNetworkModeResult = preferredMode;
    EXPECT_EQ(errorCode, HRIL_ERR_SUCCESS);
    LOG("getPreferredNetworkCallback: = %d errCodeResult = %d", preferredMode, errorCode);
    NetworkSearchTest::hasNewData[GET_PREFERRED_NETWORK_MODE] = true;
}

#ifdef NETWORSEARCH_MOCK_TEST
void NetworkSearchTest::SetMockOperatorData(
    const std::string longname, const std::string shortname, const std::string numeric)
{
    int err = 0;
    int sleepTime = 2;
    memset_s(g_buff, sizeof(g_buff), '\0', sizeof(g_buff));
    int ret = memcpy_s(g_buff, sizeof(g_buff), longname.c_str(), sizeof(char[NETWORK_OPERATOR_LONGNAME_LEN]));
    ASSERT_EQ(ret, err);
    g_mockVender.MockVendorSetWithDelay(DISPATCHID::NETWORK_SEARCH_SET_LONG_OPERATOR, g_buff, strlen(g_buff));
    memset_s(g_buff, sizeof(g_buff), '\0', sizeof(g_buff));
    ret = memcpy_s(g_buff, sizeof(g_buff), shortname.c_str(), sizeof(char[NETWORK_OPERATOR_SHORTNAME_LEN]));
    ASSERT_EQ(ret, err);
    g_mockVender.MockVendorSetWithDelay(DISPATCHID::NETWORK_SEARCH_SET_SHORT_OPERATOR, g_buff, strlen(g_buff));
    memset_s(g_buff, sizeof(g_buff), '\0', sizeof(g_buff));
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