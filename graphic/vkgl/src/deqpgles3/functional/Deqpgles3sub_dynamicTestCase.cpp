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

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014304 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014305 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014306 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014307 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014308 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014309 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014310 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014311 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014312 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014313 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014314 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014315 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014316 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014317 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014318 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014319 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014320 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014321 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014322 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014323 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014324 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014325 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014326 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014327 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014328 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014329 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014330 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014331 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014332 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014333 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014334 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014335 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014336 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014337 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014338 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014339 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014340 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014341 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014342 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014343 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014344 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014345 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014346 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014347 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014348 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014349 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014350 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014351 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014352 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014353 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014354 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014355 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014356 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014357 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014358 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014359 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014360 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014361 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014362 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014363 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014364 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014365 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014366 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014367 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014368 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014369 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014370 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014371 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014372 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014373 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014374 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014375 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014376 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014377 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014378 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014379 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014380 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014381 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014382 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014383 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014384 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014385 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014386 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014387 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014388 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014389 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.lowp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014390 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.lowp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014391 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014392 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014393 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014394 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.su"
        "b.dynamic.mediump_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014395 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014396 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014397 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014398 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.highp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014399 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014400 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014401 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014402 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014403 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014404 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.dynamic.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014405 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014406 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014407 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014408 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.dynamic.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014409 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.dynamic.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014410 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.dynamic.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014411 end";
}
