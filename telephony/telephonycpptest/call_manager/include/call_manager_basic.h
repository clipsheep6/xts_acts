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

#ifndef CALL_MANAGER_BASIC_H
#define CALL_MANAGER_BASIC_H
#include "call_ability_callback.h"
#include "call_manager_errors.h"
#include "call_manager_service_proxy.h"
#include "i_call_manager_service.h"
#include "iservice_registry.h"
#include "napi_call_ability_callback.h"

#include "condition_lock.h"
#include "log.h"
#include "mock_vendor.h"
#include "rwlock.h"
#include "system_ability_definition.h"
#ifdef CALLMANAGER_MOCK_TEST
MockVendor g_mockVender_;
#endif
namespace OHOS {
namespace Telephony {
namespace CallManager {
class CallAbilityCallbackBasic;
class CallManagerBasic {
public:
    CallManagerBasic()
    {
        callAbilityCallbackPtr_ = nullptr;
        callManagerServicePtr_ = nullptr;
        systemAbilityId_ = TELEPHONY_CALL_MANAGER_SYS_ABILITY_ID;
    }
    ~CallManagerBasic() = default;
    void Clean();
    sptr<ICallManagerService> GetPtr();
    int32_t Init();
    void UnInit();
    int IsInit();
    int32_t RegisterCallBack();

public:
    static const int SUCCESSFUL = 0;
    static const int FALSE_DEFAULT = -1;

private:
    Utils::RWLock rwClientLock_;
    sptr<CallAbilityCallbackBasic> callAbilityCallbackPtr_;
    sptr<ICallManagerService> callManagerServicePtr_;
    int32_t systemAbilityId_;
};

class CallAbilityCallbackBasicStub : public IRemoteStub<ICallAbilityCallback> {
public:
    CallAbilityCallbackBasicStub();
    virtual ~CallAbilityCallbackBasicStub();
    int OnRemoteRequest(uint32_t code, MessageParcel &data, MessageParcel &reply, MessageOption &option) override;

private:
    using CallAbilityCallbackFunc = int32_t (CallAbilityCallbackBasicStub::*)(MessageParcel &data,
                                                                              MessageParcel &reply);

    int32_t CallStateInfoRequestBasic(MessageParcel &data, MessageParcel &reply);
    int32_t CallEventRequestBasic(MessageParcel &data, MessageParcel &reply);
    int32_t SupplementResultRequestBasic(MessageParcel &data, MessageParcel &reply);

    std::map<uint32_t, CallAbilityCallbackFunc> memberFuncMap_;
};

class CallAbilityCallbackBasic : public CallAbilityCallbackBasicStub {
public:
    explicit CallAbilityCallbackBasic(){};
    ~CallAbilityCallbackBasic(){};

    int32_t OnCallDetailsChange(const CallAttributeInfo &info);
    int32_t OnCallEventChange(const CallEventInfo &info);
    int32_t OnSupplementResult(const CallResultReportId reportId, AppExecFwk::PacMap &resultInfo);

public:
    const int SUCCESSFUL = 0;
};

int32_t CallManagerBasic::Init()
{
#ifdef CALLMANAGER_MOCK_TEST
    if (g_mockVender_.Init() != SUCCESSFUL) {
        LOG("Init faild");
    }
#endif
    if (callManagerServicePtr_ != nullptr) {
        LOG("Already get telephony base service\n");
        return FALSE_DEFAULT;
    }
    callManagerServicePtr_ = nullptr;
    Utils::UniqueWriteGuard<Utils::RWLock> guard(rwClientLock_);
    if (callManagerServicePtr_ != nullptr) {
        return TELEPHONY_SUCCESS;
    }
    sptr<ISystemAbilityManager> sm = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (sm == nullptr) {
        LOG("GetSystemAbilityManager null\n");
        return FALSE_DEFAULT;
    }
    callManagerServicePtr_ =
        iface_cast<ICallManagerService>(sm->GetSystemAbility(TELEPHONY_CALL_MANAGER_SYS_ABILITY_ID));
    if (callManagerServicePtr_ == nullptr) {
        LOG("GetSystemAbility null\n");
        return FALSE_DEFAULT;
    }
    int32_t ret = RegisterCallBack();
    if (ret != TELEPHONY_SUCCESS) {
        LOG("RegisterCallBack false ret = %d", ret);
        return ret;
    }
    return TELEPHONY_SUCCESS;
}

void CallManagerBasic::UnInit()
{
    callManagerServicePtr_ = nullptr;
    LOG("Disconnect service");
}

int CallManagerBasic::IsInit()
{
    if (callManagerServicePtr_ == nullptr) {
        return FALSE_DEFAULT;
    }
    return SUCCESSFUL;
}

void CallManagerBasic::Clean()
{
    Utils::UniqueWriteGuard<Utils::RWLock> guard(rwClientLock_);
    if (callManagerServicePtr_) {
        callManagerServicePtr_.clear();
        callManagerServicePtr_ = nullptr;
    }
    if (callAbilityCallbackPtr_) {
        callAbilityCallbackPtr_.clear();
        callAbilityCallbackPtr_ = nullptr;
    }
    TELEPHONY_LOGI("clean");
}

int32_t CallManagerBasic::RegisterCallBack()
{
    if (callManagerServicePtr_ == nullptr) {
        LOG("callManagerServicePtr_ is null!\n");
        return TELEPHONY_LOCAL_PTR_NULL;
    }
    callAbilityCallbackPtr_ = (std::make_unique<CallAbilityCallbackBasic>()).release();
    if (callAbilityCallbackPtr_ == nullptr) {
        Clean();
        LOG("create CallAbilityCallbackBasic object failed!\n");
        return TELEPHONY_FAIL;
    }

    int32_t ret = callManagerServicePtr_->RegisterCallBack(callAbilityCallbackPtr_);
    LOG("========= ret = %d", ret);
    if (ret != TELEPHONY_SUCCESS) {
        Clean();
        LOG("register callback to call manager service failed,result: %d", ret);
        return TELEPHONY_REGISTER_CALLBACK_FAIL;
    }
    LOG("register call ability callback success!\n");
    return TELEPHONY_SUCCESS;
}

sptr<ICallManagerService> CallManagerBasic::GetPtr()
{
    return callManagerServicePtr_;
}
} // namespace CallManager
} // namespace Telephony
} // namespace OHOS

#endif