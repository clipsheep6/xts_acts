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

#include "face_auth_function_cpp_auto_run_enroll_test.h"
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
static const int32_t TEST_ENROLL_SUCCESS = 998;
const int32_t CHALLENGE_VALID = 1;
const int32_t CHALLENGE_INVALID = -1;
const int32_t FACE_ID_UNDEFINED = 0;
const int32_t FACE_ID_INVALID = -1;
const int32_t FACE_ID_ASSIGN = 10;
const int32_t PREVIEW_ID_VALID = 1;
const int32_t PREVIEW_ID_INVALID = 0;
} // namespace

void FaceAuthFunctionCppAutoRunEnrollTest::WriteFile(int32_t caseNum, int32_t codeNum,
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

void FaceAuthFunctionCppAutoRunEnrollTest::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code,
    int32_t errorCode, Bundle &bundle)
{
    reqid_ = reqId;
    type_ = type;
    code_ = code;
    errorcode_ = errorCode;
    if (code_ == CODE_CALLBACK_RESULT || code_ == CODE_CALLBACK_CANCEL) {
        isCallback_ = true;
    }
}
void FaceAuthFunctionCppAutoRunEnrollTest::TestCallback::OnDeathRecipient()
{}

void FaceAuthFunctionCppAutoRunEnrollTest::EnrollFile()
{
    std::map<int32_t, ResultInfo> resultInfos_;
    WriteFile(TEST_ENROLL_SUCCESS, 0, resultInfos_);
}

EnrollParam FaceAuthFunctionCppAutoRunEnrollTest::CreateEnrollParam(uint64_t _reqId, int64_t _challenge,
    int32_t _faceId, int32_t _previewId, std::vector<uint8_t> _token)
{
    EnrollParam param;
    param.reqId = _reqId;
    param.challenge = _challenge;
    param.faceId = _faceId;
    param.previewId = _previewId;
    for (std::vector<uint8_t>::const_iterator iter = _token.begin(); iter != _token.end(); ++iter) {
        param.token.push_back(*iter);
    }
    return param;
}

