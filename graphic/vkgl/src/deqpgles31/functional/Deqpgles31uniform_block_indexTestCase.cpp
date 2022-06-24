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

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface"
        "_query.uniform.block_index.default_block",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020455 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interfac"
        "e_query.uniform.block_index.named_block",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020456 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface"
        "_query.uniform.block_index.unnamed_block",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020457 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interfac"
        "e_query.uniform.block_index.block_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020458 end";
}
