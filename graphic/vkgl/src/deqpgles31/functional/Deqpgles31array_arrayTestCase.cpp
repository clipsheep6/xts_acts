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
#include "../ActsDeqpgles310021TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.array.array.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020542 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".uniform.location.default_block.array.array.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020543 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.array.array.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020544 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.array.array.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020545 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.array.array.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020546 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.array.array.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020547 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uni"
        "form.location.default_block.array.array.sampler_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020548 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unifor"
        "m.location.default_block.array.array.sampler_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020549 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uni"
        "form.location.default_block.array.array.sampler_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020550 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uni"
        "form.location.default_block.array.array.isampler_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020551 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.un"
        "iform.location.default_block.array.array.image_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020552 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unifo"
        "rm.location.default_block.array.array.iimage_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020553 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uni"
        "form.location.default_block.array.array.atomic_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020554 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_quer"
        "y.buffer_variable.type.array.array.array.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024585 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".buffer_variable.type.struct.array.array.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024615 end";
}
