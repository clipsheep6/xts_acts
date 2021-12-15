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
#include "log.h"
#include "condition_lock.h"
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
    static std::u16string BUNDLE_NAME;

private:
    Utils::RWLock rwClientLock_;
    sptr<CallAbilityCallbackBasic> callAbilityCallbackPtr_;
    sptr<ICallManagerService> callManagerServicePtr_;
    int32_t systemAbilityId_;
};

std::u16string CallManagerBasic::BUNDLE_NAME = Str8ToStr16("com.example.callmanager");

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
    explicit CallAbilityCallbackBasic() {};
    ~CallAbilityCallbackBasic() {};

    int32_t OnCallDetailsChange(const CallAttributeInfo &info);
    int32_t OnCallEventChange(const CallEventInfo &info);
    int32_t OnSupplementResult(const CallResultReportId reportId, AppExecFwk::PacMap &resultInfo);

public:
    const int SUCCESSFUL = 0;
};

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
        return TELEPHONY_ERR_DESCRIPTOR_MISMATCH;
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
        return TELEPHONY_ERR_FAIL;
    }
    if (!data.ContainFileDescriptors()) {
        TELEPHONY_LOGW("sent raw data is less than 32k");
    }
    if ((parcelPtr = reinterpret_cast<const CallAttributeInfo *>(data.ReadRawData(len))) == nullptr) {
        TELEPHONY_LOGE("reading raw data failed, length = %d", len);
        return TELEPHONY_ERR_FAIL;
    }

    result = OnCallDetailsChange(*parcelPtr);
    if (!reply.WriteInt32(result)) {
        TELEPHONY_LOGE("writing parcel failed");
        return TELEPHONY_ERR_FAIL;
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
        return TELEPHONY_ERR_FAIL;
    }
    if (!data.ContainFileDescriptors()) {
        TELEPHONY_LOGW("sent raw data is less than 32k");
    }
    if ((parcelPtr = reinterpret_cast<const CallEventInfo *>(data.ReadRawData(len))) == nullptr) {
        TELEPHONY_LOGE("reading raw data failed, length = %d", len);
        return TELEPHONY_ERR_FAIL;
    }

    result = OnCallEventChange(*parcelPtr);
    if (!reply.WriteInt32(result)) {
        TELEPHONY_LOGE("writing parcel failed");
        return TELEPHONY_ERR_FAIL;
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
        return TELEPHONY_ERR_FAIL;
    }
    return TELEPHONY_SUCCESS;
}

CallAbilityCallbackBasicStub::CallAbilityCallbackBasicStub()
{
    memberFuncMap_[UPDATE_CALL_STATE_INFO] = &CallAbilityCallbackBasicStub::CallStateInfoRequestBasic;
    memberFuncMap_[UPDATE_CALL_EVENT] = &CallAbilityCallbackBasicStub::CallEventRequestBasic;
    memberFuncMap_[UPDATE_CALL_SUPPLEMENT_REQUEST] = &CallAbilityCallbackBasicStub::SupplementResultRequestBasic;
}

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
        return TELEPHONY_ERR_LOCAL_PTR_NULL;
    }
    callAbilityCallbackPtr_ = (std::make_unique<CallAbilityCallbackBasic>()).release();
    if (callAbilityCallbackPtr_ == nullptr) {
        Clean();
        LOG("create CallAbilityCallbackBasic object failed!\n");
        return TELEPHONY_ERR_FAIL;
    }

    int32_t ret = callManagerServicePtr_->RegisterCallBack(callAbilityCallbackPtr_, BUNDLE_NAME);
    LOG("========= ret = %d", ret);
    if (ret != TELEPHONY_SUCCESS) {
        Clean();
        LOG("register callback to call manager service failed,result: %d", ret);
        return TELEPHONY_ERR_REGISTER_CALLBACK_FAIL;
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