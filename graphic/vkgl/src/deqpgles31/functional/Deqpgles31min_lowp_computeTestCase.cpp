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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310003TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.precision.min.lowp_compute.scalar",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002580 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.precision.min.lowp_compute.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002581 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.precision.min.lowp_compute.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002582 end";
}

static HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_002583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.precision.min.lowp_compute.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310003TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310003TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310003TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310003TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310003TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_002583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_002583 end";
}
