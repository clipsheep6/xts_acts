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
#include "face_auth_stability_cpp_test.h"
#include <future>
#include <fstream>
#include <iostream>
#include <thread>

using namespace testing::ext;
using namespace OHOS;
using std::string;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
const auto timeFast = std::chrono::milliseconds(500);
static uint64_t g_reqid = 1;
const int32_t STABILITY_TEST_TIME = 6 * 60 * 60;

void FaceAuthStabilityCppTest::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code,
    int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    if (code_ == CODE_CALLBACK_RESULT) {
        isCallback_ = true;
    }
    FACEAUTH_LABEL_LOGI("reqid_ is %{public}llu", reqid_);
    FACEAUTH_LABEL_LOGI("type_ is %{public}d", type_);
    FACEAUTH_LABEL_LOGI("code_ is %{public}d", code_);
    FACEAUTH_LABEL_LOGI("errorcode_ is %{public}d", errorcode_);
}

void FaceAuthStabilityCppTest::TestCallback::OnDeathRecipient()
{}

bool FaceAuthStabilityCppTest::Execute()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Execute");
    std::string type = "FACE_ONLY";
    std::string level = "S2";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    param.reqId = g_reqid++;
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Execute reqId:%{public}llu", param.reqId);
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    UseriamAuthKit::Execute(param, type, level, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Execute Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Execute  callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Init false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::Cancel()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Cancel");
    std::string type = "FACE_ONLY";
    std::string level = "S2";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    param.reqId = g_reqid++;
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Cancel reqId:%{public}llu", param.reqId);
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    UseriamAuthKit::Execute(param, type, level, callback);
    OHOS::sptr<TestCallback> canclecallback(new TestCallback());
    UseriamAuthKit::Cancel(param.reqId, canclecallback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Cancel Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Cancel Execute's callback->errorcode_ = %{public}d, ",
        callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Cancel false");
        return false;
    }
}
bool FaceAuthStabilityCppTest::Init()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Init");
    int32_t result = FaceAuthInnerKit::Init();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Init  result = %{public}d, ", result);
    return true;
}

bool FaceAuthStabilityCppTest::Release()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Release");
    int32_t result = FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Release  result = %{public}d, ", result);
    return true;
}

bool FaceAuthStabilityCppTest::ResetTimeout()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::ResetTimeout");
    FaceAuthInnerKit::ResetTimeout();
    return true;
}

bool FaceAuthStabilityCppTest::GetRemainingTime()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetRemainingTime");
    int64_t resultTime = FaceAuthInnerKit::GetRemainingTime();
    int32_t num = 30;
    FACEAUTH_LABEL_LOGI("FaceAuthInnerKit::GetRemainingTime resultTime=%{public}llu", resultTime);
    if (resultTime >= 0 && resultTime < num) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetRemainingTime false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::GetRemainingNum()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetRemainingNum");
    int32_t result = FaceAuthInnerKit::GetRemainingNum();
    FACEAUTH_LABEL_LOGI("FaceAuthInnerKit::GetRemainingNum result=%{public}d", result);
    int32_t num = 5;
    if (result >= 0 && result <= num) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetRemainingNum false");
        return false;
    }
}

