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
#include "../ActsDeqpgles30018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdy.uniform_switch.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017639 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.uniform_switch.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017640 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.uniform_switch.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017641 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.uniform_switch.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017642 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.uniform_switch.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017643 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.uniform_switch.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017644 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.uniform_switch.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017645 end";
}
