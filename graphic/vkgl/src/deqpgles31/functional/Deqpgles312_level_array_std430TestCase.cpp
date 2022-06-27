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

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009289, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009289 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009289 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009289 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009290, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009290 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009290 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009290 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009291, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009291 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009291 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009291 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009292 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.2_level_array.std430.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009293 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009294 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009295 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009296 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009297 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009298 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009299, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009299 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009299 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009299 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009300, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009300 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009300 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009300 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009301, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009301 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009301 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009301 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009302, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009302 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009302 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009302 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009303, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009303 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009303 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009303 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009304, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009304 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009304 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009304 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009305, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009305 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009305 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009305 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009306, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009306 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "2_level_array.std430.row_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009306 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009306 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009307, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009307 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.column_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009307 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009307 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009308, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009308 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009308 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009308 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009309, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009309 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "2_level_array.std430.row_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009309 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009309 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009310, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009310 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.column_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009310 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009310 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009311, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009311 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.2_level_array.std430.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009311 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009311 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009312, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009312 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "2_level_array.std430.row_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009312 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009312 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.column_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009313 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009314 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009315 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009316 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009317 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009318 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009319 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009320 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009321 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009322 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009323 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009324 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009325 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009326 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009327 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009328 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.2_level_array.std430.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009329 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2"
        "_level_array.std430.row_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009330 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.2_"
        "level_array.std430.column_major_mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009331 end";
}
