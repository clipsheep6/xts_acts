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

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009461 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009462 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009463 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009464 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.l"
        "ayout.3_level_array.std430.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009465 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009466 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009467 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009468 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009469 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009470 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009471 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009472 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009473 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009474 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009475 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009476 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009477 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_array.std430.row_major_mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009478 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009479 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009480 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_array.std430.row_major_mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009481 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009482 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.la"
        "yout.3_level_array.std430.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009483 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout."
        "3_level_array.std430.row_major_mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009484 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009485 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009486 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009487 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009488 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009489 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009490 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009491 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009492 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009493 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009494 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009495 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009496 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009497 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009498 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009499 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009500 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.lay"
        "out.3_level_array.std430.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310010TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310010TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310010TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310010TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310010TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_009501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009501 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3"
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
        GTEST_LOG_(INFO) << "TestCase_009502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009502 end";
}

static HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_009503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ssbo.layout.3_"
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
        GTEST_LOG_(INFO) << "TestCase_009503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_009503 end";
}
