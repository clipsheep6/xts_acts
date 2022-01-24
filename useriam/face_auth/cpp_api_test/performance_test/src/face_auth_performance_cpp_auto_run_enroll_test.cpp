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

#include "face_auth_performance_cpp_auto_run_enroll_test.h"
#include "face_auth_innerkit.h"

using namespace OHOS;
using namespace std;
using namespace testing::ext;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
const int32_t PERFORMANCE_TEST_TIMES = 1000;
const auto timeFast = std::chrono::milliseconds(500);

/**
 * @tc.number: CPPAPI_Performance_Enroll_0100
 * @tc.name:: Performance of Enroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_Enroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_Enroll_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    uint64_t reqIdNum = 100;
    param.reqId = reqIdNum;
    param.challenge = -1;
    param.faceId = -1;
    std::vector<uint8_t> token;
    token.push_back('9');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        param.token.push_back(*iter);
    }
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
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Enroll_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Enroll_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_Enroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_CancelEnroll_0100
 * @tc.name:: Performance of CancelEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_CancelEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_CancelEnroll_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    EnrollParam param;
    uint64_t reqIdNum = 1500;
    param.reqId = reqIdNum;
    param.challenge = 1;
    param.faceId = 0;
    std::vector<uint8_t> token;
    token.push_back('9');
    for (std::vector<uint8_t>::const_iterator iter = token.begin(); iter != token.end(); ++iter) {
        param.token.push_back(*iter);
    }
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        OHOS::sptr<TestCallback> callbackCancel(new TestCallback());
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::CancelEnrollment(param.reqId, callbackCancel);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "FaceAuth_CPPAPI_1500  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_CancelEnroll_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_CancelEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_PreEnroll_0100
 * @tc.name:: Performance of PreEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_PreEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_PreEnroll_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::PreEnroll();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_PreEnroll_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_PreEnroll_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_PreEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_PostEnroll_0100
 * @tc.name:: Performance of PostEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_PostEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_PostEnroll_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::PostEnroll();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_PostEnroll_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_PostEnroll_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_PostEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetAngleDim_0100
 * @tc.name:: Performance of GetAngleDim interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_GetAngleDim_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_GetAngleDim_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetAngleDim();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        averageTime = totalTime / (run_times + 1);
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetAngleDim_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetAngleDim_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_GetAngleDim_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetEnrolledFaceIDs_0100
 * @tc.name:: Performance of GetEnrolledFaceIDs interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_GetEnrolledFaceIDs_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_GetEnrolledFaceIDs_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetEnrolledFaceIDs(0);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetEnrolledFaceIDs_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetEnrolledFaceIDs_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_GetEnrolledFaceIDs_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_Remove_0100
 * @tc.name:: Performance of Remove interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunEnrollTest, CPPAPI_Performance_Remove_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_Remove_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    RemoveParam param;
    uint64_t reqIdNum = 100;
    param.reqId = reqIdNum;
    param.faceId = -1;
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
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Remove_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Remove_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunEnrollTest CPPAPI_Performance_Remove_0100 end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS