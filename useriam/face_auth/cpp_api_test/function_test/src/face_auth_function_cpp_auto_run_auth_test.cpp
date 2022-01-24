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

#include "face_auth_function_cpp_auto_run_auth_test.h"
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include "system_test_ability_util.h"
using namespace OHOS;
using namespace std;
using namespace testing::ext;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
namespace {
const auto timeFast = std::chrono::milliseconds(500);
const int32_t FLAGS_LOCAL_AUTH = 0;
const int32_t CHALLENGE_UNDEFINED = 0;
const int32_t CHALLENGE_VALID = 1;
const int32_t CHALLENGE_INVALID = -1;
const int32_t FACE_ID_UNDEFINED = 0;
const int32_t FACE_ID_VALID = 1;
const int32_t FACE_ID_ENROLLED = 2;
const int32_t FACE_ID_INVALID = -1;
} // namespace

void FaceAuthFunctionCppAutoRunAuthTest::WriteFile(int32_t caseNum, int32_t codeNum,
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

void FaceAuthFunctionCppAutoRunAuthTest::WriteTempFile(int32_t id)
{
    std::ofstream mystream("/data/temp.dat", std::ios::trunc);
    if (!mystream.is_open()) {
        return;
    }
    mystream << std::to_string(id);
    mystream.close();
}

void FaceAuthFunctionCppAutoRunAuthTest::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code,
    int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    bundle_ = bundle;
    if (code_ == CODE_CALLBACK_RESULT || code_ == CODE_CALLBACK_CANCEL) {
        isCallback_ = true;
    }
}
void FaceAuthFunctionCppAutoRunAuthTest::TestCallback::OnDeathRecipient()
{}

AuthParam FaceAuthFunctionCppAutoRunAuthTest::CreateAuthParam(uint64_t _reqId, int32_t _flags, int64_t _challenge,
    int32_t _faceId, int32_t _previewId)
{
    AuthParam param;
    param.reqId = _reqId;
    param.flags = _flags;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.previewId = _previewId;
    return param;
}

/**
 * @tc.number: CPPAPI_Function_Release_0100
 * @tc.name:: Applications that have not executed init call release.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Release_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Release_0100 start";
    int32_t result = FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Release_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Release_0200
 * @tc.name:: The application repeatedly calls release.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Release_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Release_0200 start";
    int32_t result = FaceAuthInnerKit::Init();
    result = FaceAuthInnerKit::Release();
    result = FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Release_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0100
 * @tc.name:: Cancelauth is not called for authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_CancelAuth_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0100 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 900;
    int32_t authResult = FaceAuthInnerKit::CancelAuth(reqId, callback);
    FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, authResult);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0200
 * @tc.name:: Call cancelauth repeatedly.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_CancelAuth_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0200 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(0, errorCount);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0100
 * @tc.name:: Unfreeze face authentication after freezing.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_ResetTimeout_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_ResetTimeout_0100 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(AUTH_FAIL_MAX_TIMES, authResult);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_ResetTimeout_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0200
 * @tc.name:: It is not frozen or unfrozen, and the number of attempts to obtain is still 5.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_ResetTimeout_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_ResetTimeout_0200 start";
    FaceAuthInnerKit::ResetTimeout();
    int32_t authResult = FaceAuthInnerKit::GetRemainingNum();
    EXPECT_EQ(AUTH_FAIL_MAX_TIMES, authResult);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_ResetTimeout_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingNum_0100
 * @tc.name:: Gets the number of attempts until frozen.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_GetRemainingNum_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingNum_0100 start";
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
    int32_t result = errorCount;
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingNum_0100 end";
}

void FaceAuthFunctionCppAutoRunAuthTest::CPPAPI_Function_GetRemainingNum_0100_Authenticate(int32_t num,
    int32_t &errorCount, std::map<int32_t, ResultInfo> resultInfos_, AuthParam param)
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
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0100
 * @tc.name:: Obtain the remaining unlocking time until unlocking, the time range is 0-30s.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_GetRemainingTime_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingTime_0100 start";
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
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingTime_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0200
 * @tc.name:: Call the remaining unlocking time when it is not frozen, and return 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_GetRemainingTime_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingTime_0200 start";
    FaceAuthInnerKit::ResetTimeout();
    int32_t authResult = FaceAuthInnerKit::GetRemainingTime();
    EXPECT_EQ(0, authResult);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_GetRemainingTime_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0300
 * @tc.name:: Reqid is set to the same value as face authentication, and the current authentication is cancelled.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_CancelAuth_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0300 start";
    uint64_t reqId = 2100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
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
    std::this_thread::sleep_for(timeFast);
    int32_t result = callbackCancel->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0400
 * @tc.name:: If reqid is set to a value different from that of face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_CancelAuth_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0400 start";
    uint64_t reqId = 2200;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    int32_t diffReqId = 2;
    OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
    int32_t cancelResult = FaceAuthInnerKit::CancelAuth(diffReqId, callbackCancel);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, cancelResult);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_CancelAuth_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0100
 * @tc.name:: Face authentication failed.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0100 start";
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
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::ResetTimeout();
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_COMPARE_FAIL, callback->errorcode_);

    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0200
 * @tc.name:: Face authentication timeout
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0200 start";
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.param[0] = 6;
    int32_t range = 10;
    for (int32_t i = 1; i < range; i++) {
        info.param[i] = 0;
    }
    info.resultCode = 18;
    resultInfos_[0] = info;
    WriteFile(1, 1, resultInfos_);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2400;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_TIMEOUT, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0400
 * @tc.name:: Service busy during face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0400 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    OHOS::sptr<TestCallback> callback2(new TestCallback());
    uint64_t reqId = 2600;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    FaceAuthInnerKit::Authenticate(param, callback2);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!callback2->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_BUSY, callback2->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0500
 * @tc.name:: Face authentication is locked because it has failed more than 5 times.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0500 start";
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
    EXPECT_EQ(ERRCODE_IN_LOCKOUT_MODE, callbackAuth->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0500 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0600
 * @tc.name:: No authentication credentials are entered for face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0600 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2800;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_ENROLLED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_NO_FACE_DATA, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0700
 * @tc.name:: Authentication can be performed normally after the lock is released.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0700 start";
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
    FaceAuthInnerKit::GetRemainingTime();
    FaceAuthInnerKit::ResetTimeout();
    OHOS::sptr<TestCallback> callbackAuth(new TestCallback());
    FaceAuthInnerKit::Authenticate(param, callbackAuth);
    while (!callbackAuth->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, callbackAuth->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0800
 * @tc.name:: Face authentication timeout is not included in the number of failures.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0800 start";
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
    FaceAuthInnerKit::Release();
    int32_t retryCount = 5;
    EXPECT_EQ(retryCount, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0800 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_2000
 * @tc.name:: Face authentication when preview = nullptr.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_2000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_2000 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3500;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_2000 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1000
 * @tc.name:: Face authentication when challenge = - 1.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1000 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3600;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_INVALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_INVALID_PARAMETERS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1000 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1100
 * @tc.name:: Face authentication when challenge = 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1100 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3700;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_UNDEFINED, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, callback->errorcode_);

    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1100 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1200
 * @tc.name:: Face authentication when Greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1200 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(0, isEmpty);

    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1200 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1300
 * @tc.name:: Face authentication is performed when faceid = - 1.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1300 start";
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3900;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_INVALID);
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_INVALID_PARAMETERS, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1300 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1400
 * @tc.name:: Face authentication when faceid = 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1400 start";
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4000;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1500
 * @tc.name:: Use the entered faceid for face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1500 start";
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_VALID);
    WriteTempFile(FACE_ID_VALID);
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1500 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1600
 * @tc.name:: Face authentication is performed using a faceid that has not been entered.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1600 start";
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4200;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_ENROLLED);
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_NO_FACE_DATA, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1600 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1700
 * @tc.name:: Face authentication when callback = nullptr.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_1700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1700 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 4300;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Authenticate(param, nullptr);
    FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_1700 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0300
 * @tc.name:: Failed to turn on the camera during face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0300 start";
    int32_t kill_times = 5;
    const auto temp_time = std::chrono::milliseconds(1000);
    while (kill_times) {
        FILE *ptr;
        ptr = popen("kill -9 $(pidof camera_service)", "r");
        pclose(ptr);
        kill_times--;
        std::this_thread::sleep_for(temp_time);
    }

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 2500;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Authenticate(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    int32_t result = callback->errorcode_;
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_CAMERA_FAIL, result);

    FILE *ptr;
    ptr = popen("/system/bin/sa_main /system/profile/camera_service.xml &", "r");
    pclose(ptr);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0900
 * @tc.name:: Face authentication in case of abnormal face service.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunAuthTest, CPPAPI_Function_Authenticate_0900, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0900 start";
    std::string commandStr = "kill -9 $(pidof grep face_service)";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 3100;
    AuthParam param = CreateAuthParam(reqId, FLAGS_LOCAL_AUTH, CHALLENGE_VALID, FACE_ID_UNDEFINED);
    STABUtil::SystemTestAbilityUtil::ExeShellCommand(commandStr);
    int32_t result = FaceAuthInnerKit::Authenticate(param, callback);
    EXPECT_EQ(-1, result);

    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunAuthTest CPPAPI_Function_Authenticate_0900 end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
