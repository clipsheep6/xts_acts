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
#include "../ActsDeqpgles310025TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buff"
        "er_variable.referenced_by.compute.named_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024156 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.referenced_by.compute.named_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024157 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.referenced_by.compute.named_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024158 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_var"
        "iable.referenced_by.compute.named_block.float_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024159 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_var"
        "iable.referenced_by.compute.named_block.float_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024160 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_var"
        "iable.referenced_by.compute.named_block.float_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024161 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.referenced_by.compute.named_block.float_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024162 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.referenced_by.compute.named_block.float_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024163 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.referenced_by.compute.named_block.float_unsized_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024164 end";
}
