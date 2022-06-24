/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30041TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.position.points_separate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040536 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.position.points_interleaved",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040537 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_"
        "feedback.position.lines_separate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040538 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_f"
        "eedback.position.lines_interleaved",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040539 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.position.triangles_separate",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040540 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fee"
        "dback.position.triangles_interleaved",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040541 end";
}
