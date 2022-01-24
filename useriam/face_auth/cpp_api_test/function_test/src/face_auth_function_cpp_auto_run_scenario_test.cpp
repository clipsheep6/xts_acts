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

#include "face_auth_function_cpp_auto_run_scenario_test.h"
using namespace OHOS;
using namespace std;
using namespace testing::ext;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
namespace {
const auto timeFast = std::chrono::milliseconds(500);
} // namespace

void FaceAuthFunctionCppAutoRunScenarioTest::TestCallback::OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code,
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
void FaceAuthFunctionCppAutoRunScenarioTest::TestCallback::OnDeathRecipient()
{}

void FaceAuthFunctionCppAutoRunScenarioTest::WriteFile(int32_t caseNum, int32_t codeNum,
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

/**
 * @tc.number: CPPAPI_Function_Scenario_0100
 * @tc.name:: Requests are sorted by priority
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunScenarioTest, CPPAPI_Function_Scenario_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0100 start";
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
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0100 end";
}

int32_t FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0100_Check(
    OHOS::sptr<TestCallback> remoteCallback, OHOS::sptr<TestCallback> localCallback,
    OHOS::sptr<TestCallback> enrollCallback, OHOS::sptr<TestCallback> removeCallback)
{
    int32_t result = 0;
    while (!remoteCallback->isCallback_ && !removeCallback->isCallback_ && !enrollCallback->isCallback_ &&
        !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (removeCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_ && !enrollCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (enrollCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (localCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remoteCallback->isCallback_ != true) {
        result++;
    }
    return result;
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0200
 * @tc.name:: In the same priority request order
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunScenarioTest, CPPAPI_Function_Scenario_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0200 start";
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
    }
    while (!remotecallback2->isCallback_ && !remotecallback3->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remotecallback2->isCallback_ != true) {
        result++;
    }
    while (!remotecallback3->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remotecallback3->isCallback_ != true) {
        result++;
    }
    FaceAuthInnerKit::Release();
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0300
 * @tc.name:: The number of authentication failures after successful authentication is cleared.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunScenarioTest, CPPAPI_Function_Scenario_0300, TestSize.Level1)
{
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
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0300 end";
}

void FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0300_Auth(int32_t num, int32_t &errorCount,
    std::map<int32_t, ResultInfo> resultInfos_, AuthParam param)
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
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0400
 * @tc.name:: Cancel authentication and enroll requests in the queue
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAutoRunScenarioTest, CPPAPI_Function_Scenario_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0400 start";
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
    EXPECT_EQ(0, result);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAutoRunScenarioTest CPPAPI_Function_Scenario_0400 end";
}

AuthParam FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_CoAuth()
{
    AuthParam param;
    uint64_t reqIdNum = 4300;
    param.reqId = reqIdNum;
    param.flags = 1;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

AuthParam FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_CoAnotherAuth()
{
    AuthParam param;
    uint64_t reqIdNum = 4303;
    param.reqId = reqIdNum;
    param.flags = 1;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

AuthParam FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_LocalAuth()
{
    AuthParam param;
    uint64_t reqIdCoNum = 4302;
    param.reqId = reqIdCoNum;
    param.flags = 0;
    param.challenge = 1;
    param.faceId = 0;
    return param;
}

EnrollParam FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_Enroll()
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
    return enrollParam;
}

RemoveParam FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_Remove()
{
    RemoveParam removeParam;
    uint64_t reqIdRemoveNum = 4304;
    removeParam.faceId = 0;
    removeParam.reqId = reqIdRemoveNum;
    return removeParam;
}

int32_t FaceAuthFunctionCppAutoRunScenarioTest::CPPAPI_Function_Scenario_0400_Check(
    OHOS::sptr<TestCallback> remoteCallback, OHOS::sptr<TestCallback> localCallback,
    OHOS::sptr<TestCallback> enrollCallback, OHOS::sptr<TestCallback> removeCallback)
{
    int32_t result = 0;
    while (!remoteCallback->isCallback_ && !removeCallback->isCallback_ && !enrollCallback->isCallback_ &&
        !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (removeCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_ && !enrollCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (enrollCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_ && !localCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (localCallback->isCallback_ != true) {
        result++;
    }
    while (!remoteCallback->isCallback_) {
        std::this_thread::sleep_for(timeFast);
    }
    if (remoteCallback->isCallback_ != true) {
        result++;
    }
    return result;
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS