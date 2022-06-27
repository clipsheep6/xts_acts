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

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014088 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014089 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014090 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014091 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014092 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014093 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014094 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014095 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014096 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014097 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014098 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014099 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014100 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014101 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014102 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014103 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014104 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014105 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014106 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014107 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014108 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014109 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014110 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014111 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014112 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014113 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014114 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014115 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014116 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014117 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014118 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014119 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014120 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014121 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014122 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014123 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014124 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014125 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014126 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014127 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014128 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014129 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014130 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014131 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014132 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014133 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014134 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014135 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014136 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014137 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014138 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014139 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014140 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014141 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014142 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014143 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014144 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014145 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014146 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014147 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014148 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014149 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014150 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014151 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014152 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014153 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014154 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014155 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014156 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014157 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014158 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014159 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014160 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014161 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014162 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014163 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014164 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014165 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014166 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014167 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014168 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014169 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014170 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014171 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014172 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014173 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.lowp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014174 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.lowp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014175 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014176 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014177 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014178 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.s"
        "ub.const.mediump_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014179 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014180 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014181 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014182 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.highp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014183 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014184 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014185 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014186 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014187 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014188 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "sub.const.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014189 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014190 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014191 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014192 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".sub.const.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014193 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.sub.const.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014194 end";
}

static HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.sub.const.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014195 end";
}
