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

#include "face_auth_stability_test.h"
#include <cmath>
#include <fcntl.h>
#include <future>
#include <fstream>
#include <iostream>
#include <thread>
#include <vector>
#include "app_log_wrapper.h"
#include "useriam_auth_kit.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "ipc_skeleton.h"
#include "face_auth_innerkit.h"
#include "face_auth_defines.h"
using namespace OHOS::EventFwk;
using namespace OHOS::UserIAM::FaceAuth;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace AppExecFwk {
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthStabilityTest::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
const int32_t STABILITY_TEST_TIME = 6 * 60 * 60;
const auto timeFast = std::chrono::milliseconds(500);
static uint64_t g_reqid = 1;
std::map<std::string, FaceAuthStabilityTest::func> FaceAuthStabilityTest::funcMap_ = {
    {"StopSelfAbility", &FaceAuthStabilityTest::StopSelfAbility},
    {"CPPAPI_Stability_0100", &FaceAuthStabilityTest::CPPAPI_Stability_0100},
    {"CPPAPI_Stability_0200", &FaceAuthStabilityTest::CPPAPI_Stability_0200},
};
FaceAuthStabilityTest::~FaceAuthStabilityTest()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

void FaceAuthStabilityTest::StopSelfAbility()
{
    APP_LOGI("FaceAuthStabilityTest::StopSelfAbility");
    TerminateAbility();
}

static sptr<Surface> CreatePreviewOutput4UI()
{
    APP_LOGI("CreatePreviewOutput4UI.");
    sptr<Surface> previewBuffer = Surface::CreateSurfaceAsConsumer();
    previewBuffer->SetDefaultWidthAndHeight(PREVIEW_DEFAULT_WIDTH, PREVIEW_DEFAULT_HEIGHT);
    sptr<FaceAuthStabilityTest::FaceAuthCameraBufferListener> listener =
        new FaceAuthStabilityTest::FaceAuthCameraBufferListener();
    listener->cameraBuffer_ = previewBuffer;
    previewBuffer->RegisterConsumerListener((sptr<IBufferConsumerListener> &) listener);
    return previewBuffer;
}

void FaceAuthStabilityTest::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
    Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    if (code_ == CODE_CALLBACK_RESULT) {
        isCallback_ = true;
    }
    APP_LOGI("reqid_ is %{public}llu", reqid_);
    APP_LOGI("type_ is %{public}d", type_);
    APP_LOGI("code_ is %{public}d", code_);
    APP_LOGI("errorcode_ is %{public}d", errorcode_);
}

void FaceAuthStabilityTest::FaceAuthCameraBufferListener::OnBufferAvailable()
{
    int32_t flushFence = 0;
    int64_t timestamp = 0;
    OHOS::Rect damage;
    APP_LOGI("FaceAuthCameraBufferListener OnBufferAvailable");
    OHOS::sptr<OHOS::SurfaceBuffer> buffer = nullptr;
    cameraBuffer_->AcquireBuffer(buffer, flushFence, timestamp, damage);
    if (buffer != nullptr) {
        APP_LOGI("Calling OnBufferAvailable");
        cameraBuffer_->ReleaseBuffer(buffer, -1);
    } else {
        APP_LOGI("AcquireBuffer failed!");
    }
}

void FaceAuthStabilityTest::TestCallback::OnDeathRecipient()
{}

bool FaceAuthStabilityTest::Execute()
{
    APP_LOGI("FaceAuthStabilityTest::Execute");
    std::string type = "FACE_ONLY";
    std::string level = "S2";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    param.reqId = g_reqid++;
    APP_LOGI("FaceAuthStabilityTest::Execute reqId:%{public}llu", param.reqId);
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    UseriamAuthKit::Execute(param, type, level, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
        APP_LOGI("FaceAuthStabilityTest::Execute Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::Execute  callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::Init false");
        return false;
    }
}

bool FaceAuthStabilityTest::Cancel()
{
    APP_LOGI("FaceAuthStabilityTest::Cancel");
    std::string type = "FACE_ONLY";
    std::string level = "S2";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    param.reqId = g_reqid++;
    APP_LOGI("FaceAuthStabilityTest::Cancel reqId:%{public}llu", param.reqId);
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    UseriamAuthKit::Execute(param, type, level, callback);
    OHOS::sptr<TestCallback> canclecallback(new TestCallback());
    UseriamAuthKit::Cancel(param.reqId, canclecallback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
        APP_LOGI("FaceAuthStabilityTest::Cancel Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::Cancel Execute's callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::Cancel false");
        return false;
    }
}
bool FaceAuthStabilityTest::Init()
{
    APP_LOGI("FaceAuthStabilityTest::Init");
    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("FaceAuthStabilityTest::Init  result = %{public}d, ", result);
    return true;
}

