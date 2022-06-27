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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310010TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009117 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009118 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009119 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009120 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layo"
        "ut.basic_unsized_array.std430.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009121 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009122 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009123 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009124 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009125 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009126 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009127 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009128 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009129 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009130 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009131 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009132 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009133 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.bas"
        "ic_unsized_array.std430.row_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009134 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.column_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009135 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009136 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.bas"
        "ic_unsized_array.std430.row_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009137 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.column_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009138 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layou"
        "t.basic_unsized_array.std430.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009139 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.bas"
        "ic_unsized_array.std430.row_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009140 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.column_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009141 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009142 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009143 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009144 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009145 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009146 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009147 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009148 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009149 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009150 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009151 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009152 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009153 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009154 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009155 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009156 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout"
        ".basic_unsized_array.std430.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009157 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basi"
        "c_unsized_array.std430.row_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009158 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.basic"
        "_unsized_array.std430.column_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009159 end";
}
