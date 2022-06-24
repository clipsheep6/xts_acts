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

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.is_row_major.named_block.no_qualifier.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023725 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.is_row_major.named_block.no_qualifier.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023726 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.is_row_major.named_block.no_qualifier.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023727 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.is_row_major.named_block.no_qualifier.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023728 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.is_row_major.named_block.no_qualifier.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023729 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.is_row_major.named_block.no_qualifier.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023730 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.is_row_major.named_block.no_qualifier.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023731 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.is_row_major.named_block.no_qualifier.var_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023732 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.matrix_stride.named_block.no_qualifier.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023880 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_va"
        "riable.matrix_stride.named_block.no_qualifier.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023881 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.matrix_stride.named_block.no_qualifier.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023882 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.matrix_stride.named_block.no_qualifier.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023883 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.matrix_stride.named_block.no_qualifier.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023884 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.matrix_stride.named_block.no_qualifier.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023885 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.matrix_stride.named_block.no_qualifier.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023886 end";
}

static HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_varia"
        "ble.matrix_stride.named_block.no_qualifier.var_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023887 end";
}
