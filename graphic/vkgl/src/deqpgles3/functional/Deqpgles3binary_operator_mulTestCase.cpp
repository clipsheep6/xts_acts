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
#include "../ActsDeqpgles30009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008384 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008385 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008386 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008387 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008388 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008389 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008390 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008391 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008392 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008393 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008394 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008395 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008396 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008397 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008398 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008399 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008400 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008401 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008402 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008403 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008404 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008405 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008406 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008407 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008408 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008409 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008410 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008411 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008412 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008413 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008414 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008415 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008416 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008417 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008418 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008419 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008420 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008421 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008422 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008423 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008424 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008425 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008426 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008427 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008428 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008429 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008430 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008431 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operato"
        "r.binary_operator.mul.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008432 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008433 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008434 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008435 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008436 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008437 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008438 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008439 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008440 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008441 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008442 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008443 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008444 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008445 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008446 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008447 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008448 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008449 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008450 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008451 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008452 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008453 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator"
        ".binary_operator.mul.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008454 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator."
        "binary_operator.mul.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008455 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008456 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008457 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008458 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008459 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008460 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008461 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008462 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008463 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008464 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008465 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008466 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008467 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008468 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008469 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008470 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008471 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008472 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008473 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008474 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008475 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008476 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008477 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008478 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008479 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008480 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008481 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008482 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008483 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008484 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008485 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008486 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008487 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008488 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008489 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008490 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008491 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008492 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008493 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008494 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008495 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008496 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008497 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008498 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008499 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008500 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008501 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008502 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008503 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008504 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008505 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008506 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008507 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008508 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008509 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008510 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008511 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008512 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008513 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008514 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008515 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008516 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008517 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008518 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008519 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008520 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008521 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008522 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008523 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008524 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008525 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008526 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008527 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008528 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008529 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008530 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008531 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008532 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008533 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008534 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008535 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008536 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008537 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.mediump_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008538 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008539 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008540 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008541 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008542 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008543 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.highp_int_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008544 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_int_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008545 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008546 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008547 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008548 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008549 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008550 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008551 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008552 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008553 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.b"
        "inary_operator.mul.lowp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008554 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.lowp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008555 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.mediump_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008556 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bina"
        "ry_operator.mul.mediump_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008557 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uint_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008558 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uint_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008559 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uint_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008560 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uint_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008561 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bi"
        "nary_operator.mul.highp_uint_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008562 end";
}

static HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.bin"
        "ary_operator.mul.highp_uint_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008563 end";
}
