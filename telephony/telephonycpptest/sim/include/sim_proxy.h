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
#include <string_ex.h>
#include "stdio.h"
#include "securec.h"
#include "core_service_proxy.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "hril.h"
#include "log.h"

#ifdef SIM_MOCK_TEST
#include "mock_vendor.h"
#include "mock_vendor_common.h"
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

#ifdef SIM_MOCK_TEST
    void MockSimStateSet(int32_t simState);
    void MockPinCodeSet(std::string pinCode);
    void MockPukCodeSet(std::string pukCode);
#endif

private:
    OHOS::sptr<ICoreService> telephonyService_ = nullptr;
};

OHOS::sptr<ICoreService> SimProxy::GetHandler() const
{
    return telephonyService_;
}

void SimProxy::SwitchPinLock(int32_t enable)
{
    int32_t simId = 1;
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

#ifdef SIM_MOCK_TEST
void SimProxy::MockSimStateSet(int32_t simState)
{
    int32_t rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
    char simStateStr[20];
    memset_s(simStateStr, sizeof(simStateStr), '\0', sizeof(simStateStr));
    switch (simState) {
        case OHOS::Telephony::ExternalState::EX_UNKNOWN:
            rilSimState = HRilSimState::HRIL_SIM_NOT_READY;
            break;
        case OHOS::Telephony::ExternalState::EX_ABSENT:
            rilSimState = HRilSimState::HRIL_SIM_NOT_INSERTED;
            break;
        case OHOS::Telephony::ExternalState::EX_PIN_LOCKED:
            rilSimState = HRilSimState::HRIL_SIM_PIN;
            break;
        case OHOS::Telephony::ExternalState::EX_PUK_LOCKED:
            rilSimState = HRilSimState::HRIL_SIM_PUK;
            break;
        case OHOS::Telephony::ExternalState::EX_READY:
            rilSimState = HRilSimState::HRIL_SIM_READY;
            break;
        default:
            LOG("Input simState error...");
            break;
    }
    int ret = sprintf_s(simStateStr, sizeof(simStateStr), "%d", rilSimState);
    if (ret == -1) {
        LOG("sprintf_s error...");
    }
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_STATE, simStateStr, strlen(simStateStr));
}

void SimProxy::MockPinCodeSet(std::string pinCode)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PIN, pinCode.c_str(), strlen(pinCode.c_str()));
}

void SimProxy::MockPukCodeSet(std::string pukCode)
{
    g_mockVender.MockVendorSet(DISPATCHID::SIM_SET_PUK, pukCode.c_str(), strlen(pukCode.c_str()));
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

    sptr<ISystemAbilityManager> systemAbilityMgr =
        SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
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
