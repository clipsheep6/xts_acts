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

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014412 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014413 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014414 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014415 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014416 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014417 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014418 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014419 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014420 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014421 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014422 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014423 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014424 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014425 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014426 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014427 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014428 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014429 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014430 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014431 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014432 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014433 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014434 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014435 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014436 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014437 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014438 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014439 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_vec2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014440 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014441 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014442 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014443 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014444 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014445 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014446 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014447 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014448 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014449 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014450 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014451 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014452 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014453 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014454 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014455 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014456 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014457 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014458 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014459 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014460 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014461 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014462 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014463 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014464 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014465 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014466 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014467 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014468 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014469 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014470 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014471 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014472 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014473 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2x3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014474 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014475 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014476 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014477 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2x3_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014478 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x3_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014479 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x3_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014480 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x3_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014481 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x3_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014482 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x3_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014483 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014484 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014485 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014486 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014487 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014488 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014489 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014490 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014491 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014492 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014493 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014494 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014495 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014496 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014497 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014498 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014499 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014500 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014501 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014502 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014503 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014504 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014505 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014506 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014507 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014508 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014509 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2x4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014510 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014511 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014512 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014513 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat2x4_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014514 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x4_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014515 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x4_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014516 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x4_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014517 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat2x4_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014518 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat2x4_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014519 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014520 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014521 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014522 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014523 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014524 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014525 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014526 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014527 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014528 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014529 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014530 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014531 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014532 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014533 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014534 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014535 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014536 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014537 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014538 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014539 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014540 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014541 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014542 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014543 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014544 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014545 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3x2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014546 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014547 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014548 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014549 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x2_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014550 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x2_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014551 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3x2_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014552 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x2_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014553 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x2_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014554 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x2_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014555 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014556 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014557 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014558 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014559 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014560 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014561 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014562 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014563 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014564 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014565 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014566 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014567 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014568 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014569 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014570 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014571 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014572 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014573 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014574 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014575 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014576 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014577 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014578 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014579 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014580 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014581 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014582 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014583 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_vec3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014584 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014585 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014586 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014587 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014588 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014589 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014590 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014591 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014592 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014593 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014594 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014595 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014596 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014597 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014598 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014599 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014600 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014601 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014602 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014603 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014604 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014605 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014606 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014607 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014608 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014609 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014610 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014611 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014612 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014613 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014614 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014615 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014616 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014617 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3x4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014618 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014619 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014620 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014621 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x4_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014622 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x4_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014623 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat3x4_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014624 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x4_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014625 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat3x4_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014626 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat3x4_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014627 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014628 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014629 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014630 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014631 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014632 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014633 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014634 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014635 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014636 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014637 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014638 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014639 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014640 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014641 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014642 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014643 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014644 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014645 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014646 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014647 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014648 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014649 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014650 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014651 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014652 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014653 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4x2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014654 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014655 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014656 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014657 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x2_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014658 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x2_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014659 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x2_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014660 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x2_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014661 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4x2_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014662 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x2_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014663 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014664 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014665 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014666 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014667 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014668 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014669 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014670 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014671 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014672 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.lowp_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014673 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014674 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014675 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014676 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014677 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014678 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014679 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014680 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014681 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014682 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014683 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014684 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.m"
        "ul.const.mediump_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014685 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014686 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014687 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014688 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014689 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4x3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014690 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014691 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014692 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_vec3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014693 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x3_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014694 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x3_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014695 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x3_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014696 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.highp_mat4x3_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014697 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4x3_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014698 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4x3_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014699 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014700 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014701 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014702 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014703 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014704 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014705 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014706 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014707 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014708 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.lowp_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014709 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014710 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014711 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014712 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014713 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014714 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014715 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014716 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014717 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014718 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014719 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014720 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "mul.const.mediump_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014721 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014722 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014723 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014724 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014725 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014726 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014727 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_vec4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014728 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_vec4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014729 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014730 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014731 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014732 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".mul.const.highp_mat4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014733 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.mul.const.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014734 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.mul.const.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014735 end";
}
