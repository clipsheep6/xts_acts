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

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".program_input.location.separable_tess_ctrl.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021857 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_"
        "input.location.separable_tess_ctrl.var_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021858 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "program_output.location.separable_tess_ctrl.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022451 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_o"
        "utput.location.separable_tess_ctrl.var_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022452 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.pro"
        "gram_output.location.separable_tess_ctrl.patch_var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022453 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_outp"
        "ut.location.separable_tess_ctrl.patch_var_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022454 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progra"
        "m_output.location.separable_tess_ctrl.patch_var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022455 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output."
        "location.separable_tess_ctrl.patch_var_struct_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022456 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progra"
        "m_output.location.separable_tess_ctrl.patch_var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022457 end";
}

static HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_022458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output."
        "location.separable_tess_ctrl.patch_var_array_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022458 end";
}
