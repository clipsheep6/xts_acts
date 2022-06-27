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
#include "../ActsDeqpgles30041TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040674 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040675 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040676 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040677 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040678 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040679 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040680 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040681 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040682 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040683 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040684 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040685 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040686 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040687 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040688 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040689 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040690 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040691 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040692 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040693 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040694 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040695 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040696 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040697 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040698 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040699 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040700 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040701 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040702 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040703 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040704 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040705 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040706 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040707 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.separate.triangles.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040708 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040709 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040710 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040711 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040712 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040713 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040714 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040715 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040716 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040717 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040718 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040719 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040720 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040721 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040722 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040723 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040724 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.separate.triangles.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040725 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040726 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040727 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040728 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040729 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040730 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040731 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040732 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040733 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040734 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.separate.triangles.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040735 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.separate.triangles.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040736 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041052 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041053 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041054 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041055 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041056 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041057 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041058 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041059 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041060 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041061 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041062 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041063 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041064 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041065 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041066 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041067 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041068 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041069 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041070 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041071 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041072 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041073 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041074 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041075 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041076 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041077 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041078 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041079 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041080 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041081 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041082 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041083 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041084 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041085 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.separate.triangles.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041086 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041087 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041088 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041089 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041090 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041091 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041092 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041093 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041094 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041095 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041096 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041097 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041098 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041099, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041099 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041099 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041099 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041100, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041100 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041100 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041100 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041101, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041101 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041101 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041101 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041102, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041102 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041102 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041102 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041103, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041103 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.separate.triangles.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041103 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041103 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041104, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041104 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041104 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041104 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041105 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041106 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041107 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041108 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041109 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041110 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041111 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041112 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.separate.triangles.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041113 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.separate.triangles.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041114 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041430 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041431 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041432 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041433 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041434 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041435 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041436 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041437 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041438 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041439 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041440 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041441 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041442 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041443 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041444 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041445 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041446 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041447 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041448 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041449 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041450 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041451 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041452 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041453 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041454 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041455 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041456 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041457 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041458 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041459 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041460 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041461 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041462 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041463 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.separate.triangles.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041464 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041465 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041466 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041467 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041468 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041469 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041470 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041471 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041472 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041473 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041474 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041475 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041476 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041477 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041478 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041479 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041480 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.separate.triangles.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041481 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041482 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041483 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041484 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041485 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041486 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041487 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041488 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041489 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041490 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.separate.triangles.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041491 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.separate.triangles.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041492 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041756 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041757 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041758 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041759 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041760 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041761 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041762 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041763 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041764 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.separate.triangles.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041765 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041816 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041817 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041818 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041819 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041820 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041821 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041822 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041823 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.separate.triangles.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041824 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ran"
        "dom_full_array_capture.separate.triangles.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041825 end";
}
