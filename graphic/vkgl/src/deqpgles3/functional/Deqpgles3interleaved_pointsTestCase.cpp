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

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040737 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040738 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040739 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040740 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040741 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040742 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040743 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040744 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040745 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040746 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040747 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040748 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040749 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040750 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040751 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040752 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040753 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040754 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040755 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040756 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040757 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040758 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040759 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040760 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040761 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040762 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040763 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040764 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040765 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040766 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040767 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040768 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040769 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040770 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ba"
        "sic_types.interleaved.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040771 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040772 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040773 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040774 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040775 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040776 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040777 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040778 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040779 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040780 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040781 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040782 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040783 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040784 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040785 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040786 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040787 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".basic_types.interleaved.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040788 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040789 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040790 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040791 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040792 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040793 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040794 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040795 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040796 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040797 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.b"
        "asic_types.interleaved.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040798 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "basic_types.interleaved.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040799 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041115 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041116 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041117 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041118 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041119 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041120 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041121 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041122 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041123 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041124 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041125 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041126 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041127 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041128 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041129 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041130, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041130 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041130 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041130 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041131, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041131 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041131 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041131 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041132, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041132 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041132 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041132 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041133, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041133 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041133 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041133 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041134, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041134 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041134 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041134 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041135, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041135 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041135 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041135 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041136, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041136 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041136 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041136 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041137, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041137 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041137 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041137 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041138, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041138 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041138 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041138 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041139, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041139 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041139 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041139 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041140, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041140 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041140 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041140 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041141, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041141 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041141 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041141 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041142, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041142 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041142 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041142 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041143, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041143 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041143 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041143 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041144, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041144 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041144 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041144 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041145, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041145 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041145 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041145 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041146 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041147 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041148 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback"
        ".array.interleaved.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041149 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041150 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041151 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041152 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041153 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041154 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041155 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041156 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041157 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041158 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041159 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041160 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041161 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041162 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041163 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041164 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041165 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedb"
        "ack.array.interleaved.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041166 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041167 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041168 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041169 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041170 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041171 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041172 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041173 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041174 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041175 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedbac"
        "k.array.interleaved.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041176 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedba"
        "ck.array.interleaved.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041177 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041493 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041494 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041495 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041496 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041497 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041498 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041499 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041500 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041501 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041502 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041503 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041504 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041505 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041506 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041507 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041508 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041509 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041510 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041511 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041512 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041513 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041514 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041515 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041516 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041517 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041518 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041519 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041520 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041521 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041522 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041523 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041524 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041525 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041526 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.arr"
        "ay_element.interleaved.points.mediump_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041527 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.highp_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041528 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041529 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041530 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041531 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041532 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041533 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041534 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041535 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041536 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041537 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041538 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041539 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041540 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041541 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041542 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041543 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback."
        "array_element.interleaved.points.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041544 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041545 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041546 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041547 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041548 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041549 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041550 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041551 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041552 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.lowp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041553 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ar"
        "ray_element.interleaved.points.mediump_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041554 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.a"
        "rray_element.interleaved.points.highp_uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041555 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041766 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041767 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041768 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041769 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041770 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041771 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041772 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041773 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041774 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_fe"
        "edback.random.interleaved.points.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041775 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041826 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041827 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041828 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041829 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041830 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041831 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041832 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041833 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ra"
        "ndom_full_array_capture.interleaved.points.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041834 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_041835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_041835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.transform_feedback.ran"
        "dom_full_array_capture.interleaved.points.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_041835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_041835 end";
}
