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

#include "face_auth_test_service_ability_second_auth.h"
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
const auto timeFast = std::chrono::milliseconds(500);
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthTestServiceAbilitySecondAuth::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
const int32_t FLAGS_LOCAL_AUTH = 0;
const int32_t CHALLENGE_VALID = 1;
const int32_t FACE_ID_UNDEFINED = 0;
std::map<std::string, FaceAuthTestServiceAbilitySecondAuth::func> FaceAuthTestServiceAbilitySecondAuth::funcMap_ = {
    {"StopSelfAbility", &FaceAuthTestServiceAbilitySecondAuth::StopSelfAbility},
    {"FaceAuth_Init", &FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Init},
    {"FaceAuth_Release", &FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Release},
    {"FaceAuth_Authenticate", &FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Authenticate},
};
FaceAuthTestServiceAbilitySecondAuth::~FaceAuthTestServiceAbilitySecondAuth()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

void FaceAuthTestServiceAbilitySecondAuth::StopSelfAbility()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::StopSelfAbility");
    TerminateAbility();
}

void FaceAuthTestServiceAbilitySecondAuth::TestCallback::OnCallbackEvent(
    uint64_t reqId, int32_t type, int32_t code, int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    if (code_ == CODE_CALLBACK_RESULT) {
        isCallback_ = true;
    }
    APP_LOGI("reqid_ is %{public}d", reqid_);
    APP_LOGI("type_ is %{public}d", type_);
    APP_LOGI("code_ is %{public}d", code_);
    APP_LOGI("errorcode_ is %{public}d", errorcode_);
}
void FaceAuthTestServiceAbilitySecondAuth::TestCallback::OnDeathRecipient()
{}

void FaceAuthTestServiceAbilitySecondAuth::OnStart(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnStart");
    GetWantInfo(want);
    Ability::OnStart(want);
    SubscribeEvent();
    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
}

void FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Init()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Init start");

    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("FaceAuth_Init Init result=%{public}d", result);

    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Init");
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Init end");
}

void FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Release()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Release start");

    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuth_Release Release result=%{public}d", result);

    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Release");
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Release end");
}

AuthParam FaceAuthTestServiceAbilitySecondAuth::CreateAuthParam(
    uint64_t _reqId, int32_t _flags, int64_t _challenge, int32_t _faceId, int32_t _previewId)
{
    AuthParam param;
    param.reqId = _reqId;
    param.flags = _flags;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.previewId = _previewId;
    return param;
}

void FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Authenticate()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Authenticate start");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 2;
    AuthParam param = CreateAuthParam(reqIdNum, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("FaceAuth_Authenticate FaceAuthInnerKit::Authenticate result=%{public}d", authResult);

    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("FaceAuth_Authenticate Init result=%{public}d", result);
    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Authenticate");
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::FaceAuth_Authenticate end");
}

void FaceAuthTestServiceAbilitySecondAuth::OnCommand(const AAFwk::Want &want, bool restart, int32_t startId)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnCommand");
    Ability::OnCommand(want, restart, startId);
}
void FaceAuthTestServiceAbilitySecondAuth::OnNewWant(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnNewWant");
    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void FaceAuthTestServiceAbilitySecondAuth::OnStop()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnStop");
    Ability::OnStop();
    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void FaceAuthTestServiceAbilitySecondAuth::OnActive()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnActive");
    Ability::OnActive();
}
void FaceAuthTestServiceAbilitySecondAuth::OnInactive()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnInactive");
    Ability::OnInactive();
}
void FaceAuthTestServiceAbilitySecondAuth::OnBackground()
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnBackground");
    Ability::OnBackground();
}

void FaceAuthTestServiceAbilitySecondAuth::GetWantInfo(const Want &want)
{
    FaceAuthTestServiceAbilitySecondAuth::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
}

bool FaceAuthTestServiceAbilitySecondAuth::PublishEvent(
    const std::string &eventName, const int32_t &code, const std::string &data)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::PublishEvent eventName = %{public}s, code = %{public}d, data "
             "=%{public}s",
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
sptr<IRemoteObject> FaceAuthTestServiceAbilitySecondAuth::OnConnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnConnect11");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void FaceAuthTestServiceAbilitySecondAuth::OnDisconnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(APP_SECOND_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool FaceAuthTestServiceAbilitySecondAuth::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(APP_SECOND_AUTH_REQ_EVENT_NAME);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthTestServiceAbilitySecondAuth::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnReceiveEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s ",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (APP_SECOND_AUTH_REQ_EVENT_NAME.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("FaceAuthTestServiceAbilitySecondAuth::OnReceiveEvent eventName = %{public}s, code = %{public}d, "
                     "data = "
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
REGISTER_AA(FaceAuthTestServiceAbilitySecondAuth);
}  // namespace AppExecFwk
}  // namespace OHOS