AuthParam FaceAuthFunctionCppAutoRunEnrollTest::CreateAuthParam(uint64_t _reqId, int32_t _flags, int64_t _challenge,
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
 * @tc.number: CPPAPI_Function_Enroll_0100
 * @tc.name:: Cancel the current entry with the same reqid as the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0100 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 200;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_CANCEL, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0200
 * @tc.name:: Cancel the current entry by using a reqid different from the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0200 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 300;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0300
 * @tc.name:: Face enroll when token size =0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0300 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 600;
    std::vector<uint8_t> token;
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_INVALID_PARAMETERS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0400
 * @tc.name:: Face enroll when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0400 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 900;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_INVALID, PREVIEW_ID_VALID, token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_INVALID_PARAMETERS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0500
 * @tc.name:: Face enroll when faceId = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0500 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1000;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0500 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0600
 * @tc.name:: Face enroll when entered faceid
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0600 start";
    uint64_t reqIdNum = 1100;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    FaceAuthInnerKit::Enroll(param, enrollCallback);
    while (!enrollCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, enrollCallback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0700
 * @tc.name:: Face enroll when faceid not entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0700 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1200;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_ASSIGN, PREVIEW_ID_VALID, token);
    FaceAuthInnerKit::Init();
    EnrollFile();
    FaceAuthInnerKit::Enroll(param, callback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_NO_FACE_DATA, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0800
 * @tc.name:: Face enroll when callback is nullptr
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0800 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1300;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    FaceAuthInnerKit::Init();
    int32_t result = FaceAuthInnerKit::Enroll(param, nullptr);
    FaceAuthInnerKit::Release();
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0800 end";
}

/**
 * @tc.number: CPPAPI_Function_PreEnroll_0100
 * @tc.name:: Generate a challenge using preenroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_PreEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_PreEnroll_0100 start";
    int64_t challeng = FaceAuthInnerKit::PreEnroll();
    int32_t result = -1;
    if (challeng > 0) {
        result = 0;
    }
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_PreEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_PostEnroll_0100
 * @tc.name:: End the face enroll and remove the challenge generated at the bottom
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_PostEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_PostEnroll_0100 start";
    int32_t result = FaceAuthInnerKit::PostEnroll();
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_PostEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetAngleDim_0100
 * @tc.name:: Get the number of face angles to be entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_GetAngleDim_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetAngleDim_0100 start";
    int32_t result = FaceAuthInnerKit::GetAngleDim();
    int32_t count = 3;
    EXPECT_EQ(count, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetAngleDim_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0100
 * @tc.name:: GetEnrolledFaceIDs is called when userid = - 1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0100 start";
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(-1);
    int32_t count = result.size();
    EXPECT_EQ(0, count);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0200
 * @tc.name:: GetEnrolledFaceIDs is called when userid = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0200 start";
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
    EnrollParam paramEnroll =
        CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    EnrollFile();
    OHOS::sptr<TestCallback> callbackEnroll(new TestCallback());
    FaceAuthInnerKit::Enroll(paramEnroll, callbackEnroll);
    while (!callbackEnroll->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(0);
    FaceAuthInnerKit::Release();
    int32_t count = result.size();
    EXPECT_EQ(1, count);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0300
 * @tc.name:: GetEnrolledFaceIDs is called when userid is greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0300 start";
    std::list<int32_t> result = FaceAuthInnerKit::GetEnrolledFaceIDs(1);
    int32_t count = result.size();
    EXPECT_EQ(0, count);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0100
 * @tc.name:: GetEnrolledFaceIDs is called when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Remove_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0100 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_FAIL, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0200
 * @tc.name:: Call remove to clear all face templates
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Remove_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0200 start";
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
    int32_t count = num.size();
    FaceAuthInnerKit::Release();
    EXPECT_EQ(0, count);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0300
 * @tc.name:: Call remove to delete the face template with the specified ID
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Remove_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0300 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_SUCCESS, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_1000
 * @tc.name:: Service busy during face enroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_1000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_1000 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    OHOS::sptr<TestCallback> enrollCallback(new TestCallback());
    uint64_t reqIdNum = 4000;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
    EnrollFile();
    FaceAuthInnerKit::Init();
    FaceAuthInnerKit::Enroll(param, callback);
    FaceAuthInnerKit::Enroll(param, enrollCallback);
    while (!callback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    while (!enrollCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_BUSY, enrollCallback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_1000 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0600
 * @tc.name:: Service busy during face deletion
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Remove_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0600 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 4100;
    uint64_t reqIdRemoveNum = 4101;
    uint64_t reqIdRemoveNum1 = 4102;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_INVALID, FACE_ID_UNDEFINED, PREVIEW_ID_VALID, token);
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_BUSY, removeCallback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0700
 * @tc.name:: Face deletion failed
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Remove_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0700 start";
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
    FaceAuthInnerKit::Release();
    EXPECT_EQ(ERRCODE_FAIL, callback->errorcode_);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Remove_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0900
 * @tc.name:: Face entry in case of abnormal face service
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunEnrollTest, CPPAPI_Function_Enroll_0900, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0900 start";
    std::string commandStr = "kill -9 $(pidof face_service)";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqIdNum = 1400;
    std::vector<uint8_t> token;
    token.push_back('9');
    EnrollParam param = CreateEnrollParam(reqIdNum, CHALLENGE_VALID, FACE_ID_UNDEFINED, PREVIEW_ID_INVALID, token);
    EnrollFile();
    STABUtil::SystemTestAbilityUtil::ExeShellCommand(commandStr);
    int32_t result = FaceAuthInnerKit::Enroll(param, callback);
    EXPECT_EQ(-1, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunEnrollTest CPPAPI_Function_Enroll_0900 end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS