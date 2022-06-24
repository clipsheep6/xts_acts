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
#include "../ActsDeqpgles310023TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.referenced_by.referenced_by_vertex_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022554 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_"
        "output.referenced_by.referenced_by_vertex_tess_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022555 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_output.referenced_by.referenced_by_vertex_geo_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022556 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_ou"
        "tput.referenced_by.referenced_by_vertex_tess_geo_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022557 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progra"
        "m_output.referenced_by.referenced_by_separable_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022558 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_output.referenced_by.referenced_by_separable_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022559 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_output.referenced_by.referenced_by_separable_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022560 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_output.referenced_by.referenced_by_separable_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022561 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_output.referenced_by.referenced_by_separable_tess_ctrl",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022562 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_outp"
        "ut.referenced_by.referenced_by_separable_tess_ctrl_patch_out",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022563 end";
}
