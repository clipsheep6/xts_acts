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

#include "face_auth_test_service_ability_enroll.h"
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <map>
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
static const int32_t TEST_ENROLL_SUCCESS = 998;
const int32_t PERFORMANCE_TEST_TIMES = 1000;
const int32_t CHALLENGE_VALID = 1;
const int32_t CHALLENGE_INVALID = -1;
const int32_t FACE_ID_UNDEFINED = 0;
const int32_t FACE_ID_INVALID = -1;
const int32_t FACE_ID_ASSIGN = 10;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthTestServiceAbilityEnroll::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
std::map<std::string, FaceAuthTestServiceAbilityEnroll::func> FaceAuthTestServiceAbilityEnroll::funcMap_ = {
    {"StopSelfAbility", &FaceAuthTestServiceAbilityEnroll::StopSelfAbility},
    {"FaceAuth_Init", &FaceAuthTestServiceAbilityEnroll::FaceAuth_Init},
    {"FaceAuth_Release", &FaceAuthTestServiceAbilityEnroll::FaceAuth_Release},
    {"CPPAPI_Performance_Enroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Enroll_0100},
    {"CPPAPI_Function_Enroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0100},
    {"CPPAPI_Function_Enroll_0200", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0200},
    {"CPPAPI_Function_Enroll_0300", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0300},
    {"CPPAPI_Function_Enroll_1100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1100},
    {"CPPAPI_Function_Enroll_0400", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0400},
    {"CPPAPI_Function_Enroll_0500", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0500},
    {"CPPAPI_Function_Enroll_0600", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0600},
    {"CPPAPI_Function_Enroll_0700", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0700},
    {"CPPAPI_Function_Enroll_0800", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0800},
    {"CPPAPI_Function_Enroll_0900", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0900},
    {"CPPAPI_Performance_CancelEnroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_CancelEnroll_0100},
    {"CPPAPI_Performance_PreEnroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PreEnroll_0100},
    {"CPPAPI_Function_PreEnroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PreEnroll_0100},
    {"CPPAPI_Performance_PostEnroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PostEnroll_0100},
    {"CPPAPI_Function_PostEnroll_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PostEnroll_0100},
    {"CPPAPI_Performance_GetAngleDim_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetAngleDim_0100},
    {"CPPAPI_Function_GetAngleDim_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetAngleDim_0100},
    {"CPPAPI_Performance_GetEnrolledFaceIDs_0100",
        &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetEnrolledFaceIDs_0100},
    {"CPPAPI_Function_GetEnrolledFaceIDs_0100",
        &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0100},
    {"CPPAPI_Function_GetEnrolledFaceIDs_0200",
        &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0200},
    {"CPPAPI_Function_GetEnrolledFaceIDs_0300",
        &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0300},
    {"CPPAPI_Performance_Remove_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Remove_0100},
    {"CPPAPI_Function_Remove_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0100},
    {"CPPAPI_Function_Remove_0200", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0200},
    {"CPPAPI_Function_Remove_0300", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0300},
    {"CPPAPI_Function_Enroll_1000", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1000},
    {"CPPAPI_Function_Remove_0600", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0600},
    {"CPPAPI_Function_Remove_0700", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0700},
    {"CPPAPI_Function_Scenario_0100", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0100},
    {"CPPAPI_Function_Scenario_0200", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0200},
    {"CPPAPI_Function_Scenario_0400", &FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400},
};
FaceAuthTestServiceAbilityEnroll::~FaceAuthTestServiceAbilityEnroll()
{
    CommonEventManager::UnSubscribeCommonEvent(subscriber_);
}

void FaceAuthTestServiceAbilityEnroll::WriteFile(int32_t caseNum, int32_t codeNum,
    std::map<int32_t, ResultInfo> resultInfos_)
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

void FaceAuthTestServiceAbilityEnroll::StopSelfAbility()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::StopSelfAbility");
    TerminateAbility();
}

void FaceAuthTestServiceAbilityEnroll::FaceAuth_Init()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::FaceAuth_Init start");

    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("FaceAuth_Init Init result=%{public}d", result);

    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "FaceAuth_Init");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::FaceAuth_Init end");
}

void FaceAuthTestServiceAbilityEnroll::FaceAuth_Release()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::FaceAuth_Release start");

    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("FaceAuth_Release Release result=%{public}d", result);

    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "FaceAuth_Release");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::FaceAuth_Release end");
}

void FaceAuthTestServiceAbilityEnroll::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code,
    int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    if (code_ == CODE_CALLBACK_RESULT || code_ == CODE_CALLBACK_CANCEL) {
        isCallback_ = true;
    }
    APP_LOGI("reqid_ is %{public}d", reqid_);
    APP_LOGI("type_ is %{public}d", type_);
    APP_LOGI("code_ is %{public}d", code_);
    APP_LOGI("errorcode_ is %{public}d", errorcode_);
}
void FaceAuthTestServiceAbilityEnroll::TestCallback::OnDeathRecipient()
{}

void FaceAuthTestServiceAbilityEnroll::OnStart(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnStart");
    GetWantInfo(want);
    Ability::OnStart(want);
    SubscribeEvent();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "OnStart");
}

static int32_t SaveYUV(const char *buffer, int32_t size)
{
    char path[PATH_MAX] = {0};
    int32_t retlen = sprintf_s(path, sizeof(path) / sizeof(path[0]), "/data/%s.yuv", "ST");
    if (retlen < 0) {
        APP_LOGI("Path Assignment failed");
        return -1;
    }

    APP_LOGI("%s, saving file to %{public}s", __FUNCTION__, path);
    int32_t imgFd = open(path, O_RDWR | O_CREAT, FILE_PERMISSION_FLAG);
    if (imgFd == -1) {
        APP_LOGI("%s, open file failed, errno = %{public}s.", __FUNCTION__, strerror(errno));
        return -1;
    }
    int32_t ret = write(imgFd, buffer, size);
    if (ret == -1) {
        APP_LOGI("%s, write file failed, error = %{public}s", __FUNCTION__, strerror(errno));
        close(imgFd);
        return -1;
    }
    close(imgFd);
    return 0;
}

class FaceAuthTestServiceAbilityEnroll::FaceAuthCameraBufferListener : public IBufferConsumerListener {
public:
    sptr<Surface> cameraBuffer_;

    void OnBufferAvailable() override
    {
        int32_t flushFence = 0;
        int64_t timestamp = 0;
        OHOS::Rect damage;
        APP_LOGI("FaceAuthCameraBufferListener OnBufferAvailable");
        OHOS::sptr<OHOS::SurfaceBuffer> buffer = nullptr;
        cameraBuffer_->AcquireBuffer(buffer, flushFence, timestamp, damage);
        if (buffer != nullptr) {
            char *addr = static_cast<char *>(buffer->GetVirAddr());
            int32_t size = buffer->GetSize();
            APP_LOGI("Calling SaveYUV");
            SaveYUV(addr, size);
            cameraBuffer_->ReleaseBuffer(buffer, -1);
        } else {
            APP_LOGI("AcquireBuffer failed!");
        }
    }
};

static sptr<Surface> CreatePreviewOutput4UI()
{
    APP_LOGI("CreatePreviewOutput4UI.");
    sptr<Surface> previewBuffer = Surface::CreateSurfaceAsConsumer();
    previewBuffer->SetDefaultWidthAndHeight(PREVIEW_DEFAULT_WIDTH, PREVIEW_DEFAULT_HEIGHT);
    sptr<FaceAuthTestServiceAbilityEnroll::FaceAuthCameraBufferListener> listener =
        new FaceAuthTestServiceAbilityEnroll::FaceAuthCameraBufferListener();
    listener->cameraBuffer_ = previewBuffer;
    previewBuffer->RegisterConsumerListener((sptr<IBufferConsumerListener> &) listener);
    return previewBuffer;
}

void FaceAuthTestServiceAbilityEnroll::EnrollFile()
{
    std::map<int32_t, ResultInfo> resultInfos_;
    WriteFile(TEST_ENROLL_SUCCESS, 0, resultInfos_);
}

EnrollParam FaceAuthTestServiceAbilityEnroll::CreateEnrollParam(uint64_t _reqId, int64_t _challenge, int32_t _faceId,
    sptr<IBufferProducer> _producer, std::vector<uint8_t> _token)
{
    EnrollParam param;
    param.reqId = _reqId;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.producer = _producer;
    for (std::vector<uint8_t>::const_iterator iter = _token.begin(); iter != _token.end(); ++iter) {
        param.token.push_back(*iter);
    }
    return param;
}

AuthParam FaceAuthTestServiceAbilityEnroll::CreateAuthParam(uint64_t _reqId, int32_t _flags, int64_t _challenge,
    int32_t _faceId, sptr<IBufferProducer> producer)
{
    AuthParam param;
    param.reqId = _reqId;
    param.flags = _flags;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.producer = producer;
    return param;
}

/**
 * @tc.number: CPPAPI_Performance_Enroll_0100
 * @tc.name:: Performance of Enroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Enroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Enroll_0100 start");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 100;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        param.reqId++;
        callback->isCallback_ = false;
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Enroll(param, callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_Enroll_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_Enroll_0100");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Enroll_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0100
 * @tc.name:: Cancel the current entry with the same reqid as the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0100 start");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 200;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    if (param.producer != nullptr) {
        APP_LOGI("CPPAPI_Function_Enroll_0100 FaceAuthInnerKit::Enroll param.producer get success");
    }
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    FaceAuthInnerKit::CancelEnrollment(param.reqId, callbackCancel);
    while (!callbackCancel->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_0100 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0100");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0200
 * @tc.name::  Cancel the current entry by using a reqid different from the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 300;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    if (param.producer != nullptr) {
        APP_LOGI("CPPAPI_Function_Enroll_0200 FaceAuthInnerKit::Enroll param.producer get success");
    }
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    uint64_t reqId = 30;
    int32_t result = FaceAuthInnerKit::CancelEnrollment(reqId, callbackCancel);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Enroll_0200 FaceAuthInnerKit::CancelEnrollment result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0200");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0300
 * @tc.name:: Face enroll when token size =0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0300");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 600;
    std::vector<uint8_t> token;
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;

    APP_LOGI("CPPAPI_Function_Enroll_0300 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0300");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_1100
 * @tc.name:: Face enroll when valid preview
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1100");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 700;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_1100 FaceAuthInnerKit::CancelAuth result=%{public}d", result);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_1100");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0400
 * @tc.name:: Face enroll when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0400()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0400");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 900;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_INVALID, cameraBuffer->GetProducer(), token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_0400 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0400");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0500
 * @tc.name:: Face enroll when faceId = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0500()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0500");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1000;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_0500 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0500");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0600
 * @tc.name:: Face enroll when entered faceid
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0600()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0600 start");
    uint64_t reqIdNum = 1100;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    FaceAuthInnerKit::Enroll(param, enrollCallback);
    while (!enrollCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = enrollCallback->errorcode_;
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0600");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0600 end");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0700
 * @tc.name:: Face enroll when faceid not entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0700()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0700");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1200;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_ASSIGN, cameraBuffer->GetProducer(), token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_0700 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0700");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0800
 * @tc.name:: Face enroll when callback is nullptr
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0800()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0800");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1300;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Enroll(param, nullptr);
    APP_LOGI("CPPAPI_Function_Enroll_0800 FaceAuthInnerKit::Enroll result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0800");
}

/**
 * @tc.number: CPPAPI_Performance_CancelEnroll_0100
 * @tc.name:: Performance of CancelEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_CancelEnroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_CancelEnroll_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1500;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::CancelEnrollment(param.reqId, callbackCancel);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_CancelEnroll_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_CancelEnroll_0100");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_CancelEnroll_0100 end");
}

/**
 * @tc.number: CPPAPI_Performance_PreEnroll_0100
 * @tc.name:: Performance of PreEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PreEnroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PreEnroll_0100");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::PreEnroll();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_PreEnroll_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_PreEnroll_0100");
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PreEnroll_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_PreEnroll_0100
 * @tc.name:: Generate a challenge using preenroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PreEnroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PreEnroll_0100");
    int64_t challeng = FaceAuthInnerKit::PreEnroll();
    APP_LOGI("CPPAPI_Function_PreEnroll_0100 FaceAuthInnerKit::PreEnroll challeng=xxxx%04llu", challeng);
    int32_t result = -1;
    if (challeng > 0) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_PreEnroll_0100");
}

/**
 * @tc.number: CPPAPI_Performance_PostEnroll_0100
 * @tc.name:: Performance of PostEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PostEnroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_PostEnroll_0100");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::PostEnroll();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_PostEnroll_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_PostEnroll_0100");
}

/**
 * @tc.number: CPPAPI_Function_PostEnroll_0100
 * @tc.name:: End the face enroll and remove the challenge generated at the bottom
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PostEnroll_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_PostEnroll_0100");
    int32_t result = FaceAuthInnerKit::PostEnroll();
    APP_LOGI("CPPAPI_Function_PostEnroll_0100 FaceAuthInnerKit::PostEnroll result=%{public}d", result);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_PostEnroll_0100");
}

/**
 * @tc.number: CPPAPI_Performance_GetAngleDim_0100
 * @tc.name:: Performance of GetAngleDim interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetAngleDim_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetAngleDim_0100");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetAngleDim();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        averageTime = totalTime / (run_times + 1);
        APP_LOGI("CPPAPI_Performance_GetAngleDim_0100  avg = %{public}f(ms)", averageTime.count());
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_GetAngleDim_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    APP_LOGI("CPPAPI_Performance_GetAngleDim_0100  result = %{public}d", result);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_GetAngleDim_0100");
}

/**
 * @tc.number: CPPAPI_Function_GetAngleDim_0100
 * @tc.name:: Get the number of face angles to be entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetAngleDim_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetAngleDim_0100");
    int32_t result = FaceAuthInnerKit::GetAngleDim();
    APP_LOGI("CPPAPI_Function_GetAngleDim_0100 FaceAuthInnerKit::GetAngleDim result=%{public}d", result);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_GetAngleDim_0100");
}

/**
 * @tc.number: CPPAPI_Performance_GetEnrolledFaceIDs_0100
 * @tc.name:: Performance of GetEnrolledFaceIDs interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetEnrolledFaceIDs_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_GetEnrolledFaceIDs_0100");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetEnrolledFaceIDs(0);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_GetEnrolledFaceIDs_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_GetEnrolledFaceIDs_0100");
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0100
 * @tc.name:: GetEnrolledFaceIDs is called when userid = - 1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0100");
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(-1);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result.size(), "CPPAPI_Function_GetEnrolledFaceIDs_0100");
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0200
 * @tc.name:: GetEnrolledFaceIDs is called when userid = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 2800;
    param.reqId = reqIdNum;
    param.faceId = 0;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam paramEnroll =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    if (paramEnroll.producer != nullptr) {
        APP_LOGI("CPPAPI_Function_Enroll_0200 FaceAuthInnerKit::Enroll param.producer get success");
    }
    EnrollFile();
    OHOS::sptr<TestCallback> callbackEnroll(new TestCallback());
    FaceAuthInnerKit::Enroll(paramEnroll, callbackEnroll);
    while (!callbackEnroll->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(0);
    APP_LOGI("CPPAPI_Function_GetEnrolledFaceIDs_0200 FaceAuthInnerKit::Authenticate result=%{public}d", result.size());
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result.size(), "CPPAPI_Function_GetEnrolledFaceIDs_0200");
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0300
 * @tc.name:: GetEnrolledFaceIDs is called when userid is greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_GetEnrolledFaceIDs_0300");
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(1);
    APP_LOGI("CPPAPI_Function_GetEnrolledFaceIDs_0300 FaceAuthInnerKit::Authenticate result=%{public}d", result.size());
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result.size(), "CPPAPI_Function_GetEnrolledFaceIDs_0300");
}

/**
 * @tc.number: CPPAPI_Performance_Remove_0100
 * @tc.name:: Performance of Remove interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Remove_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Performance_Remove_0100");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 100;
    param.reqId = reqIdNum;
    param.faceId = 0;
    FaceAuthInnerKit::Init();
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Remove(param, callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_Remove_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    APP_LOGI("CPPAPI_Performance_Remove_0100  result = %{public}d", result);
    APP_LOGI("CPPAPI_Performance_Remove_0100 FaceAuthInnerKit::Remove result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Performance_Remove_0100");
}

/**
 * @tc.number: CPPAPI_Function_Remove_0100
 * @tc.name:: GetEnrolledFaceIDs is called when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0100");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 3300;
    param.reqId = reqIdNum;
    param.faceId = -1;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Remove_0100 FaceAuthInnerKit::Remove result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Remove_0100");
}

/**
 * @tc.number: CPPAPI_Function_Remove_0200
 * @tc.name:: Call remove to clear all face templates
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 3400;
    param.reqId = reqIdNum;
    param.faceId = 0;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    std::list<int32_t> num = FaceAuthInnerKit::GetEnrolledFaceIDs(0);
    APP_LOGI("CPPAPI_Function_Remove_0200 FaceAuthInnerKit::GetEnrolledFaceIDs result=%{public}d", num.size());
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, num.size(), "CPPAPI_Function_Remove_0200");
}

/**
 * @tc.number: CPPAPI_Function_Remove_0300
 * @tc.name:: Call remove to delete the face template with the specified ID
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0300");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 3500;
    param.reqId = reqIdNum;
    param.faceId = 0;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Remove_0300 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Remove_0300");
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0100
 * @tc.name:: Requests are sorted by priority
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0100");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    uint64_t reqIdNum = 3800;
    uint64_t reqIdRemoteNum = 3803;
    uint64_t reqIdLocalNum = 3802;
    uint64_t reqIdEnrollNum = 3801;
    uint64_t reqIdRemoveNum = 3804;
    param.reqId = reqIdNum;
    param.flags = 1;
    param.challenge = 1;
    param.faceId = 0;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> remoteCallback(new TestCallback());
    param.reqId = reqIdRemoteNum;
    FaceAuthInnerKit::Authenticate(param, remoteCallback);
    param.flags = 0;
    OHOS::sptr<TestCallback> localCallback(new TestCallback());
    param.reqId = reqIdLocalNum;
    FaceAuthInnerKit::Authenticate(param, localCallback);
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    EnrollParam enrollParam;
    enrollParam.challenge = 1;
    enrollParam.faceId = 0;
    std::vector<uint8_t> token;
    token.push_back('9');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        enrollParam.token.push_back(*iter);
    }
    enrollParam.reqId = reqIdEnrollNum;
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    enrollParam.producer = cameraBuffer->GetProducer();
    FaceAuthInnerKit::Enroll(enrollParam, enrollCallback);
    OHOS::sptr<TestCallback> removeCallback(new TestCallback());
    RemoveParam removeParam;
    removeParam.faceId = 0;
    removeParam.reqId = reqIdRemoveNum;
    FaceAuthInnerKit::Remove(removeParam, removeCallback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = CPPAPI_Function_Scenario_0100_Check(remoteCallback, localCallback, enrollCallback, removeCallback);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Scenario_0100");
}

int32_t FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0100_Check(OHOS::sptr<TestCallback> remoteCallback,
    OHOS::sptr<TestCallback> localCallback, OHOS::sptr<TestCallback> enrollCallback,
    OHOS::sptr<TestCallback> removeCallback)
{
    int32_t result = 0;
    while (!remoteCallback->isCallback_ && !removeCallback->isCallback_ && !enrollCallback->isCallback_ &&
        !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (removeCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0100 FaceAuthInnerKit::removeCallback result++");
    }
    while (!remoteCallback->isCallback_ && !enrollCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (enrollCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0100 FaceAuthInnerKit::enrollCallback result++");
    }
    while (!remoteCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (localCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0100 FaceAuthInnerKit::localCallback result++");
    }
    while (!remoteCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remoteCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0100 FaceAuthInnerKit::remoteCallback result++");
    }
    APP_LOGI("CPPAPI_Function_Scenario_0100 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    return result;
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0200
 * @tc.name:: In the same priority request order
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0200");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    uint64_t reqIdNum = 3900;
    uint64_t reqIdRemoteNum = 3901;
    uint64_t reqIdRemoteNum1 = 3902;
    uint64_t reqIdRemoteNum2 = 3903;
    param.reqId = reqIdNum;
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    FaceAuthInnerKit::Authenticate(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> remotecallback1(new TestCallback());
    param.reqId = reqIdRemoteNum;
    param.flags = 1;
    FaceAuthInnerKit::Authenticate(param, remotecallback1);
    OHOS::sptr<TestCallback> remotecallback2(new TestCallback());
    param.reqId = reqIdRemoteNum1;
    FaceAuthInnerKit::Authenticate(param, remotecallback2);
    OHOS::sptr<TestCallback> remotecallback3(new TestCallback());
    param.reqId = reqIdRemoteNum2;
    FaceAuthInnerKit::Authenticate(param, remotecallback3);
    int32_t result = 0;
    while (!remotecallback1->isCallback_ && !remotecallback2->isCallback_ && !remotecallback3->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remotecallback1->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0200 FaceAuthInnerKit::remotecallback1 result++");
    }
    while (!remotecallback2->isCallback_ && !remotecallback3->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remotecallback2->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0200 FaceAuthInnerKit::remotecallback2 result++");
    }
    while (!remotecallback3->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remotecallback3->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0200 FaceAuthInnerKit::remotecallback3 result++");
    }
    APP_LOGI("CPPAPI_Function_Scenario_0200 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Scenario_0200");
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0400
 * @tc.name:: Cancel authentication and enroll requests in the queue
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Init();
    AuthParam param = CPPAPI_Function_Scenario_0400_CoAuth();
    FaceAuthInnerKit::Authenticate(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> remoteCallback(new TestCallback());
    param = CPPAPI_Function_Scenario_0400_CoAnotherAuth();
    FaceAuthInnerKit::Authenticate(param, remoteCallback);
    param = CPPAPI_Function_Scenario_0400_LocalAuth();
    OHOS::sptr<TestCallback> localCallback(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, localCallback);
    EnrollParam enrollParam = CPPAPI_Function_Scenario_0400_Enroll();
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    FaceAuthInnerKit::Enroll(enrollParam, enrollCallback);
    RemoveParam removeParam = CPPAPI_Function_Scenario_0400_Remove();
    OHOS::sptr<TestCallback> removeCallback(new TestCallback());
    FaceAuthInnerKit::Remove(removeParam, removeCallback);
    OHOS::sptr<TestCallback> callbackCancelAuth(new TestCallback());
    FaceAuthInnerKit::CancelAuth(param.reqId, callbackCancelAuth);
    while (!callbackCancelAuth->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    OHOS::sptr<TestCallback> callbackCancelEnroll(new TestCallback());
    FaceAuthInnerKit::CancelEnrollment(enrollParam.reqId, callbackCancelEnroll);
    while (!callbackCancelEnroll->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = CPPAPI_Function_Scenario_0400_Check(remoteCallback, localCallback, enrollCallback, removeCallback);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Scenario_0400");
}

AuthParam FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_CoAuth()
{
    AuthParam param;
    uint64_t reqIdNum = 4300;
    param.reqId = reqIdNum;
    param.flags = 1;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

AuthParam FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_CoAnotherAuth()
{
    AuthParam param;
    uint64_t reqIdNum = 4303;
    param.reqId = reqIdNum;
    param.flags = 1;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

AuthParam FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_LocalAuth()
{
    AuthParam param;
    uint64_t reqIdCoNum = 4302;
    param.reqId = reqIdCoNum;
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

EnrollParam FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_Enroll()
{
    EnrollParam enrollParam;
    uint64_t reqIdEnrollNum = 4301;
    enrollParam.challenge = 1;
    enrollParam.faceId = 0;
    std::vector<uint8_t> token;
    token.push_back('9');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        enrollParam.token.push_back(*iter);
    }
    enrollParam.reqId = reqIdEnrollNum;
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    enrollParam.producer = cameraBuffer->GetProducer();
    return enrollParam;
}

RemoveParam FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_Remove()
{
    RemoveParam removeParam;
    uint64_t reqIdRemoveNum = 4304;
    removeParam.faceId = 0;
    removeParam.reqId = reqIdRemoveNum;
    return removeParam;
}

int32_t FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Scenario_0400_Check(OHOS::sptr<TestCallback> remoteCallback,
    OHOS::sptr<TestCallback> localCallback, OHOS::sptr<TestCallback> enrollCallback,
    OHOS::sptr<TestCallback> removeCallback)
{
    int32_t result = 0;
    while (!remoteCallback->isCallback_ && !removeCallback->isCallback_ && !enrollCallback->isCallback_ &&
        !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (removeCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0400 FaceAuthInnerKit::removeCallback result++");
    }
    while (!remoteCallback->isCallback_ && !enrollCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (enrollCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0400 FaceAuthInnerKit::enrollCallback result++");
    }
    while (!remoteCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (localCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0400 FaceAuthInnerKit::localCallback result++");
    }
    while (!remoteCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remoteCallback->isCallback_ != true) {
        result++;
        APP_LOGI("CPPAPI_Function_Scenario_0400 FaceAuthInnerKit::remoteCallback result++");
    }
    APP_LOGI("CPPAPI_Function_Scenario_0400 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    return result;
}

/**
 * @tc.number: CPPAPI_Function_Enroll_1000
 * @tc.name:: Service busy during face enroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1000()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_1000");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 4000;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Enroll(param, callback);
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    FaceAuthInnerKit::Enroll(param, enrollCallback);
    while (!enrollCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = enrollCallback->errorcode_;
    APP_LOGI("CPPAPI_Function_Enroll_1000 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_1000");
}

/**
 * @tc.number: CPPAPI_Function_Remove_0600
 * @tc.name:: Service busy during face deletion
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0600()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0600");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 4100;
    uint64_t reqIdRemoveNum = 4101;
    uint64_t reqIdRemoveNum1 = 4102;
    std::vector<uint8_t> token;
    token.push_back('9');
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    EnrollParam param =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, cameraBuffer->GetProducer(), token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> authCallback(new TestCallback());
    FaceAuthInnerKit::Enroll(param, authCallback);
    std::this_thread::sleep_for(timeFast);
    RemoveParam removeParam;
    removeParam.faceId = 0;
    removeParam.reqId = reqIdRemoveNum;
    FaceAuthInnerKit::Remove(removeParam, callback);
    OHOS::sptr<TestCallback> removeCallback(new TestCallback());
    removeParam.reqId = reqIdRemoveNum1;
    FaceAuthInnerKit::Remove(removeParam, removeCallback);
    while (!removeCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = removeCallback->errorcode_;
    APP_LOGI("CPPAPI_Function_Remove_0600 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Remove_0600");
}

/**
 * @tc.number: CPPAPI_Function_Remove_0700
 * @tc.name:: Face deletion failed
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0700()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Remove_0700");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 4200;
    int32_t faceNum = 4200;
    param.reqId = reqIdNum;
    param.faceId = faceNum;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Remove_0700 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Remove_0700");
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0900
 * @tc.name:: Face entry in case of abnormal face service
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0900()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::CPPAPI_Function_Enroll_0900");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1400;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_UNDEFINED, nullptr, token);
    EnrollFile();
    int32_t result = FaceAuthInnerKit::Enroll(param, callback);
    APP_LOGI("CPPAPI_Function_Enroll_0900 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, result, "CPPAPI_Function_Enroll_0900");
}

void FaceAuthTestServiceAbilityEnroll::OnCommand(const AAFwk::Want &want, bool restart, int32_t startId)
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnCommand");
    Ability::OnCommand(want, restart, startId);
}
void FaceAuthTestServiceAbilityEnroll::OnNewWant(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnNewWant");
    GetWantInfo(want);
    Ability::OnNewWant(want);
}
void FaceAuthTestServiceAbilityEnroll::OnStop()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnStop");
    Ability::OnStop();
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INITIAL, "OnStop");
}
void FaceAuthTestServiceAbilityEnroll::OnActive()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnActive");
    Ability::OnActive();
}
void FaceAuthTestServiceAbilityEnroll::OnInactive()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnInactive");
    Ability::OnInactive();
}
void FaceAuthTestServiceAbilityEnroll::OnBackground()
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnBackground");
    Ability::OnBackground();
}

void FaceAuthTestServiceAbilityEnroll::GetWantInfo(const Want &want)
{
    FaceAuthTestServiceAbilityEnroll::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
}

bool FaceAuthTestServiceAbilityEnroll::PublishEvent(const std::string &eventName, const int32_t &code,
    const std::string &data)
{
    APP_LOGI(
        "FaceAuthTestServiceAbilityEnroll::PublishEvent eventName = %{public}s, code = %{public}d, data =%{public}s",
        eventName.c_str(), code, data.c_str());

    Want want;
    want.SetAction(eventName);

    CommonEventData commonData;
    commonData.SetWant(want);
    commonData.SetCode(code);
    commonData.SetData(data);
    return CommonEventManager::PublishCommonEvent(commonData);
}
sptr<IRemoteObject> FaceAuthTestServiceAbilityEnroll::OnConnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnConnect11");

    sptr<IRemoteObject> ret = Ability::OnConnect(want);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::ACTIVE, "OnConnect");
    return ret;
}
void FaceAuthTestServiceAbilityEnroll::OnDisconnect(const Want &want)
{
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnDisconnect");

    Ability::OnDisconnect(want);
    PublishEvent(APP_ENROLL_RESP_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::BACKGROUND, "OnDisconnect");
}
bool FaceAuthTestServiceAbilityEnroll::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    matchingSkills.AddEvent(APP_ENROLL_REQ_EVENT_NAME);
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    subscriber_->mainAbility_ = this;
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthTestServiceAbilityEnroll::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto dataContent = data.GetData();
    APP_LOGI("FaceAuthTestServiceAbilityEnroll::OnReceiveEvent eventName = %{public}s, code = %{public}d, data = "
             "%{public}s ",
        eventName.c_str(), data.GetCode(), dataContent.c_str());
    if (APP_ENROLL_REQ_EVENT_NAME.compare(eventName) == 0) {
        if (funcMap_.find(dataContent) == funcMap_.end()) {
            APP_LOGI(
                "FaceAuthTestServiceAbilityEnroll::OnReceiveEvent eventName = %{public}s, code = %{public}d, data = "
                "%{public}s",
                eventName.c_str(), data.GetCode(), dataContent.c_str());
        } else {
            if (mainAbility_ != nullptr) {
                (mainAbility_->*funcMap_[dataContent])();
            }
        }
    }
}
REGISTER_AA(FaceAuthTestServiceAbilityEnroll);
} // namespace AppExecFwk
} // namespace OHOS