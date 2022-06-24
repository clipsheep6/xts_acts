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

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031557 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031558 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031559 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031560 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.r"
        "ender.resize.tex2d_rgba32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031561 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.rbo_rgba32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031562 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031563 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031564 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.te"
        "x2d_rgba16f_depth_tex2d_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031565 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.t"
        "ex2d_rgba16f_depth_rbo_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031566 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.t"
        "ex2d_rgba16f_depth_tex2d_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031567 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba16f_depth_rbo_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031568 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.t"
        "ex2d_rgba16f_depth_tex2d_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031569 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba16f_depth_rbo_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031570 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2d"
        "_rgba16f_depth_stencil_tex2d_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031571 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2"
        "d_rgba16f_depth_stencil_rbo_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031572 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2d"
        "_rgba16f_depth_stencil_tex2d_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031573 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2"
        "d_rgba16f_depth_stencil_rbo_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031574 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba16f_stencil_rbo_stencil_index8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031575 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031576 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031577 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.r"
        "ender.resize.tex2d_rgba16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031578 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.rbo_rgba16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031579 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgb16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031580 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgb16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031581 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rgba8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031582 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rgba8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031583 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.t"
        "ex2d_rgba8_depth_tex2d_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031584 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba8_depth_rbo_depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031585 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba8_depth_tex2d_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031586 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize"
        ".tex2d_rgba8_depth_rbo_depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031587 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize."
        "tex2d_rgba8_depth_tex2d_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031588 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize"
        ".tex2d_rgba8_depth_rbo_depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031589 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2"
        "d_rgba8_depth_stencil_tex2d_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031590 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex"
        "2d_rgba8_depth_stencil_rbo_depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031591 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex2"
        "d_rgba8_depth_stencil_tex2d_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031592 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize.tex"
        "2d_rgba8_depth_stencil_rbo_depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031593 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.render.resize"
        ".tex2d_rgba8_stencil_rbo_stencil_index8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031594 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031595 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031596 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgba8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031597 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgba8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031598 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.ren"
        "der.resize.tex2d_srgb8_alpha8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031599 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.re"
        "nder.resize.rbo_srgb8_alpha8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031600 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.r"
        "ender.resize.tex2d_rgb10_a2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031601 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.rbo_rgb10_a2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031602 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.re"
        "nder.resize.tex2d_rgb10_a2ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031603 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.r"
        "ender.resize.rbo_rgb10_a2ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031604 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rgba4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031605 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rgba4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031606 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgb5_a1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031607 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgb5_a1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031608 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rgb8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031609 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rgb8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031610 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rgb565",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031611 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rgb565",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031612 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.rend"
        "er.resize.tex2d_r11f_g11f_b10f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031613 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.ren"
        "der.resize.rbo_r11f_g11f_b10f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031614 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031615 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031616 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031617 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031618 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rg32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031619 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rg32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031620 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031621 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031622 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031623 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031624 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "render.resize.tex2d_rg16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031625 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.rbo_rg16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031626 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.tex2d_rg8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031627 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.render.resize.rbo_rg8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031628 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031629 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031630 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_rg8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031631 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_rg8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031632 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031633 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031634 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031635 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031636 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031637 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031638 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031639 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031640 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031641 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031642 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031643 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031644 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.tex2d_r8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031645 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.render.resize.rbo_r8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031646 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.tex2d_r8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031647 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.render.resize.rbo_r8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031648 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".render.resize.tex2d_r8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031649 end";
}

static HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_031650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.render.resize.rbo_r8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30032TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30032TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30032TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30032TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30032TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_031650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_031650 end";
}