bool FaceAuthStabilityTest::Release()
{
    APP_LOGI("FaceAuthStabilityTest::Release");
    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::Release  result = %{public}d, ", result);
    return true;
}

bool FaceAuthStabilityTest::ResetTimeout()
{
    APP_LOGI("FaceAuthStabilityTest::ResetTimeout");
    FaceAuthInnerKit::ResetTimeout();
    return true;
}

bool FaceAuthStabilityTest::GetRemainingTime()
{
    APP_LOGI("FaceAuthStabilityTest::GetRemainingTime");
    int64_t resultTime = FaceAuthInnerKit::GetRemainingTime();
    int32_t num = 30;
    APP_LOGI("FaceAuthInnerKit::GetRemainingTime resultTime=%{public}llu", resultTime);
    if (resultTime >= 0 && resultTime < num) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::GetRemainingTime false");
        return false;
    }
}

bool FaceAuthStabilityTest::GetRemainingNum()
{
    APP_LOGI("FaceAuthStabilityTest::GetRemainingNum");
    int32_t result = FaceAuthInnerKit::GetRemainingNum();
    APP_LOGI("FaceAuthInnerKit::GetRemainingNum result=%{public}d", result);
    int32_t num = 5;
    if (result >= 0 && result <= num) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::GetRemainingNum false");
        return false;
    }
}

// stability start
bool FaceAuthStabilityTest::Enroll()
{
    APP_LOGI("FaceAuthStabilityTest::Enroll");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    param.reqId = g_reqid++;
    APP_LOGI("FaceAuthStabilityTest::Enroll reqId:%{public}llu", param.reqId);
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    param.producer = cameraBuffer->GetProducer();
    param.challenge = 1;
    param.faceId = 0;
    std::vector<uint8_t> token;
    token.push_back('S');
    token.push_back('t');
    token.push_back('r');
    token.push_back('e');
    token.push_back('s');
    token.push_back('s');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        param.token.push_back(*iter);
    }
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
        APP_LOGI("FaceAuthStabilityTest::Enroll Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::Enroll  callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::Enroll false");
        return false;
    }
}

bool FaceAuthStabilityTest::CancelEnrollment()
{
    APP_LOGI("FaceAuthStabilityTest::CancelEnrollment");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    param.reqId = g_reqid++;
    APP_LOGI("FaceAuthStabilityTest::CancelEnrollment reqId:%{public}llu", param.reqId);
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    param.producer = cameraBuffer->GetProducer();
    param.challenge = 1;
    param.faceId = 0;
    std::vector<uint8_t> token;
    token.push_back('S');
    token.push_back('t');
    token.push_back('r');
    token.push_back('e');
    token.push_back('s');
    token.push_back('s');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        param.token.push_back(*iter);
    }
    FaceAuthInnerKit::Enroll(param, callback);
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    FaceAuthInnerKit::CancelEnrollment(param.reqId, callbackCancel);
    while (!callback->isCallback_) {
        APP_LOGI("FaceAuthStabilityTest::CancelEnrollment Waiting Callback!!");
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::CancelEnrollment  callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::CancelEnrollment false");
        return false;
    }
}

bool FaceAuthStabilityTest::PreEnroll()
{
    APP_LOGI("FaceAuthStabilityTest::PreEnroll");
    int64_t result = FaceAuthInnerKit::PreEnroll();
    APP_LOGI("FaceAuthStabilityTest::PreEnroll  result = %{public}lld, ", result);
    if (result >= 0) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::PreEnroll false");
        return false;
    }
}

bool FaceAuthStabilityTest::PostEnroll()
{
    APP_LOGI("FaceAuthStabilityTest::PostEnroll");
    int32_t result = FaceAuthInnerKit::PostEnroll();
    APP_LOGI("FaceAuthStabilityTest::PostEnroll  result = %{public}d, ", result);
    if (result == 0) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::PostEnroll false");
        return false;
    }
}

bool FaceAuthStabilityTest::Remove()
{
    APP_LOGI("FaceAuthStabilityTest::Remove");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    param.reqId = g_reqid++;
    APP_LOGI("FaceAuthStabilityTest::Remove reqId:%{public}llu", param.reqId);
    int32_t stabilityfaceId = 99;
    param.faceId = stabilityfaceId;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        APP_LOGI("FaceAuthStabilityTest::Remove Waiting Callback!!");
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuthStabilityTest::Remove  callback->errorcode_ = %{public}d, ", callback->errorcode_);
    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT ||
        callback->errorcode_ == ERRCODE_FAIL) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::Remove false");
        return false;
    }
}

