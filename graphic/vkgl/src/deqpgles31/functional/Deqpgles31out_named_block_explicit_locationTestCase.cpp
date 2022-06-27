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

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.res"
        "ource_list.interface_blocks.out.named_block_explicit_location.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022375 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.resour"
        "ce_list.interface_blocks.out.named_block_explicit_location.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022376 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.resour"
        "ce_list.interface_blocks.out.named_block_explicit_location.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022377 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.a"
        "rray_size.interface_blocks.out.named_block_explicit_location.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022416 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.array"
        "_size.interface_blocks.out.named_block_explicit_location.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022417 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.arra"
        "y_size.interface_blocks.out.named_block_explicit_location.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022418 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output."
        "location.interface_blocks.out.named_block_explicit_location.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022477 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.location."
        "interface_blocks.out.named_block_explicit_location.var_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022478 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.loca"
        "tion.interface_blocks.out.named_block_explicit_location.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022479 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.location.inte"
        "rface_blocks.out.named_block_explicit_location.var_struct_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022480 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.loc"
        "ation.interface_blocks.out.named_block_explicit_location.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022481 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.location.int"
        "erface_blocks.out.named_block_explicit_location.var_array_explicit_location",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022482 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.na"
        "me_length.interface_blocks.out.named_block_explicit_location.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022533 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.name_"
        "length.interface_blocks.out.named_block_explicit_location.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022534 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.name_"
        "length.interface_blocks.out.named_block_explicit_location.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022535 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.is"
        "_per_patch.interface_blocks.out.named_block_explicit_location.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022951 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.is_per"
        "_patch.interface_blocks.out.named_block_explicit_location.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022952 end";
}

static HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output.is_pe"
        "r_patch.interface_blocks.out.named_block_explicit_location.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022953 end";
}
