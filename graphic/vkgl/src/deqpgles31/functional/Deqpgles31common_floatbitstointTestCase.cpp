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
#include "../ActsDeqpgles310001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.float_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000637 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.float_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000638 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.float_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000639 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.float_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000640 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.float_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000641 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".common.floatbitstoint.float_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000642 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.float_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000643 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.float_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000644 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.float_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000645 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.float_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000646 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.float_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000647 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.float_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000648 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000649 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000650 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000651 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000652 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000653 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".common.floatbitstoint.vec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000654 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000655 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000656 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000657 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.vec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000658 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000659 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000660 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000661 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000662 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000663 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000664 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000665 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".common.floatbitstoint.vec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000666 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000667 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000668 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000669 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.vec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000670 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000671 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000672 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000673 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000674 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000675 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000676 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000677 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functions"
        ".common.floatbitstoint.vec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000678 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.common.floatbitstoint.vec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000679 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000680 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000681 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.common.floatbitstoint.vec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000682 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.common.floatbitstoint.vec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000683 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.floatbitstoint.vec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000684 end";
}