// stability start
bool FaceAuthStabilityCppTest::Enroll()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Enroll");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    param.reqId = g_reqid++;
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Enroll reqId:%{public}llu", param.reqId);
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
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Enroll Waiting Callback!!");
    }
    FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Enroll  callback->errorcode_ = %{public}d, ", callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Enroll false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::CancelEnrollment()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::CancelEnrollment");
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    param.reqId = g_reqid++;
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::CancelEnrollment reqId:%{public}llu", param.reqId);
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
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::CancelEnrollment Waiting Callback!!");
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::CancelEnrollment  callback->errorcode_ = %{public}d, ",
        callback->errorcode_);

    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_IN_LOCKOUT_MODE ||
        callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT || callback->errorcode_ == ERRCODE_NO_FACE_DATA ||
        callback->errorcode_ == ERRCODE_CAMERA_FAIL || callback->errorcode_ == ERRCODE_TIMEOUT) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::CancelEnrollment false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::PreEnroll()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PreEnroll");
    int64_t result = FaceAuthInnerKit::PreEnroll();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PreEnroll  result = %{public}lld, ", result);
    if (result >= 0) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PreEnroll false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::PostEnroll()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PostEnroll");
    int32_t result = FaceAuthInnerKit::PostEnroll();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PostEnroll  result = %{public}d, ", result);
    if (result == 0) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::PostEnroll false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::Remove()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Remove");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    param.reqId = g_reqid++;
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Remove reqId:%{public}llu", param.reqId);
    int32_t stabilityfaceId = 99;
    param.faceId = stabilityfaceId;
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Remove(param, callback);
    while (!callback->isCallback_) {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Remove Waiting Callback!!");
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Remove  callback->errorcode_ = %{public}d, ", callback->errorcode_);
    if (callback->errorcode_ == ERRCODE_SUCCESS || callback->errorcode_ == ERRCODE_CANCEL ||
        callback->errorcode_ == ERRCODE_BUSY || callback->errorcode_ == ERRCODE_ALGORITHM_NOT_INIT ||
        callback->errorcode_ == ERRCODE_FAIL) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::Remove false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::GetEnrolledFaceIDs()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetEnrolledFaceIDs");
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(0);
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetEnrolledFaceIDs  result = %{public}d, ", result.size());
    if (result.size() >= 0) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetEnrolledFaceIDs false");
        return false;
    }
}

bool FaceAuthStabilityCppTest::GetAngleDim()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetAngleDim");
    int32_t result = FaceAuthInnerKit::GetAngleDim();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetAngleDim  result = %{public}d, ", result);
    int32_t num = 3;
    if (result == num) {
        return true;
    } else {
        FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::GetAngleDim false");
        return false;
    }
}

void FaceAuthStabilityCppTest::GetTestFunction(std::vector<FnPtr> &vector)
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

bool FaceAuthStabilityCppTest::ExeAPI()
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

bool FaceAuthStabilityCppTest::RandomExeAPI()
{
    std::vector<FnPtr> vec;
    GetTestFunction(vec);
    struct timespec t;
    t.tv_sec = 0;
    t.tv_nsec = 0;
    clock_gettime(CLOCK_REALTIME, &t);
    int64_t elapsedTime { ((t.tv_sec) * SEC_TO_NANOSEC + t.tv_nsec) };
    size_t elapsedHash = std::hash<std::string>()(std::to_string(elapsedTime));
    int rand = static_cast<int>(elapsedHash);
    int tar = rand % vec.size();
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::RandomExeAPI  tar = %{public}d, ", tar);
    bool result = vec[tar]();
    return result;
}

// stability start
bool FaceAuthStabilityCppTest::TestFountion()
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
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::TestFountion  result = %{public}d, ", result);
    return result;
}

bool FaceAuthStabilityCppTest::TestRandomFountion()
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
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::TestRandomFountion  result = %{public}d, ", result);
    return result;
}

void FaceAuthStabilityCppTest::StabilityFountion()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::StabilityFountion  start");
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
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::StabilityFountion  end");
}

void FaceAuthStabilityCppTest::StabilityRandomFountion()
{
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::StabilityRandomFountion  start");
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
    FACEAUTH_LABEL_LOGI("FaceAuthStabilityCppTest::StabilityRandomFountion  end");
}

/**
 * @tc.name      FaceAuth Interface sequential pressure measurement
 * @tc.number    CPPAPI_Stability_0100
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(FaceAuthStabilityCppTest, CPPAPI_Stability_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0100 start";

    int32_t result = 1;
    auto starTime = std::chrono::system_clock::now();
    StabilityFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STABILITY_TEST_TIME) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Stability_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0100 end";
}

/**
 * @tc.name      FaceAuth Interface out of sequence voltage measurement
 * @tc.number    CPPAPI_Stability_0200
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(FaceAuthStabilityCppTest, CPPAPI_Stability_0200, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0200 start";
    int32_t result = 1;
    auto starTime = std::chrono::system_clock::now();
    StabilityRandomFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    if (realTestTime >= STABILITY_TEST_TIME) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Stability_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0200 end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
