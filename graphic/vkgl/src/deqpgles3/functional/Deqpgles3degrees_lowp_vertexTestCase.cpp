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
#include "../ActsDeqpgles30019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_func"
        "tions.precision.degrees.lowp_vertex.scalar",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018479 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.precision.degrees.lowp_vertex.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018480 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.precision.degrees.lowp_vertex.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018481 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.precision.degrees.lowp_vertex.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018482 end";
}
