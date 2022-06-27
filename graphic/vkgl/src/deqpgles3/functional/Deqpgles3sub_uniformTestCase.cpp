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
#include "../ActsDeqpgles30015TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014196 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014197 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014198 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014199 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014200 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014201 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014202 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014203 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014204 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014205 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014206 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014207 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014208 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014209 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014210 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014211 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014212 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014213 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014214 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014215 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014216 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014217 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014218 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014219 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014220 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014221 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014222 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014223 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014224 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014225 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014226 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014227 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014228 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014229 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014230 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014231 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014232 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014233 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014234 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014235 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014236 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014237 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014238 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014239 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014240 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014241 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014242 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014243 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014244 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014245 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014246 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014247 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014248 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014249 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014250 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014251 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014252 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014253 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014254 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014255 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014256 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014257 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014258 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014259 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014260 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014261 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014262 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014263 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014264 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014265 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014266 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014267 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014268 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014269 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014270 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014271 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014272 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014273 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014274 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014275 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014276 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014277 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014278 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014279 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014280 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014281 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.lowp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014282 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.lowp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014283 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014284 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014285 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014286 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.uniform.mediump_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014287 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014288 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014289 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014290 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.highp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014291 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014292 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014293 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014294 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014295 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014296 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.uniform.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014297 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014298 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014299 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014300 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.uniform.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014301 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.uniform.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014302 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.uniform.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014303 end";
}
