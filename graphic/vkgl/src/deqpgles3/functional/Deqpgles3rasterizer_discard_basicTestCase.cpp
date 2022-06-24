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

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer"
        "_discard.basic.write_depth_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040485 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer"
        "_discard.basic.write_depth_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040486 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_d"
        "iscard.basic.write_depth_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040487 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_d"
        "iscard.basic.write_depth_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040488 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_d"
        "iscard.basic.write_depth_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040489 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_dis"
        "card.basic.write_depth_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040490 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_di"
        "scard.basic.write_depth_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040491 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_"
        "discard.basic.write_stencil_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040492 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_"
        "discard.basic.write_stencil_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040493 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_di"
        "scard.basic.write_stencil_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040494 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_di"
        "scard.basic.write_stencil_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040495 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_di"
        "scard.basic.write_stencil_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040496 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_disc"
        "ard.basic.write_stencil_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040497 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasterizer_dis"
        "card.basic.write_stencil_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040498 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteri"
        "zer_discard.basic.clear_color",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040499 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteri"
        "zer_discard.basic.clear_depth",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040500 end";
}

static HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_040501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.rasteriz"
        "er_discard.basic.clear_stencil",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30041TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30041TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30041TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30041TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30041TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_040501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_040501 end";
}
