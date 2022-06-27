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

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.float_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000253 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.float_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000254 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.float_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000255 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.float_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000256 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.float_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000257 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.common.trunc.float_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000258 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.float_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000259 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.float_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000260 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.float_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000261 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.trunc.float_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000262 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.float_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000263 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.float_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000264 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec2_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000265 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec2_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000266 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec2_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000267 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.trunc.vec2_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000268 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec2_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000269 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.trunc.vec2_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000270 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec2_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000271 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec2_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000272 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec2_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000273 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec2_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000274 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec2_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000275 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec2_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000276 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000277, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000277 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec3_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000277 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000277 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000278, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000278 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec3_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000278 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000278 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000279, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000279 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec3_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000279 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000279 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000280, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000280 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.trunc.vec3_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000280 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000280 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000281, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000281 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec3_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000281 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000281 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.trunc.vec3_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000282 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec3_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000283 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec3_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000284 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec3_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000285 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec3_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000286 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000287, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000287 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec3_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000287 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000287 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000288, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000288 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec3_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000288 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000288 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec4_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000289 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec4_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000290 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec4_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000291 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_"
        "functions.common.trunc.vec4_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000292 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec4_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000293 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.common.trunc.vec4_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000294 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec4_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000295 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec4_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000296 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec4_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000297 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.common.trunc.vec4_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000298 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.common.trunc.vec4_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000299 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.common.trunc.vec4_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000300 end";
}
