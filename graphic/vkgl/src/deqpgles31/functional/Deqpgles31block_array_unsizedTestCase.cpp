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
#include "../ActsDeqpgles310024TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.array_size.block_array.unsized.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023585 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_size.block_array.unsized.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023586 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.array_size.block_array.unsized.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023587 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.array_size.block_array.unsized.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023588 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.array_size.block_array.unsized.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023589 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_size.block_array.unsized.bvec3_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023590 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.array_size.block_array.unsized.bvec3_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023591 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.array_size.block_array.unsized.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023592 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.array_size.block_array.unsized.vec4_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023593 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.array_size.block_array.unsized.vec4_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023594 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.array_size.block_array.unsized.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023595 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_size.block_array.unsized.ivec2_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023596 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.array_size.block_array.unsized.ivec2_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023597 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.array_stride.block_array.unsized.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023698 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.array_stride.block_array.unsized.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023699 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_stride.block_array.unsized.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023700 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.array_stride.block_array.unsized.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023701 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.array_stride.block_array.unsized.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023702 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.array_stride.block_array.unsized.bvec3_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023703 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_stride.block_array.unsized.bvec3_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023704 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.array_stride.block_array.unsized.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023705 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_stride.block_array.unsized.vec4_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023706 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_stride.block_array.unsized.vec4_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023707 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.array_stride.block_array.unsized.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023708 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.array_stride.block_array.unsized.ivec2_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023709 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.array_stride.block_array.unsized.ivec2_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023710 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.name_length.block_array.unsized.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024083 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.name_length.block_array.unsized.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024084 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_va"
        "riable.name_length.block_array.unsized.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024085 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.block_array.unsized.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024086 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.name_length.block_array.unsized.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024087 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.block_array.unsized.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024088 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.block_array.unsized.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024089 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".buffer_variable.offset.block_array.unsized.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024149 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024150, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024150 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.offset.block_array.unsized.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024150 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024150 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024151, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024151 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.block_array.unsized.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024151 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024151 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.block_array.unsized.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024152 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.offset.block_array.unsized.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024153 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.block_array.unsized.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024154 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_024155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.offset.block_array.unsized.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024155 end";
}
