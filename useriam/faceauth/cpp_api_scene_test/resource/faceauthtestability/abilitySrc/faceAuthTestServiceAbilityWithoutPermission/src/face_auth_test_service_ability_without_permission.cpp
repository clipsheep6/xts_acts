/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

#include "face_auth_test_service_ability_without_permission.h"
#include <iostream>
#include <fstream>
#include "app_log_wrapper.h"
#include "useriam_auth_kit.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "ipc_skeleton.h"
#include "on_faceauth_stub.h"

using namespace OHOS::EventFwk;
using namespace OHOS::UserIAM::FaceAuth;
using std::string;
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthTestServiceAbilityWithoutPermission::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
const int32_t FLAGS_LOCAL_AUTH = 0;
const int32_t CHALLENGE_VALID = 1;
const int32_t FACE_ID_VALID = 1;
std::map<std::string, FaceAuthTestServiceAbilityWithoutPermission::func>
    FaceAuthTestServiceAbilityWithoutPermission::funcMap_ = {
        {"StopSelfAbility", &FaceAuthTestServiceAbilityWithoutPermission::StopSelfAbility},
        {"FaceAuth_Init", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Init},
        {"FaceAuth_Release", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Release},
        {"FaceAuth_Authenticate", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Authenticate},
        {"FaceAuth_ResetTimeout", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_ResetTimeout},
        {"FaceAuth_PreEnroll", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PreEnroll},
        {"FaceAuth_PostEnroll", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PostEnroll},
        {"FaceAuth_Remove", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove},
        {"FaceAuth_Remove_Id", &FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove_Id},
};
FaceAuthTestServiceAbilityWithoutPermission::~FaceAuthTestServiceAbilityWithoutPermission()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

void FaceAuthTestServiceAbilityWithoutPermission::StopSelfAbility()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::StopSelfAbility");
    TerminateAbility();
}

void FaceAuthTestServiceAbilityWithoutPermission::TestCallback::OnCallbackEvent(
    uint64_t reqId, int32_t type, int32_t code, int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    isCallback_ = true;
    APP_LOGI("reqid_ is %{public}d", reqid_);
    APP_LOGI("type_ is %{public}d", type_);
    APP_LOGI("code_ is %{public}d", code_);
    APP_LOGI("errorcode_ is %{public}d", errorcode_);
}

void FaceAuthTestServiceAbilityWithoutPermission::TestCallback::OnDeathRecipient()
{}

void FaceAuthTestServiceAbilityWithoutPermission::OnStart(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnStart");
    GetWantInfo(want);
    Ability::OnStart(want);
    SubscribeEvent();
    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Init()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Init start");

    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("FaceAuth_Init Init result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_Init");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Init end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Release()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Release start");

    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuth_Release Release result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_Release");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Release end");
}

AuthParam FaceAuthTestServiceAbilityWithoutPermission::CreateAuthParam(
    uint64_t _reqId, int32_t _flags, int64_t _challenge, int32_t _faceId, sptr<IBufferProducer> producer)
{
    AuthParam param;
    param.reqId = _reqId;
    param.flags = _flags;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.producer = producer;
    return param;
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Authenticate()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Authenticate start");

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 3;
    AuthParam param = CreateAuthParam(reqIdNum, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_VALID);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("FaceAuth_Authenticate FaceAuthInnerKit::Authenticate result=%{public}d", authResult);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, authResult, "FaceAuth_Authenticate");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Authenticate end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PreEnroll()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PreEnroll start");
    int32_t result = FaceAuthInnerKit::PreEnroll();
    APP_LOGI("FaceAuth_PreEnroll result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_PreEnroll");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PreEnroll end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PostEnroll()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PostEnroll start");
    int32_t result = FaceAuthInnerKit::PostEnroll();
    APP_LOGI("FaceAuth_PostEnroll result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_PostEnroll");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_PostEnroll end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove start");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 1800;
    param.reqId = reqIdNum;
    param.faceId = 0;
    int32_t result = FaceAuthInnerKit::Remove(param, callback);
    APP_LOGI("FaceAuth_Remove result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_Remove");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove_Id()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove_Id start");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 1800;
    param.reqId = reqIdNum;
    param.faceId = 1;
    int32_t result = FaceAuthInnerKit::Remove(param, callback);
    APP_LOGI("FaceAuth_Remove_Id result=%{public}d", result);

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, result, "FaceAuth_Remove_Id");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_Remove_Id end");
}

void FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_ResetTimeout()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_ResetTimeout start");

    FaceAuthInnerKit::ResetTimeout();

    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, 0, "FaceAuth_ResetTimeout");
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::FaceAuth_ResetTimeout end");
}

void FaceAuthTestServiceAbilityWithoutPermission::OnCommand(const AAFwk::Want &want, bool restart, int32_t startId)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnCommand");
    Ability::OnCommand(want, restart, startId);
}
void FaceAuthTestServiceAbilityWithoutPermission::OnNewWant(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnNewWant");
    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void FaceAuthTestServiceAbilityWithoutPermission::OnStop()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnStop");
    Ability::OnStop();
    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void FaceAuthTestServiceAbilityWithoutPermission::OnActive()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnActive");
    Ability::OnActive();
}
void FaceAuthTestServiceAbilityWithoutPermission::OnInactive()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnInactive");
    Ability::OnInactive();
}
void FaceAuthTestServiceAbilityWithoutPermission::OnBackground()
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnBackground");
    Ability::OnBackground();
}

void FaceAuthTestServiceAbilityWithoutPermission::GetWantInfo(const Want &want)
{
    FaceAuthTestServiceAbilityWithoutPermission::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
}

bool FaceAuthTestServiceAbilityWithoutPermission::PublishEvent(
    const std::string &eventName, const int32_t &code, const std::string &data)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::PublishEvent eventName = %{public}s, code = %{public}d, "
             "data =%{public}s",
        eventName.c_str(),
        code,
        data.c_str());

    Want want;
    want.SetAction(eventName);

    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> FaceAuthTestServiceAbilityWithoutPermission::OnConnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnConnect11");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void FaceAuthTestServiceAbilityWithoutPermission::OnDisconnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(
        APP_WITHOUT_PERMISSION_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool FaceAuthTestServiceAbilityWithoutPermission::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(APP_WITHOUT_PERMISSION_REQ_EVENT_NAME);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthTestServiceAbilityWithoutPermission::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnReceiveEvent eventName = %{public}s, code = %{public}d, "
             "data = %{public}s ",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (APP_WITHOUT_PERMISSION_REQ_EVENT_NAME.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("FaceAuthTestServiceAbilityWithoutPermission::OnReceiveEvent eventName = %{public}s, code = "
                     "%{public}d, data = "
                     "%{public}s",
                eventName.c_str(),
                data.GetCode(),
                dataContent.c_str());
        } else {
            if (mainAbility_ != nullptr) {
                (mainAbility_->*funcMap_[dataContent])();
            }
        }
    }
}
REGISTER_AA(FaceAuthTestServiceAbilityWithoutPermission);
}  // namespace AppExecFwk
}  // namespace OHOS