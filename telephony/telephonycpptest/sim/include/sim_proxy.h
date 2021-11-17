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

#ifndef TELEPHONY_SIM_PROXY
#define TELEPHONY_SIM_PROXY
#include <map>
#include <set>
#include <string_ex.h>
#include "stdio.h"
#include "securec.h"
#include "core_service_proxy.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "hril.h"
#include "log.h"

#ifdef SIM_MOCK_TEST
#    include "mock_vendor.h"
#    include "mock_vendor_common.h"
#endif

#ifdef SIM_MOCK_TEST
static MockVendor g_mockVender;
#endif

namespace OHOS {
namespace Telephony {
class SimProxy {
public:
    OHOS::sptr<ICoreService> GetHandler() const;
    int Init();
    void SwitchPinLock(int32_t enable);
    void DeleteADNContact(int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo);
    void DeleteFDNContact(int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo);
    void QueryDeletionResult(int32_t slotId, int32_t type, int32_t contactIndex);
    int32_t QueryContactListFreeIndex(
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> &vecDialNumInfo);
    void TriggerPuk2Lock(std::u16string wrongPin2);
    int32_t RestoreNormalPin2Status(std::u16string rightPin2);
    int32_t RestoreNormalPuk2Status(std::u16string rightPin2, std::u16string rightPuk2);

#ifdef SIM_MOCK_TEST
    void MockSimStateSet(int32_t simState);
    void MockPinCodeSet(std::string pinCode);
    void MockPukCodeSet(std::string pukCode);
    void MockPin2CodeSet(std::string pin2Code);
    void MockPuk2CodeSet(std::string puk2Code);
#endif

private:
    OHOS::sptr<ICoreService> telephonyService_ = nullptr;
};

OHOS::sptr<ICoreService> SimProxy::GetHandler() const
{
    return telephonyService_;
}

void SimProxy::DeleteADNContact(
    int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo)
{
    int32_t typeADN = 1;
    bool isExist = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> daillingAdnInfo =
        GetHandler()->QueryIccDiallingNumbers(slotId, typeADN);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = daillingAdnInfo.begin();
         iter != daillingAdnInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == delDiallingInfo->recordNumber_) {
            isExist = true;
            break;
        }
    }
    if (isExist) {
        bool ret = GetHandler()->DelIccDiallingNumbers(slotId, typeADN, delDiallingInfo);
        if (ret == false) {
            LOG("DelIccDiallingNumbers typeADN fail...");
        }
    }
}

void SimProxy::DeleteFDNContact(
    int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo)
{
    int32_t typeFDN = 2;
    bool isExist = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> daillingFdnInfo =
        GetHandler()->QueryIccDiallingNumbers(slotId, typeFDN);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = daillingFdnInfo.begin();
         iter != daillingFdnInfo.end(); iter++) {
        if ((*iter)->recordNumber_ == delDiallingInfo->recordNumber_) {
            isExist = true;
            break;
        }
    }
    if (isExist) {
        bool result = GetHandler()->DelIccDiallingNumbers(slotId, typeFDN, delDiallingInfo);
        if (result == false) {
            LOG("DelIccDiallingNumbers typeFDN fail...");
        }
    }
}

void SimProxy::QueryDeletionResult(int32_t slotId, int32_t type, int32_t contactIndex)
{
    bool findRecordNum = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecQueryDialNum =
        GetHandler()->QueryIccDiallingNumbers(slotId, type);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator vecIter = vecQueryDialNum.begin();
         vecIter != vecQueryDialNum.end(); vecIter++) {
        if ((*vecIter)->recordNumber_ == contactIndex) {
            findRecordNum = true;
            break;
        }
    }
    ASSERT_FALSE(findRecordNum);
}

int32_t QueryContactListFreeIndex(std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> &vecDialNumInfo)
{
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (!vecDialNumInfo.empty()) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    return freeIndex;
}

