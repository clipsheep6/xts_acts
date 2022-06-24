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

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdx.nicest.default.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017522 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdx.nicest.default.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017523 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdx.nicest.default.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017524 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdx.nicest.default.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017525 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdx.nicest.default.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017526 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdx.nicest.default.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017527 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdx.nicest.default.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017528 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdy.nicest.default.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017700 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.default.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017701 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.default.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017702 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.nicest.default.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017703 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.default.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017704 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.nicest.default.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017705 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deri"
        "vate.dfdy.nicest.default.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017706 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.fwidth.nicest.default.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017899 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.default.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017900 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.default.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017901 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017902, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017902 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.fwidth.nicest.default.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017902 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017902 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017903, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017903 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.default.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017903 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017903 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017904, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017904 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.fwidth.nicest.default.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017904 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017904 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017905, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017905 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.default.vec4_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017905 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017905 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.fwidth.nicest.default.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017906 end";
}
