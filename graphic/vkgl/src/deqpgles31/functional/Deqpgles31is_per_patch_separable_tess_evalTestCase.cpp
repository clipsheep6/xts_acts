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

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022319, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022319 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.p"
        "rogram_input.is_per_patch.separable_tess_eval.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022319 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022319 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022320, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022320 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.prog"
        "ram_input.is_per_patch.separable_tess_eval.patch_var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022320 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022320 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022321, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022321 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_"
        "input.is_per_patch.separable_tess_eval.patch_var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022321 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022321 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022322, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022322 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program"
        "_input.is_per_patch.separable_tess_eval.patch_var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022322 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022322 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.pr"
        "ogram_output.is_per_patch.separable_tess_eval.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022942 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.is_per_patch.separable_tess_eval.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022943 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.progr"
        "am_output.is_per_patch.separable_tess_eval.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022944 end";
}