void SimProxy::SwitchPinLock(int32_t enable)
{
    int32_t simId = 0;
    std::u16string defaultPin = Str8ToStr16("1234");
    OHOS::Telephony::LockStatusResponse respon;
    if (GetHandler() != nullptr) {
        GetHandler()->SetLockState(defaultPin, enable, respon, simId);
        if (respon.result != 0) {
            LOG("Return value: result = %d", respon.result);
            if (enable == 1) {
                LOG("SetLockState OPEN fail...");
            } else {
                LOG("SetLockState CLOSE fail...");
            }
        }
    } else {
        LOG("GetHandler is null:Failed to open the PIN lock...");
    }
}

void SimProxy::TriggerPuk2Lock(std::u16string wrongPin2)
{
    int32_t simId = 0;
    int32_t errorTimes = 3;
    OHOS::Telephony::LockStatusResponse responseInfo;
    // Entering incorrect pin2 code three times causes the puk2 lock to be triggered.
    for (int32_t loopNumber = 0; loopNumber < errorTimes; loopNumber++) {
        GetHandler()->UnlockPin2(wrongPin2, responseInfo, simId);
    }
}

int32_t SimProxy::RestoreNormalPin2Status(std::u16string rightPin2)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    bool retValue = GetHandler()->UnlockPin2(rightPin2, response, simId);
    if (retValue) {
        return response.result;
    } else {
        LOG("UnlockPin2 error...");
        return -1;
    }
}

int32_t SimProxy::RestoreNormalPuk2Status(std::u16string rightPin2, std::u16string rightPuk2)
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    bool retValue = GetHandler()->UnlockPuk2(rightPin2, rightPuk2, response, simId);
    return (response.result);
    if (retValue) {
        return response.result;
    } else {
        LOG("UnlockPuk2 error...");
        return -1;
    }
}

#ifdef SIM_MOCK_TEST
void SimProxy::MockSimStateSet(int32_t simState)
{
    int32_t rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
    char simStateStr[20];
    memset_s(simStateStr, sizeof(simStateStr), '\0', sizeof(simStateStr));
    switch (simState) {
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_UNKNOWN:
            rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_NOT_PRESENT:
            rilSimState = HRilSimState::HRIL_SIM_NOT_INSERTED;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_LOCKED:
            rilSimState = HRilSimState::HRIL_SIM_PIN;
            break;
        case (int32_t)OHOS::Telephony::SimState::SIM_STATE_READY:
            rilSimState = HRilSimState::HRIL_SIM_READY;
            break;
        default:
            LOG("Input simState error...");
            break;
    }
    int ret = sprintf_s(simStateStr, sizeof(simStateStr), "%d", rilSimState);
    if (ret == -1) {
        LOG("An exception occurred in sprintf_s function...");
    } else {
        g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_STATE, simStateStr, strlen(simStateStr));
    }
}

void SimProxy::MockPinCodeSet(std::string pinCode)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PIN, pinCode.c_str(), strlen(pinCode.c_str()));
}

void SimProxy::MockPukCodeSet(std::string pukCode)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PUK, pukCode.c_str(), strlen(pukCode.c_str()));
}

void SimProxy::MockPin2CodeSet(std::string pin2Code)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PIN2, pin2Code.c_str(), strlen(pin2Code.c_str()));
}

void SimProxy::MockPuk2CodeSet(std::string puk2Code)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PUK2, puk2Code.c_str(), strlen(puk2Code.c_str()));
}
#endif

int SimProxy::Init()
{
    LOG("sim test GetProxy ... ");
#ifdef SIM_MOCK_TEST
    if (g_mockVender.Init() != 0) {
        LOG("Init faild");
        return -1;
    }
#endif

    sptr<ISystemAbilityManager> systemAbilityMgr = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (systemAbilityMgr == nullptr) {
        LOG("sim test Get ISystemAbilityManager failed ... ");
        return -1;
    }

    sptr<IRemoteObject> remote = systemAbilityMgr->CheckSystemAbility(TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID);
    if (remote) {
        sptr<ICoreService> telephonyService = iface_cast<ICoreService>(remote);
        LOG("sim test Get TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID succ ... ");
        telephonyService_ = telephonyService;
        return 0;
    }

    LOG("sim test Get TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID fail ... ");
    return -1;
}
} // namespace Telephony
} // namespace OHOS

#endif
