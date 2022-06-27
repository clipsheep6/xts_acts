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
#include "../ActsDeqpgles30019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.float_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018063 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.float_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018064 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.float_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018065 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.floor.float_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018066 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.float_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018067 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.float_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018068 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.floor.vec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018069 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018070 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018071 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.floor.vec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018072 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018073 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018074 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.floor.vec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018075 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018076 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018077 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.floor.vec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018078 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018079 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018080 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.floor.vec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018081 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018082 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018083 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.floor.vec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018084 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.floor.vec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018085 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.floor.vec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018086 end";
}
