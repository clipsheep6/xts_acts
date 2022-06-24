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
#include "../ActsDeqpgles30032TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_s"
        "tencil.tex2d_rgba8_depth_tex2d_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031723 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_"
        "stencil.tex2d_rgba8_depth_rbo_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031724 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_"
        "stencil.tex2d_rgba8_depth_tex2d_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031725 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth"
        "_stencil.tex2d_rgba8_depth_rbo_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031726 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_"
        "stencil.tex2d_rgba8_depth_tex2d_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031727 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth"
        "_stencil.tex2d_rgba8_depth_rbo_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031728 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_sten"
        "cil.tex2d_rgba8_depth_stencil_tex2d_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031729 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_ste"
        "ncil.tex2d_rgba8_depth_stencil_rbo_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031730 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_sten"
        "cil.tex2d_rgba8_depth_stencil_tex2d_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031731 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth_ste"
        "ncil.tex2d_rgba8_depth_stencil_rbo_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031732 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.recreate_depth"
        "_stencil.tex2d_rgba8_stencil_rbo_stencil_index8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031733 end";
}
