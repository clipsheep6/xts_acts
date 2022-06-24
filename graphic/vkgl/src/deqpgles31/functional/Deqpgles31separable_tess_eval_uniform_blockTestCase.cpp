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
#include "../ActsDeqpgles310022TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.re"
        "ferenced_by_shader.separable_tess_eval.uniform_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021074 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.refer"
        "enced_by_shader.separable_tess_eval.uniform_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021075 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.refere"
        "nced_by_shader.separable_tess_eval.uniform_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021076 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.reference"
        "d_by_shader.separable_tess_eval.uniform_block.float_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021077 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.reference"
        "d_by_shader.separable_tess_eval.uniform_block.float_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021078 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
        "ed_by_shader.separable_tess_eval.uniform_block.float_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021079 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.reference"
        "d_by_shader.separable_tess_eval.uniform_block.float_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021080 end";
}
