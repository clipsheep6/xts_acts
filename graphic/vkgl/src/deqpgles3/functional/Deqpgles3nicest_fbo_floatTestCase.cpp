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
#include "../ActsDeqpgles30018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdx.nicest.fbo_float.float_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017537 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.dfdx.nicest.fbo_float.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017538 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdx.nicest.fbo_float.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017539 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdx.nicest.fbo_float.vec3_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017540 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdx.nicest.fbo_float.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017541 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.fbo_float.float_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017715 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.dfdy.nicest.fbo_float.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017716 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.fbo_float.vec2_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017717 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdy.nicest.fbo_float.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017718 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.fbo_float.vec3_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017719 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdy.nicest.fbo_float.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017720 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriv"
        "ate.dfdy.nicest.fbo_float.vec4_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017721 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.dfdy.nicest.fbo_float.vec4_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017722 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.float_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017915 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivate"
        ".fwidth.nicest.fbo_float.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017916 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.fwidth.nicest.fbo_float.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017917 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec2_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017918 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.fwidth.nicest.fbo_float.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017919 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017920 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec3_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017921 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.fwidth.nicest.fbo_float.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017922 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017923 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec4_lowp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017924 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.derivat"
        "e.fwidth.nicest.fbo_float.vec4_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017925 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.deriva"
        "te.fwidth.nicest.fbo_float.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017926 end";
}
