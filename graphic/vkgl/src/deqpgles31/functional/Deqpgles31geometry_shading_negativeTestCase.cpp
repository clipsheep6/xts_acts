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
#include "../ActsDeqpgles310017TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shadin"
        "g.negative.type_points_primitive_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016428 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading."
        "negative.type_points_primitive_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016429 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading."
        "negative.type_points_primitive_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016430 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.neg"
        "ative.type_points_primitive_lines_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016431 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negat"
        "ive.type_points_primitive_line_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016432 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading."
        "negative.type_points_primitive_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016433 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.ne"
        "gative.type_points_primitive_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016434 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.n"
        "egative.type_points_primitive_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016435 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negat"
        "ive.type_points_primitive_triangles_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016436 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negativ"
        "e.type_points_primitive_triangle_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016437 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shadin"
        "g.negative.type_lines_primitive_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016438 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.ne"
        "gative.type_lines_primitive_lines_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016439 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negat"
        "ive.type_lines_primitive_line_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016440 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading"
        ".negative.type_lines_primitive_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016441 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.ne"
        "gative.type_lines_primitive_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016442 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.n"
        "egative.type_lines_primitive_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016443 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.nega"
        "tive.type_lines_primitive_triangles_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016444 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negativ"
        "e.type_lines_primitive_triangle_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016445 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.neg"
        "ative.type_lines_adjacency_primitive_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016446 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.ne"
        "gative.type_lines_adjacency_primitive_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016447 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.nega"
        "tive.type_lines_adjacency_primitive_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016448 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negat"
        "ive.type_lines_adjacency_primitive_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016449 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.nega"
        "tive.type_lines_adjacency_primitive_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016450 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negativ"
        "e.type_lines_adjacency_primitive_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016451 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negati"
        "ve.type_lines_adjacency_primitive_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016452 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative."
        "type_lines_adjacency_primitive_triangles_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016453 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative.typ"
        "e_lines_adjacency_primitive_triangle_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016454 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading."
        "negative.type_triangles_primitive_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016455 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading"
        ".negative.type_triangles_primitive_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016456 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.n"
        "egative.type_triangles_primitive_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016457 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.ne"
        "gative.type_triangles_primitive_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016458 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.nega"
        "tive.type_triangles_primitive_lines_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016459 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negativ"
        "e.type_triangles_primitive_line_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016460 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negati"
        "ve.type_triangles_primitive_triangles_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016461 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative."
        "type_triangles_primitive_triangle_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016462 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negat"
        "ive.type_triangles_adjacency_primitive_points",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016463 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.nega"
        "tive.type_triangles_adjacency_primitive_lines",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016464 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negati"
        "ve.type_triangles_adjacency_primitive_line_loop",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016465 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negativ"
        "e.type_triangles_adjacency_primitive_line_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016466 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative."
        "type_triangles_adjacency_primitive_lines_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016467 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative.typ"
        "e_triangles_adjacency_primitive_line_strip_adjacency",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016468 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negati"
        "ve.type_triangles_adjacency_primitive_triangles",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016469 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative."
        "type_triangles_adjacency_primitive_triangle_strip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016470 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.geometry_shading.negative"
        ".type_triangles_adjacency_primitive_triangle_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016471 end";
}
