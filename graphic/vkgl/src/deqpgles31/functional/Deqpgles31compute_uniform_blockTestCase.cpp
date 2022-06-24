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

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.unif"
        "orm.referenced_by_shader.compute.uniform_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020974 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform"
        ".referenced_by_shader.compute.uniform_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020975 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform."
        "referenced_by_shader.compute.uniform_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020976 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.ref"
        "erenced_by_shader.compute.uniform_block.float_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020977 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.ref"
        "erenced_by_shader.compute.uniform_block.float_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020978 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.re"
        "ferenced_by_shader.compute.uniform_block.float_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020979 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.ref"
        "erenced_by_shader.compute.uniform_block.float_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020980 end";
}
