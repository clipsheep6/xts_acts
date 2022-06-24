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
#include "../ActsDeqpgles30011TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010400 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010401 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010402 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010403 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010404 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010405 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010406 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010407 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010408 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010409 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010410 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010411 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010412 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010413 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010414 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010415 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_int_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010416 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_int_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010417 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010418 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_ivec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010419 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec3_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010420 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_ivec3_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010421 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec4_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010422 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_ivec4_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010423 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010424 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010425 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010426 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010427 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010428 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010429 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010430 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010431 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010432 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010433 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010434 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010435 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010436 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010437 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010438 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010439 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010440 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010441 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010442 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010443 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010444 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010445 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010446 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010447 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010448 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010449 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010450 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010451 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010452 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010453 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010454 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010455 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010456 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010457 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010458 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010459 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010460 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010461 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010462 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010463 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010464 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010465 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010466 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010467 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010468 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010469 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010470 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010471 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010472 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010473 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010474 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010475 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010476 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010477 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec2_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010478 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec2_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010479 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec3_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010480 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec3_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010481 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec4_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010482 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec4_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010483 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_o"
        "perator.left_shift_assign_effect.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010484 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010485 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010486 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010487 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010488 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010489 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010490 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010491 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010492 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010493 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010494 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010495 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010496 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010497 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010498 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010499 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_op"
        "erator.left_shift_assign_effect.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010500 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010501 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010502 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010503 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010504 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010505 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_ope"
        "rator.left_shift_assign_effect.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010506 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010507 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010508 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010509 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.mediump_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010510 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010511 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010512 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010513 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010514 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010515 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010516 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010517 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010518 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010519 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010520 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.lowp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010521 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010522 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operator"
        ".left_shift_assign_effect.mediump_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010523 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.highp_uint_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010524 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uint_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010525 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010526 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_uvec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010527 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010528 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_uvec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010529 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010530 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.highp_uvec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010531 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010532 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010533 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010534 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010535 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010536 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010537 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010538 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010539 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010540 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010541 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010542 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010543 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010544 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010545 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010546 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010547 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_ivec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010548 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_ivec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010549 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010550 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010551 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010552 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010553 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010554 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010555 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010556 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010557 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_oper"
        "ator.left_shift_assign_effect.lowp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010558 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.lowp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010559 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.mediump_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010560 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operato"
        "r.left_shift_assign_effect.mediump_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010561 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec2_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010562 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec2_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010563 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec3_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010564 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec3_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010565 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_opera"
        "tor.left_shift_assign_effect.highp_uvec4_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010566 end";
}

static HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.binary_operat"
        "or.left_shift_assign_effect.highp_uvec4_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30011TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30011TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30011TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30011TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30011TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010567 end";
}
