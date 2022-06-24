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
#include "../ActsDeqpgles310025TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.name_length.named_block.unsized.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024039 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.name_length.named_block.unsized.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024040 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_va"
        "riable.name_length.named_block.unsized.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024041 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.named_block.unsized.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024042 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.name_length.named_block.unsized.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024043 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.named_block.unsized.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024044 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.name_length.named_block.unsized.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024045 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query"
        ".buffer_variable.offset.named_block.unsized.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024105 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buf"
        "fer_variable.offset.named_block.unsized.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024106 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.named_block.unsized.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024107 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.named_block.unsized.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024108 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.bu"
        "ffer_variable.offset.named_block.unsized.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024109 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer"
        "_variable.offset.named_block.unsized.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024110 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffe"
        "r_variable.offset.named_block.unsized.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024111 end";
}
