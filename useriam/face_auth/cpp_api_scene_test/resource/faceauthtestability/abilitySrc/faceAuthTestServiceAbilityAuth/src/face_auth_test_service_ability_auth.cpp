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

#include "face_auth_test_service_ability_auth.h"
#include <fcntl.h>
#include <fstream>
#include <iostream>
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
const int32_t FLAGS_LOCAL_AUTH = 0;
const int32_t CHALLENGE_VALID = 1;
const int32_t FACE_ID_UNDEFINED = 0;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthTestServiceAbilityAuth::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
std::map<std::string, FaceAuthTestServiceAbilityAuth::func> FaceAuthTestServiceAbilityAuth::funcMap_ = {
    {"StopSelfAbility", &FaceAuthTestServiceAbilityAuth::StopSelfAbility},
    {"FaceAuth_Init", &FaceAuthTestServiceAbilityAuth::FaceAuth_Init},
    {"FaceAuth_Release", &FaceAuthTestServiceAbilityAuth::FaceAuth_Release},
    {"FaceAuth_Authenticate", &FaceAuthTestServiceAbilityAuth::FaceAuth_Authenticate},
};
FaceAuthTestServiceAbilityAuth::~FaceAuthTestServiceAbilityAuth()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

void FaceAuthTestServiceAbilityAuth::WriteFile(
    int32_t caseNum, int32_t codeNum, std::map<int32_t, ResultInfo> resultInfos_)
{
    std::ofstream mystream("/data/config.dat", std::ios::trunc);
    int32_t paramNum = 10;
    if (!mystream.is_open()) {
        return;
    }
    mystream << (std::to_string(caseNum) + "\n");
    mystream << (std::to_string(codeNum) + "\n");
    for (size_t i = 0; i < resultInfos_.size(); i++) {
        mystream << std::to_string(resultInfos_[i].resultCode);
        mystream << " ";
        for (int32_t j = 0; j < paramNum; j++) {
            mystream << std::to_string(resultInfos_[i].param[j]);
            mystream << " ";
        }
        mystream << "\n";
    }
    mystream.close();
}

void FaceAuthTestServiceAbilityAuth::WriteTempFile(int32_t id)
{
    std::ofstream mystream("/data/temp.dat", std::ios::trunc);
    if (!mystream.is_open()) {
        return;
    }
    mystream << std::to_string(id);
    mystream.close();
}

void FaceAuthTestServiceAbilityAuth::StopSelfAbility()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::StopSelfAbility");
    TerminateAbility();
}

void FaceAuthTestServiceAbilityAuth::TestCallback::OnCallbackEvent(
    uint64_t reqId, int32_t type, int32_t code, int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    bundle_ = bundle;
    if (code_ == CODE_CALLBACK_RESULT || code_ == CODE_CALLBACK_CANCEL) {
        isCallback_ = true;
    }
    APP_LOGI("reqid_ is xxxx%04llu", reqid_);
    APP_LOGI("type_ is %{public}d", type_);
    APP_LOGI("code_ is %{public}d", code_);
    APP_LOGI("errorcode_ is %{public}d", errorcode_);
    APP_LOGI("bundle_ is %{public}d", bundle_.authtoken.size());
}
void FaceAuthTestServiceAbilityAuth::TestCallback::OnDeathRecipient()
{}

void FaceAuthTestServiceAbilityAuth::OnStart(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnStart");
    GetWantInfo(want);
    Ability::OnStart(want);
    SubscribeEvent();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
}

void FaceAuthTestServiceAbilityAuth::FaceAuth_Init()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Init start");

    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("FaceAuth_Init Init result=%{public}d", result);

    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Init");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Init end");
}

void FaceAuthTestServiceAbilityAuth::FaceAuth_Release()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Release start");

    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuth_Release Release result=%{public}d", result);

    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Release");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Release end");
}

void FaceAuthTestServiceAbilityAuth::FaceAuth_Authenticate()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Authenticate start");

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 1;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("FaceAuth_Authenticate FaceAuthInnerKit::Authenticate result=%{public}d", authResult);

    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("FaceAuth_Authenticate Init result=%{public}d", result);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "FaceAuth_Authenticate");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_Authenticate end");
}

AuthParam FaceAuthTestServiceAbilityAuth::CreateAuthParam(
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

void FaceAuthTestServiceAbilityAuth::OnCommand(const AAFwk::Want &want, bool restart, int32_t startId)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnCommand");
    Ability::OnCommand(want, restart, startId);
}
void FaceAuthTestServiceAbilityAuth::OnNewWant(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnNewWant");
    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void FaceAuthTestServiceAbilityAuth::OnStop()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnStop");
    Ability::OnStop();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void FaceAuthTestServiceAbilityAuth::OnActive()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnActive");
    Ability::OnActive();
}
void FaceAuthTestServiceAbilityAuth::OnInactive()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnInactive");
    Ability::OnInactive();
}
void FaceAuthTestServiceAbilityAuth::OnBackground()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnBackground");
    Ability::OnBackground();
}

void FaceAuthTestServiceAbilityAuth::GetWantInfo(const Want &want)
{
    FaceAuthTestServiceAbilityAuth::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
}

bool FaceAuthTestServiceAbilityAuth::PublishEvent(
    const std::string &eventName, const int32_t &code, const std::string &data)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::PublishEvent eventName = %{public}s, code = %{public}d, data =%{public}s",
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
sptr<IRemoteObject> FaceAuthTestServiceAbilityAuth::OnConnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnConnect11");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void FaceAuthTestServiceAbilityAuth::OnDisconnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool FaceAuthTestServiceAbilityAuth::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(APP_AUTH_REQ_EVENT_NAME);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthTestServiceAbilityAuth::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI(
        "FaceAuthTestServiceAbilityAuth::OnReceiveEvent eventName = %{public}s, code = %{public}d, data = %{public}s ",
        eventName.c_str(),
        data.GetCode(),
        dataContent.c_str());
    if (APP_AUTH_REQ_EVENT_NAME.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("FaceAuthTestServiceAbilityAuth::OnReceiveEvent eventName = %{public}s, code = %{public}d, data = "
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
REGISTER_AA(FaceAuthTestServiceAbilityAuth);
}  // namespace AppExecFwk
}  // namespace OHOS