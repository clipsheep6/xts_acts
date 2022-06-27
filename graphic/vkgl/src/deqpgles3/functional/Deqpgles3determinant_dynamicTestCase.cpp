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

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.de"
        "terminant.dynamic.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015870 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015871 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015872 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.deter"
        "minant.dynamic.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015873 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015874 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015875 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.de"
        "terminant.dynamic.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015876 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015877 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015878 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.deter"
        "minant.dynamic.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015879 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015880 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015881 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.de"
        "terminant.dynamic.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015882 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015883 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015884 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.deter"
        "minant.dynamic.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015885 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.det"
        "erminant.dynamic.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015886 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.dete"
        "rminant.dynamic.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015887 end";
}
