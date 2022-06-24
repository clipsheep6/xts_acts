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

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.location.default_block.struct.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020598 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.location.default_block.struct.struct.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020599 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.location.default_block.struct.struct.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020600 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.location.default_block.struct.struct.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020601 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.location.default_block.struct.struct.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020602 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.location.default_block.struct.struct.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020603 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unif"
        "orm.location.default_block.struct.struct.sampler_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020604 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform"
        ".location.default_block.struct.struct.sampler_2d_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020605 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unif"
        "orm.location.default_block.struct.struct.sampler_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020606 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unif"
        "orm.location.default_block.struct.struct.isampler_2d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020607 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".buffer_variable.type.array.struct.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024594 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "buffer_variable.type.struct.struct.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024624 end";
}