bool FaceAuthStabilityTest::GetEnrolledFaceIDs()
{
    APP_LOGI("FaceAuthStabilityTest::GetEnrolledFaceIDs");
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(0);
    APP_LOGI("FaceAuthStabilityTest::GetEnrolledFaceIDs  result = %{public}d, ", result.size());
    if (result.size() >= 0) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::GetEnrolledFaceIDs false");
        return false;
    }
}

bool FaceAuthStabilityTest::GetAngleDim()
{
    APP_LOGI("FaceAuthStabilityTest::GetAngleDim");
    int32_t result = FaceAuthInnerKit::GetAngleDim();
    APP_LOGI("FaceAuthStabilityTest::GetAngleDim  result = %{public}d, ", result);
    int32_t num = 3;
    if (result == num) {
        return true;
    } else {
        APP_LOGI("FaceAuthStabilityTest::GetAngleDim false");
        return false;
    }
}

void FaceAuthStabilityTest::CPPAPI_Stability_0100()
{
    APP_LOGI("app func CPPAPI_Stability_0100 start");
    int32_t result = 1;
    auto starTime = std::chrono::system_clock::now();
    StabilityFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STABILITY_TEST_TIME) {
        result = 0;
    }
    APP_LOGI("CPPAPI_Stability_0100::StabilityFountion run time: %{public}d", realTestTime);
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, result, "CPPAPI_Stability_0100");
    APP_LOGI("app func CPPAPI_Stability_0100 end");
}

void FaceAuthStabilityTest::CPPAPI_Stability_0200()
{
    APP_LOGI("app func CPPAPI_Stability_0200 start");
    int32_t result = 1;
    auto starTime = std::chrono::system_clock::now();
    StabilityRandomFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STABILITY_TEST_TIME) {
        result = 0;
    }
    APP_LOGI("CPPAPI_Stability_0200::StabilityRandomFountion run time: %{public}d", realTestTime);
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, result, "CPPAPI_Stability_0200");
    APP_LOGI("app func CPPAPI_Stability_0200 end");
}

void FaceAuthStabilityTest::GetTestFunction(std::vector<FnPtr> &vector)
{
    vector.push_back(Execute);
    vector.push_back(Cancel);
    vector.push_back(Init);
    vector.push_back(Release);
    vector.push_back(ResetTimeout);
    vector.push_back(GetRemainingTime);
    vector.push_back(GetRemainingNum);
    vector.push_back(Enroll);
    vector.push_back(CancelEnrollment);
    vector.push_back(PreEnroll);
    vector.push_back(PostEnroll);
    vector.push_back(Remove);
    vector.push_back(GetEnrolledFaceIDs);
    vector.push_back(GetAngleDim);
}
// stability end

