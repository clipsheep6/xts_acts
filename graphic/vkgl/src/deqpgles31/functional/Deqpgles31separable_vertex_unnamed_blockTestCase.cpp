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

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.r"
        "eferenced_by_shader.separable_vertex.unnamed_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021006 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.refe"
        "renced_by_shader.separable_vertex.unnamed_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021007 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.uniform.refe"
        "renced_by_shader.separable_vertex.unnamed_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021008 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_va"
        "riable.referenced_by.separable_vertex.unnamed_block.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024180 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.referenced_by.separable_vertex.unnamed_block.float_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024181 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variab"
        "le.referenced_by.separable_vertex.unnamed_block.float_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024182 end";
}
