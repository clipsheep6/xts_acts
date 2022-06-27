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
#include "../ActsDeqpgles30043TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample"
        ".fbo_8_samples.num_samples_polygon",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042258 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisampl"
        "e.fbo_8_samples.num_samples_line",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042259 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.f"
        "bo_8_samples.common_edge_small_quads",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042260 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample."
        "fbo_8_samples.common_edge_big_quad",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042261 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fb"
        "o_8_samples.common_edge_viewport_quad",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042262 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.mult"
        "isample.fbo_8_samples.depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042263 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multi"
        "sample.fbo_8_samples.stencil",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042264 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.f"
        "bo_8_samples.sample_coverage_invert",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042265 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fbo_8_"
        "samples.proportionality_alpha_to_coverage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042266 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fbo_8"
        "_samples.proportionality_sample_coverage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042267 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fbo_8_samp"
        "les.proportionality_sample_coverage_inverted",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042268 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fbo"
        "_8_samples.constancy_alpha_to_coverage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042269 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fb"
        "o_8_samples.constancy_sample_coverage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042270 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.fbo_8_s"
        "amples.constancy_sample_coverage_inverted",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042271 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisamp"
        "le.fbo_8_samples.constancy_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042272 end";
}

static HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_042273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.multisample.f"
        "bo_8_samples.constancy_both_inverted",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30043TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30043TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30043TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30043TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30043TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_042273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_042273 end";
}
