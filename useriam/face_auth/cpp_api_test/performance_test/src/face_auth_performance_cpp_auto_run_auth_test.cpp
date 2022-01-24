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

#include "face_auth_performance_cpp_auto_run_auth_test.h"
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
 * @tc.number: CPPAPI_Performance_Init_0100
 * @tc.name:: Performance of init interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_Init_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Init_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::Init();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Init_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Init_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Init_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_Release_0100
 * @tc.name:: Performance of release interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_Release_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Release_0100 start";
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
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Release_0100  avg =" << averageTime.count();
    ;
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Release_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Release_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_ResetTimeout_0100
 * @tc.name:: Performance of resetTimeout interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_ResetTimeout_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_ResetTimeout_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::ResetTimeout();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_ResetTimeout_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_ResetTimeout_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_ResetTimeout_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetRemainingNum_0100
 * @tc.name:: Performance of getRemainingNum interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_GetRemainingNum_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_GetRemainingNum_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetRemainingNum();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetRemainingNum_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetRemainingNum_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_GetRemainingNum_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetRemainingTime_0100
 * @tc.name:: Performance of getRemainingTime interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_GetRemainingTime_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_GetRemainingTime_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::GetRemainingTime();
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }
    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetRemainingTime_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_GetRemainingTime_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_GetRemainingTime_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_Authenticate_0100
 * @tc.name:: Performance of authenticate interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_Authenticate_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Authenticate_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    AuthParam param;
    param.reqId = 0;
    param.flags = -1;
    param.challenge = -1;
    param.faceId = 0;
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
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Authenticate_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_Authenticate_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_Authenticate_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_CancelAuth_0100
 * @tc.name:: Performance of cancelAuth interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppAutoRunAuthTest, CPPAPI_Performance_CancelAuth_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_CancelAuth_0100 start";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    OHOS::sptr<TestCallback> callback(new TestCallback());
    uint64_t reqId = 0;
    for (int32_t run_times = 0; run_times < PERFORMANCE_TEST_TIMES; run_times++) {
        reqId++;
        callback->isCallback_ = false;
        auto startTime = std::chrono::high_resolution_clock::now();
        FaceAuthInnerKit::CancelAuth(reqId, callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
    }
    averageTime = totalTime / PERFORMANCE_TEST_TIMES;
    GTEST_LOG_(INFO) << "CPPAPI_Performance_CancelAuth_0100  avg =" << averageTime.count();
    int32_t result = -1;
    if (averageTime.count() <= MAX_ELAPSED) {
        result = 0;
    }
    EXPECT_EQ(result, 0);
    GTEST_LOG_(INFO) << "CPPAPI_Performance_CancelAuth_0100  result =" << result;
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppAutoRunAuthTest CPPAPI_Performance_CancelAuth_0100 end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS