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

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform"
        "_feedback_varying.type.vertex_tess_fragment.struct.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023184 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfor"
        "m_feedback_varying.type.vertex_tess_fragment.struct.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023185 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfor"
        "m_feedback_varying.type.vertex_tess_fragment.struct.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023186 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transfor"
        "m_feedback_varying.type.vertex_tess_fragment.struct.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023187 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform"
        "_feedback_varying.type.vertex_tess_fragment.struct.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023188 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform"
        "_feedback_varying.type.vertex_tess_fragment.struct.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023189 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.transform"
        "_feedback_varying.type.vertex_tess_fragment.struct.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023190 end";
}