void FaceAuthStabilityTest::OnStart(const Want &want)
{
    APP_LOGI("FaceAuthStabilityTest::OnStart");

    Ability::OnStart(want);
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
    SubscribeEvent();
}
void FaceAuthStabilityTest::OnCommand(const AAFwk::Want &want, bool restart, int startId)
{
    APP_LOGI("FaceAuthStabilityTest::OnCommand");

    Ability::OnCommand(want, restart, startId);
}
void FaceAuthStabilityTest::OnNewWant(const Want &want)
{
    APP_LOGI("FaceAuthStabilityTest::OnNewWant");

    Ability::OnNewWant(want);
}
void FaceAuthStabilityTest::OnStop()
{
    APP_LOGI("FaceAuthStabilityTest::OnStop");

    Ability::OnStop();
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void FaceAuthStabilityTest::OnActive()
{
    APP_LOGI("FaceAuthStabilityTest::OnActive");

    Ability::OnActive();
}
void FaceAuthStabilityTest::OnInactive()
{
    APP_LOGI("FaceAuthStabilityTest::OnInactive");

    Ability::OnInactive();
}
void FaceAuthStabilityTest::OnBackground()
{
    APP_LOGI("FaceAuthStabilityTest::OnBackground");

    Ability::OnBackground();
}

bool FaceAuthStabilityTest::PublishEvent(const std::string &eventName, const int &code, const std::string &data)
{
    APP_LOGI("FaceAuthStabilityTest::PublishEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s",
        eventName.c_str(), code, data.c_str());

    Want want;
    want.SetAction(eventName);

    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> FaceAuthStabilityTest::OnConnect(const Want &want)
{
    APP_LOGI("FaceAuthStabilityTest::OnConnect");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void FaceAuthStabilityTest::OnDisconnect(const Want &want)
{
    APP_LOGI("FaceAuthStabilityTest::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(RESP_EVENT_NAME_FACE_AUTH_STABILITY, AbilityLifecycleExecutor::LifecycleState::BACKGROUND,
        "OnDisconnect");
}
bool FaceAuthStabilityTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(REQ_EVENT_NAME_FACE_AUTH_STABILITY);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthStabilityTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("FaceAuthStabilityTest::OnReceiveEvent eventName = %{public}s, code = %{public}d, data "
             "= %{public}s",
        eventName.c_str(), data.GetCode(), dataContent.c_str());
    if (REQ_EVENT_NAME_FACE_AUTH_STABILITY.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI("FaceAuthStabilityTest::OnReceiveEvent eventName = %{public}s, code = "
                     "%{public}d, data = %{public}s",
                eventName.c_str(), data.GetCode(), dataContent.c_str());
        } else {
            if (mainAbility_ != nullptr) {
                (mainAbility_->*funcMap_[dataContent])();
            }
        }
    }
}

bool FaceAuthStabilityTest::ExeAPI()
{
    std::vector<FnPtr> vec;
    GetTestFunction(vec);
    bool result = true;
    for (auto fn : vec) {
        result = fn();
        if (!result) {
            break;
        }
    }
    return result;
}

bool FaceAuthStabilityTest::RandomExeAPI()
{
    std::vector<FnPtr> vec;
    GetTestFunction(vec);
    struct timespec t;
    t.tv_sec = 0;
    t.tv_nsec = 0;
    clock_gettime(CLOCK_REALTIME, &t);
    int64_t elapsedTime {((t.tv_sec) * SEC_TO_NANOSEC + t.tv_nsec)};
    size_t elapsedHash = std::hash<std::string>()(std::to_string(elapsedTime));
    int rand = static_cast<int>(elapsedHash);
    int tar = rand % vec.size();
    APP_LOGI("FaceAuthStabilityTest::RandomExeAPI  tar = %{public}d, ", tar);
    bool result = vec[tar]();
    return result;
}

// stability start
bool FaceAuthStabilityTest::TestFountion()
{
    auto starTime = std::chrono::system_clock::now();
    bool result = true;
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
        STABILITY_TEST_TIME) {
        result = ExeAPI();
        if (!result) {
            break;
        }
    }
    APP_LOGI("FaceAuthStabilityTest::TestFountion  result = %{public}d, ", result);
    return result;
}

bool FaceAuthStabilityTest::TestRandomFountion()
{
    auto starTime = std::chrono::system_clock::now();
    bool result = true;
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
        STABILITY_TEST_TIME) {
        result = RandomExeAPI();
        if (!result) {
            break;
        }
    }
    APP_LOGI("FaceAuthStabilityTest::TestRandomFountion  result = %{public}d, ", result);
    return result;
}

void FaceAuthStabilityTest::StabilityFountion()
{
    APP_LOGI("FaceAuthStabilityTest::StabilityFountion  start");
    int threadCount = 15;
    std::vector<std::future<void>> new_threads;
    for (int thread_index = 0; thread_index < threadCount; thread_index++) {
        new_threads.push_back(std::async(std::launch::async, []() {
            TestFountion();
        }));
    }
    for (unsigned int wait_index = 0; wait_index < new_threads.size(); wait_index++) {
        new_threads[wait_index].get();
    }
    APP_LOGI("FaceAuthStabilityTest::StabilityFountion  end");
}

void FaceAuthStabilityTest::StabilityRandomFountion()
{
    APP_LOGI("FaceAuthStabilityTest::StabilityRandomFountion  start");
    int threadCount = 15;
    std::vector<std::future<void>> new_threads;
    for (int thread_index = 0; thread_index < threadCount; thread_index++) {
        new_threads.push_back(std::async(std::launch::async, []() {
            TestRandomFountion();
        }));
    }
    for (unsigned int wait_index = 0; wait_index < new_threads.size(); wait_index++) {
        new_threads[wait_index].get();
    }
    APP_LOGI("FaceAuthStabilityTest::StabilityRandomFountion  end");
}
REGISTER_AA(FaceAuthStabilityTest);
} // namespace AppExecFwk
} // namespace OHOS