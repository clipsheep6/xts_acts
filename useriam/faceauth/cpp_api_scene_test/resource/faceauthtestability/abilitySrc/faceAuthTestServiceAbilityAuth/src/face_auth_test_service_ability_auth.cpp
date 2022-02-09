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
const int32_t PERFORMANCE_TEST_TIMES = 1000;
const int32_t FLAGS_LOCAL_AUTH = 0;
const int32_t CHALLENGE_UNDEFINED = 0;
const int32_t CHALLENGE_VALID = 1;
const int32_t CHALLENGE_INVALID = -1;
const int32_t FACE_ID_UNDEFINED = 0;
const int32_t FACE_ID_VALID = 1;
const int32_t FACE_ID_ENROLLED = 2;
const int32_t FACE_ID_INVALID = -1;
using AbilityConnectionProxy = OHOS::AAFwk::AbilityConnectionProxy;
int32_t FaceAuthTestServiceAbilityAuth::AbilityConnectCallback::onAbilityConnectDoneCount = 0;
std::map<std::string, FaceAuthTestServiceAbilityAuth::func> FaceAuthTestServiceAbilityAuth::funcMap_ = {
    {"StopSelfAbility", &FaceAuthTestServiceAbilityAuth::StopSelfAbility},
    {"FaceAuth_Init", &FaceAuthTestServiceAbilityAuth::FaceAuth_Init},
    {"FaceAuth_Release", &FaceAuthTestServiceAbilityAuth::FaceAuth_Release},
    {"FaceAuth_Authenticate", &FaceAuthTestServiceAbilityAuth::FaceAuth_Authenticate},
    {"FaceAuth_GetRemainingNum", &FaceAuthTestServiceAbilityAuth::FaceAuth_GetRemainingNum},
    {"CPPAPI_Performance_Init_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Init_0100},
    {"CPPAPI_Performance_Release_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Release_0100},
    {"CPPAPI_Function_Release_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0100},
    {"CPPAPI_Function_Release_0200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0200},
    {"CPPAPI_Performance_CancelAuth_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_CancelAuth_0100},
    {"CPPAPI_Function_CancelAuth_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0100},
    {"CPPAPI_Function_CancelAuth_0200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0200},
    {"CPPAPI_Performance_ResetTimeout_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_ResetTimeout_0100},
    {"CPPAPI_Function_ResetTimeout_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0100},
    {"CPPAPI_Function_ResetTimeout_0200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0200},
    {"CPPAPI_Performance_GetRemainingNum_0100",
        &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingNum_0100},
    {"CPPAPI_Function_GetRemainingNum_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingNum_0100},
    {"CPPAPI_Performance_GetRemainingTime_0100",
        &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingTime_0100},
    {"CPPAPI_Function_GetRemainingTime_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0100},
    {"CPPAPI_Function_GetRemainingTime_0200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0200},
    {"CPPAPI_Performance_Authenticate_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Authenticate_0100},
    {"CPPAPI_Function_CancelAuth_0300", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0300},
    {"CPPAPI_Function_CancelAuth_0400", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0400},
    {"CPPAPI_Function_Authenticate_0100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0100},
    {"CPPAPI_Function_Authenticate_0200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0200},
    {"CPPAPI_Function_Authenticate_0300", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0300},
    {"CPPAPI_Function_Authenticate_0400", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0400},
    {"CPPAPI_Function_Authenticate_0500", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0500},
    {"CPPAPI_Function_Authenticate_0600", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0600},
    {"CPPAPI_Function_Authenticate_0700", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0700},
    {"CPPAPI_Function_Authenticate_0800", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0800},
    {"CPPAPI_Function_Authenticate_0900", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0900},
    {"CPPAPI_Function_Authenticate_1900", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1900},
    {"CPPAPI_Function_Authenticate_2000", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_2000},
    {"CPPAPI_Function_Authenticate_1000", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1000},
    {"CPPAPI_Function_Authenticate_1100", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1100},
    {"CPPAPI_Function_Authenticate_1200", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1200},
    {"CPPAPI_Function_Authenticate_1300", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1300},
    {"CPPAPI_Function_Authenticate_1400", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1400},
    {"CPPAPI_Function_Authenticate_1500", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1500},
    {"CPPAPI_Function_Authenticate_1600", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1600},
    {"CPPAPI_Function_Authenticate_1700", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1700},
    {"CPPAPI_Function_Scenario_0300", &FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Scenario_0300},
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

class FaceAuthTestServiceAbilityAuth::FaceAuthCameraBufferListener : public IBufferConsumerListener {
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
    sptr<FaceAuthTestServiceAbilityAuth::FaceAuthCameraBufferListener> listener =
        new FaceAuthTestServiceAbilityAuth::FaceAuthCameraBufferListener();
    listener->cameraBuffer_ = previewBuffer;
    previewBuffer->RegisterConsumerListener((sptr<IBufferConsumerListener> &)listener);
    return previewBuffer;
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

void FaceAuthTestServiceAbilityAuth::FaceAuth_GetRemainingNum()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_GetRemainingNum start");

    int32_t result = FaceAuthInnerKit::GetRemainingNum();
    APP_LOGI("FaceAuth_GetRemainingNum  result=%{public}d", result);

    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "FaceAuth_GetRemainingNum");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::FaceAuth_GetRemainingNum end");
}

AuthParam FaceAuthTestServiceAbilityAuth::CreateAuthParam(
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

/**
 * @tc.number: CPPAPI_Performance_Init_0100
 * @tc.name:: Performance of Init interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Init_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Init_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Init();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        FaceAuthInnerKit::Release();
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_Init_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_Init_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Init_0100 end");
}

/**
 * @tc.number: CPPAPI_Performance_Release_0100
 * @tc.name:: Performance of Release interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Release_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Release_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        FaceAuthInnerKit::Init();
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Release();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_Release_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_Release_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Release_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_Release_0100
 * @tc.name:: Applications that have not executed init call release
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0100");
    int32_t uid = IPCSkeleton::GetCallingUid();
    APP_LOGI("uid is %{public}d", uid);
    int32_t result = FaceAuthInnerKit::Release();
    APP_LOGI("CPPAPI_Function_Release_0100 FaceAuthInnerKit::Release result=%{public}d", result);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Release_0100");
}

/**
 * @tc.number: CPPAPI_Function_Release_0200
 * @tc.name:: The application repeatedly calls release
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Release_0200");
    int32_t result = FaceAuthInnerKit::Init();
    APP_LOGI("CPPAPI_Function_Release_0200 Init result=%{public}d", result);

    result = FaceAuthInnerKit::Release();
    APP_LOGI("CPPAPI_Function_Release_0200 First Release result=%{public}d", result);

    result = FaceAuthInnerKit::Release();
    APP_LOGI("CPPAPI_Function_Release_0200 Second Release result=%{public}d", result);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Release_0200");
}

/**
 * @tc.number: CPPAPI_Performance_CancelAuth_0100
 * @tc.name:: Performance of CancelAuth interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_CancelAuth_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_CancelAuth_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> cancelcallback(new TestCallback());
    uint64_t reqId = 0;
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        reqId++;
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::CancelAuth(reqId, cancelcallback);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_CancelAuth_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_CancelAuth_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_CancelAuth_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0100
 * @tc.name:: Cancelauth is not called for authentication
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0100");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 900;
    int32_t authResult = FaceAuthInnerKit::CancelAuth(reqId, callback);
    APP_LOGI("CPPAPI_Function_CancelAuth_0100 FaceAuthInnerKit::CancelAuth result=%{public}d", authResult);
    int32_t result = authResult;
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_CancelAuth_0100");
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0200
 * @tc.name:: Call cancelauth repeatedly
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 1000;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    std::this_thread::sleep_for(timeFast);
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    int32_t cancelResult = FaceAuthInnerKit::CancelAuth(param.reqId, callbackCancel);
    if (cancelResult == 0) {
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    int32_t errorCount = 0;
    if (ERRCODE_CANCEL != callback->errorcode_) {
        errorCount++;
    }
    OHOS::sptr<TestCallback> callbackAuth(new TestCallback());
    int32_t authResult = FaceAuthInnerKit::CancelAuth(param.reqId, callbackAuth);
    if (authResult != -1) {
        errorCount++;
    }
    APP_LOGI("CPPAPI_Function_CancelAuth_0200 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    int32_t result = errorCount;
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_CancelAuth_0200");
}

/**
 * @tc.number: CPPAPI_Performance_ResetTimeout_0100
 * @tc.name:: Performance of ResetTimeout interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_ResetTimeout_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_ResetTimeout_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::ResetTimeout();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_ResetTimeout_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_ResetTimeout_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_ResetTimeout_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0100
 * @tc.name:: Unfreeze face authentication after freezing
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0100");
    std::map<int32_t, ResultInfo> resultInfos_;
    uint64_t reqId = 1200;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t num = 5;
    for (int32_t i = 0; i < num; i++) {
        OHOS::sptr<TestCallback> callback(new TestCallback());
        ResultInfo info;
        info.resultCode = FI_COMPARE_FAIL;
        int32_t range = 10;
        for (int32_t j = 0; j < range; j++) {
            info.param[j] = 0;
        }
        resultInfos_[0] = info;
        WriteFile(1, 1, resultInfos_);
        FaceAuthInnerKit::Authenticate(param, callback);
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    FaceAuthInnerKit::ResetTimeout();
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    APP_LOGI("CPPAPI_Function_ResetTimeout_0100 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, authResult, "CPPAPI_Function_ResetTimeout_0100");
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0200
 * @tc.name:: It is not frozen or unfrozen, and the number of attempts to obtain is still 5
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_ResetTimeout_0200");
    FaceAuthInnerKit::ResetTimeout();
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    APP_LOGI("CPPAPI_Function_ResetTimeout_0200 FaceAuthInnerKit::GetRemainingNum result=%{public}d", authResult);
    int32_t result = authResult;
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_ResetTimeout_0200");
}

/**
 * @tc.number: CPPAPI_Performance_GetRemainingNum_0100
 * @tc.name:: Performance of GetRemainingNum interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingNum_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingNum_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetRemainingNum();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_GetRemainingNum_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_GetRemainingNum_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingNum_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingNum_0100
 * @tc.name:: Gets the number of attempts until frozen
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingNum_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingNum_0100");
    FaceAuthInnerKit::ResetTimeout();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    std::map<int32_t, ResultInfo> resultInfos_;
    uint64_t reqId = 1600;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    ResultInfo info;
    info.resultCode = FI_COMPARE_FAIL;
    int32_t range = 10;
    for (int32_t i = 0; i < range; i++) {
        info.param[i] = 0;
    }
    resultInfos_[0] = info;
    FaceAuthInnerKit::Init();
    int32_t numFour = 4;
    int32_t errorCount = 0;
    CPPAPI_Function_GetRemainingNum_0100_Authenticate(numFour, errorCount, resultInfos_, param);
    int32_t numThree = 3;
    CPPAPI_Function_GetRemainingNum_0100_Authenticate(numThree, errorCount, resultInfos_, param);
    int32_t numTwo = 2;
    CPPAPI_Function_GetRemainingNum_0100_Authenticate(numTwo, errorCount, resultInfos_, param);
    int32_t numOne = 1;
    CPPAPI_Function_GetRemainingNum_0100_Authenticate(numOne, errorCount, resultInfos_, param);
    int32_t numZero = 0;
    CPPAPI_Function_GetRemainingNum_0100_Authenticate(numZero, errorCount, resultInfos_, param);
    APP_LOGI("CPPAPI_Function_GetRemainingNum_0100 FaceAuthInnerKit::Authenticate errorCount=%{public}d", errorCount);
    int32_t result = errorCount;
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_GetRemainingNum_0100");
}

void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingNum_0100_Authenticate(
    int32_t num, int32_t &errorCount, std::map<int32_t, ResultInfo> resultInfos_, AuthParam param)
{
    WriteFile(1, 1, resultInfos_);
    OHOS::sptr<TestCallback> callbackTwo(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callbackTwo);
    while (!callbackTwo->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    if (authResult != num) {
        errorCount++;
    }
    APP_LOGI("CPPAPI_Function_GetRemainingNum_0100 FaceAuthInnerKit::Authenticate errorCount=%{public}d", errorCount);
}

/**
 * @tc.number: CPPAPI_Performance_GetRemainingTime_0100
 * @tc.name:: Performance of GetRemainingTime interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingTime_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingTime_0100 start");
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetRemainingTime();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }
    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_GetRemainingTime_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_GetRemainingTime_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_GetRemainingTime_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0100
 * @tc.name:: Obtain the remaining unlocking time until unlocking, the time range is 0-30s
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0100");
    std::map<int32_t, ResultInfo> resultInfos_;
    uint64_t reqId = 1800;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t num = 5;
    for (int32_t i = 0; i < num; i++) {
        OHOS::sptr<TestCallback> callback(new TestCallback());
        ResultInfo info;
        info.resultCode = FI_COMPARE_FAIL;
        int32_t range = 10;
        for (int32_t j = 0; j < range; j++) {
            info.param[j] = 0;
        }
        resultInfos_[0] = info;
        WriteFile(1, 1, resultInfos_);
        FaceAuthInnerKit::Authenticate(param, callback);
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    long resultTime = FaceAuthInnerKit::GetRemainingTime();

    int32_t resultTimebool = 0;
    if (resultTime < 0 || resultTime > AUTH_FAIL_WAIT_TIME) {
        resultTimebool++;
    }
    int32_t result = resultTimebool;
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_GetRemainingTime_0100");
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0200
 * @tc.name:: Call the remaining unlocking time when it is not frozen, and return 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_GetRemainingTime_0200");
    FaceAuthInnerKit::ResetTimeout();
    int32_t authResult = FaceAuthInnerKit::GetRemainingTime();
    APP_LOGI("CPPAPI_Function_GetRemainingTime_0200 FaceAuthInnerKit::GetRemainingTime result=%{public}d", authResult);
    int32_t result = authResult;
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_GetRemainingTime_0200");
}

/**
 * @tc.number: CPPAPI_Performance_Authenticate_0100
 * @tc.name:: Performance of Authenticate interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Authenticate_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Authenticate_0100 start");

    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 0;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_INVALID, FACE_ID_UNDEFINED);
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        param.reqId++;
        callback->isCallback_ = false;
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Authenticate(param, callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    APP_LOGI("CPPAPI_Performance_Authenticate_0100  avg = %{public}f(ms)", averageTime.count());
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Performance_Authenticate_0100");
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Performance_Authenticate_0100 end");
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0300
 * @tc.name:: Reqid is set to the same value as face authentication, and the current authentication is cancelled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0300");
    uint64_t reqId = 2100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Init();
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("CPPAPI_Function_CancelAuth_0300 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    int32_t cancelResult = FaceAuthInnerKit::CancelAuth(param.reqId, callbackCancel);
    if (cancelResult == 0) {
        while (!callbackCancel->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    APP_LOGI(
        "CPPAPI_Function_CancelAuth_0300 FaceAuthInnerKit::CancelAuth result=%{public}d", callbackCancel->errorcode_);
    std::this_thread::sleep_for(timeFast);
    int32_t result = callbackCancel->errorcode_;
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_CancelAuth_0300");
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0400
 * @tc.name:: If reqid is set to a value different from authentication, the current authentication will be cancelled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0400()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_CancelAuth_0400");
    uint64_t reqId = 2200;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Init();
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("CPPAPI_Function_CancelAuth_0400 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    int32_t diffReqId = 2;
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    int32_t cancelResult = FaceAuthInnerKit::CancelAuth(diffReqId, callbackCancel);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }

    APP_LOGI("CPPAPI_Function_CancelAuth_0400 FaceAuthInnerKit::CancelAuth result=%{public}d", cancelResult);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, cancelResult, "CPPAPI_Function_CancelAuth_0400");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0100
 * @tc.name:: Face authentication failed
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0100");
    FaceAuthInnerKit::Init();
    uint64_t reqId = 2300;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.resultCode = FI_COMPARE_FAIL;
    int32_t range = 10;
    for (int32_t i = 0; i < range; i++) {
        info.param[i] = 0;
    }
    resultInfos_[0] = info;
    WriteFile(1, 1, resultInfos_);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_0100 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_0100");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0200
 * @tc.name:: Face authentication timeout
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2400;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_0200 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_0200");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0300
 * @tc.name:: Failed to turn on the camera during face authentication
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0300");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2500;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_0300 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Authenticate_0300 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_0300");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0400
 * @tc.name:: Service busy during face authentication
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0400()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0400");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    OHOS::sptr<TestCallback> callback2(new TestCallback());
    uint64_t reqId = 2600;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    int32_t result2 = FaceAuthInnerKit::Authenticate(param, callback2);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback2->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_0400 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    APP_LOGI("CPPAPI_Function_Authenticate_0400 FaceAuthInnerKit::Authenticate result2=%{public}d", result2);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback2->errorcode_, "CPPAPI_Function_Authenticate_0400");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0500
 * @tc.name:: Face authentication is locked because it has failed more than 5 times
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0500()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0500");
    std::map<int32_t, ResultInfo> resultInfos_;
    uint64_t reqId = 2700;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t num = 5;
    for (int32_t i = 0; i < num; i++) {
        OHOS::sptr<TestCallback> callback(new TestCallback());
        ResultInfo info;
        info.resultCode = FI_COMPARE_FAIL;
        int32_t range = 10;
        for (int32_t j = 0; j < range; j++) {
            info.param[j] = 0;
        }
        resultInfos_[0] = info;

        WriteFile(1, 1, resultInfos_);
        FaceAuthInnerKit::Authenticate(param, callback);
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    OHOS::sptr<TestCallback> callbackAuth(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callbackAuth);
    while (!callbackAuth->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callbackAuth->errorcode_, "CPPAPI_Function_Authenticate_0500");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0600
 * @tc.name:: No authentication credentials are entered for face authentication
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0600()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0600");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2800;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_ENROLLED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_0600 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_0600");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0700
 * @tc.name:: Authentication can be performed normally after the lock is released
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0700()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0700");
    std::map<int32_t, ResultInfo> resultInfos_;
    uint64_t reqId = 2900;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t num = 5;
    for (int32_t i = 0; i < num; i++) {
        OHOS::sptr<TestCallback> callback(new TestCallback());
        ResultInfo info;
        info.resultCode = FI_COMPARE_FAIL;
        int32_t range = 10;
        for (int32_t j = 0; j < range; j++) {
            info.param[j] = 0;
        }
        resultInfos_[0] = info;

        WriteFile(1, 1, resultInfos_);
        FaceAuthInnerKit::Authenticate(param, callback);
        while (!callback->isCallback_) {
            std::this_thread::sleep_for(timeFast);
        }
    }
    int32_t result = FaceAuthInnerKit::GetRemainingTime();
    int32_t resultTimebool = 0;
    if (result < 0 || result > AUTH_FAIL_WAIT_TIME) {
        resultTimebool++;
    }
    FaceAuthInnerKit::ResetTimeout();
    OHOS::sptr<TestCallback> callbackAuth(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callbackAuth);
    while (!callbackAuth->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI(
        "CPPAPI_Function_Authenticate_0700 FaceAuthInnerKit::Authenticate result=%{public}d", callbackAuth->errorcode_);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callbackAuth->errorcode_, "CPPAPI_Function_Authenticate_0700");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0800
 * @tc.name:: Face authentication timeout is not included in the number of failures
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0800()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0800");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3000;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.resultCode = FI_COMPARE_FAIL;
    int32_t range = 9;
    int32_t temp = 6;
    info.param[0] = temp;
    for (int32_t i = 1; i < range; i++) {
        info.param[i] = 0;
    }
    resultInfos_[0] = info;
    WriteFile(1, 1, resultInfos_);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = FaceAuthInnerKit::GetRemainingNum();
    APP_LOGI("CPPAPI_Function_Authenticate_0800 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_0800");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0900
 * @tc.name:: Face authentication in case of abnormal face service
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0900()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_0900");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    APP_LOGI("CPPAPI_Function_Authenticate_0900 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_0900");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1900
 * @tc.name:: Face authentication when preview is valid
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1900()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1900");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3400;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    sptr<Surface> cameraBuffer = CreatePreviewOutput4UI();
    param.producer = cameraBuffer->GetProducer();
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1900 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_1900");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_2000
 * @tc.name:: Face authentication when preview = nullptr
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_2000()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_2000");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3500;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_2000 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_2000");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1000
 * @tc.name:: Face authentication when challenge = - 1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1000()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1000");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3600;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_INVALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1000 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_1000");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1100
 * @tc.name:: Face authentication when challenge = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1100()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1100");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3700;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_UNDEFINED, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1100 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_1100");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1200
 * @tc.name:: Face authentication when challenge is greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1200()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1200");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3800;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    bool isEmpty = false;
    if (callback->bundle_.authtoken.size() == 0) {
        isEmpty = true;
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1200 FaceAuthInnerKit::Authenticate result=%{public}d", isEmpty);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, isEmpty, "CPPAPI_Function_Authenticate_1200");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1300
 * @tc.name:: Face authentication when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1300()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1300");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3900;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_INVALID);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1300 FaceAuthInnerKit::Authenticate authResult=%{public}d", authResult);
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Authenticate_1300 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, callback->errorcode_, "CPPAPI_Function_Authenticate_1300");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1400
 * @tc.name:: Face authentication when faceId = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1400()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1400");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4000;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1400 FaceAuthInnerKit::Authenticate authResult=%{public}d", authResult);
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Authenticate_1400 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_1400");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1500
 * @tc.name:: Use the entered faceid for face authentication
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1500()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1500");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_VALID);
    WriteTempFile(FACE_ID_VALID);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1500 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Authenticate_1500 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_1500");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1600
 * @tc.name:: Face authentication is performed using a faceid that has not been entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1600()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1600");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4200;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_ENROLLED);
    int32_t authResult = FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    APP_LOGI("CPPAPI_Function_Authenticate_1600 FaceAuthInnerKit::Authenticate result=%{public}d", authResult);
    int32_t result = callback->errorcode_;
    APP_LOGI("CPPAPI_Function_Authenticate_1600 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_1600");
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1700
 * @tc.name:: Face authentication when callback = nullptr
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1700()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1700");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4300;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, nullptr);
    APP_LOGI("CPPAPI_Function_Authenticate_1700 FaceAuthInnerKit::Authenticate result=%{public}d", result);
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Authenticate_1700");
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0300
 * @tc.name:: After several authentication failures. Authentication succeeded. The maximum number of failures is cleared
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Scenario_0300()
{
    APP_LOGI("FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Authenticate_1800");
    AuthParam param;
    uint64_t reqIdNum = 4400;
    param.reqId = reqIdNum;
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.resultCode = FI_COMPARE_FAIL;
    int32_t range = 10;
    for (int32_t i = 0; i < range; i++) {
        info.param[i] = 0;
    }
    resultInfos_[0] = info;
    FaceAuthInnerKit::Init();
    int32_t numFour = 4;
    int32_t errorCount = 0;
    CPPAPI_Function_Scenario_0300_Auth(numFour, errorCount, resultInfos_, param);
    int32_t numThree = 3;
    CPPAPI_Function_Scenario_0300_Auth(numThree, errorCount, resultInfos_, param);
    OHOS::sptr<TestCallback> callbackAuth(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callbackAuth);
    while (!callbackAuth->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    int32_t result = 0;
    int32_t num = 5;
    if (errorCount != 0 || authResult != num) {
        result++;
    }
    FaceAuthInnerKit::Release();
    PublishEvent(APP_AUTH_RESP_EVENT_NAME, result, "CPPAPI_Function_Scenario_0300");
}

void FaceAuthTestServiceAbilityAuth::CPPAPI_Function_Scenario_0300_Auth(
    int32_t num, int32_t &errorCount, std::map<int32_t, ResultInfo> resultInfos_, AuthParam param)
{
    WriteFile(1, 1, resultInfos_);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    if (authResult != num) {
        errorCount++;
    }
    APP_LOGI("CPPAPI_Function_Scenario_0300 FaceAuthInnerKit::Authenticate errorCount=%{public}d", errorCount);
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