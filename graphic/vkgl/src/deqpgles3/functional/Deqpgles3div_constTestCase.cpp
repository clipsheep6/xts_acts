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
#include "../ActsDeqpgles30016TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015384 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015385 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015386 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015387 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015388 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015389 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.mediump_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015390 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015391 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015392 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015393 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.highp_mat2_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015394 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat2_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015395 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015396 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015397 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015398 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015399 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015400 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015401 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015402 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015403 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015404 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015405 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat2x3_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015406 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat2x3_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015407 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015408 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015409 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015410 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015411 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015412 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015413 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015414 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015415 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015416 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015417 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat2x4_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015418 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat2x4_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015419 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015420 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015421 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015422 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015423 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015424 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015425 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015426 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015427 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015428 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015429 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat3x2_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015430 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat3x2_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015431 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015432 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015433 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015434 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015435 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015436 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015437 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.mediump_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015438 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015439 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015440 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015441 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.highp_mat3_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015442 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat3_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015443 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015444 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015445 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015446 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015447 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015448 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015449 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015450 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015451 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015452 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015453 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat3x4_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015454 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat3x4_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015455 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015456 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015457 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015458 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015459 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015460 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015461 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015462 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015463 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015464 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015465 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat4x2_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015466 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat4x2_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015467 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015468 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015469 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.lowp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015470 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.lowp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015471 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015472 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015473 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015474 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.d"
        "iv.const.mediump_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015475 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015476 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015477 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat4x3_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015478 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.highp_mat4x3_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015479 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015480 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015481 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.lowp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015482 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.lowp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015483 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015484 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "div.const.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015485 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.mediump_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015486 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.mediump_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015487 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015488 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix"
        ".div.const.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015489 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matr"
        "ix.div.const.highp_mat4_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015490 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matri"
        "x.div.const.highp_mat4_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015491 end";
}
