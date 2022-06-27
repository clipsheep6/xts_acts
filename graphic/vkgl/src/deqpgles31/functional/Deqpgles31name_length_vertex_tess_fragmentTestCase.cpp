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

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedba"
        "ck_varying.name_length.vertex_tess_fragment.builtin_gl_position",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023047 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback"
        "_varying.name_length.vertex_tess_fragment.default_block_basic_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023048 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
        "arying.name_length.vertex_tess_fragment.default_block_struct_member",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023049 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedba"
        "ck_varying.name_length.vertex_tess_fragment.default_block_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023050 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
        "arying.name_length.vertex_tess_fragment.default_block_array_element",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023051 end";
}
