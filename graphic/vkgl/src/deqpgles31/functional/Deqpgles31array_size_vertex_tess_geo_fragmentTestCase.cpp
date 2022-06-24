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

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
        "k_varying.array_size.vertex_tess_geo_fragment.builtin_gl_position",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023022 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback_v"
        "arying.array_size.vertex_tess_geo_fragment.default_block_basic_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023023 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
        "rying.array_size.vertex_tess_geo_fragment.default_block_struct_member",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023024 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedbac"
        "k_varying.array_size.vertex_tess_geo_fragment.default_block_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023025 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform_feedback_va"
        "rying.array_size.vertex_tess_geo_fragment.default_block_array_element",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023026 end";
}
