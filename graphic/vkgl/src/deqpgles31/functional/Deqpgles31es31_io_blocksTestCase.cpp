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
#include "../ActsDeqpgles310018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader."
        "validation.es31.io_blocks.missing_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017865 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader."
        "validation.es31.io_blocks.missing_output",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017866 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validatio"
        "n.es31.io_blocks.mismatch_number_of_declarations",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017867 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.vali"
        "dation.es31.io_blocks.mismatch_member_order",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017868 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.val"
        "idation.es31.io_blocks.mismatch_member_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017869 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.val"
        "idation.es31.io_blocks.mismatch_member_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017870 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.io_blocks.mismatch_member_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017871 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es"
        "31.io_blocks.mismatch_different_member_interpolation",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017872 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.valida"
        "tion.es31.io_blocks.mismatch_member_array_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017873 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.e"
        "s31.io_blocks.mismatch_different_member_struct_names",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017874 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation"
        ".es31.io_blocks.mismatch_member_struct_member_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017875 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation"
        ".es31.io_blocks.mismatch_member_struct_member_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017876 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation.es"
        "31.io_blocks.mismatch_member_struct_member_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017877 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.io_blocks.mismatch_member_struct_member_order",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017878 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.val"
        "idation.es31.io_blocks.mismatch_array_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017879 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.io_blocks.mismatch_variable_and_block_member_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017880 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.separate_shader.validation."
        "es31.io_blocks.mismatch_variable_and_block_member_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017881 end";
}
