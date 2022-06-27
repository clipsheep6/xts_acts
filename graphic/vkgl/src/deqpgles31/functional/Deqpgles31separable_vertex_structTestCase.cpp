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
#include "../ActsDeqpgles310023TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022630 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022631 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022632 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022633 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022634 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022635 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022636 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022637 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022638 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022639 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022640 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022641 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022642 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022643 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022644 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022645 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022646 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022647 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022648 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_output.type.separable_vertex.struct.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022649 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.type.separable_vertex.struct.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022650 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023313, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023313 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023313 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023313 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023314, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023314 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023314 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023314 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023315, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023315 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023315 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023315 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023316, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023316 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023316 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023316 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023317, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023317 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023317 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023317 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023318, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023318 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023318 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023318 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023319 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023320 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023321 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023322 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023323, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023323 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023323 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023323 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023324, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023324 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023324 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023324 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023325 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023326 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023327 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023328 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023329 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023330 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023331 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfo"
        "rm_feedback_varying.type.separable_vertex.struct.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023332 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_023333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transf"
        "orm_feedback_varying.type.separable_vertex.struct.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023333 end";
}
