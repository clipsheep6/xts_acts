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

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buff"
        "er_variable.top_level_array_stride.unnamed_block.var",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024496 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_v"
        "ariable.top_level_array_stride.unnamed_block.var_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024497 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.top_level_array_stride.unnamed_block.var_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024498 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable"
        ".top_level_array_stride.unnamed_block.var_struct_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024499 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_array_struct_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024500 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.top_level_array_stride.unnamed_block.var_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024501 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_struct_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024502 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_array_array_struct",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024503 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_"
        "variable.top_level_array_stride.unnamed_block.var_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024504 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.top_level_array_stride.unnamed_block.var_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024505 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_struct_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024506 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_array_struct_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024507 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_var"
        "iable.top_level_array_stride.unnamed_block.var_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024508 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_struct_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024509 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variab"
        "le.top_level_array_stride.unnamed_block.var_array_array_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024510 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_vari"
        "able.top_level_array_stride.unnamed_block.var_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024511 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable"
        ".top_level_array_stride.unnamed_block.var_struct_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024512 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
        "p_level_array_stride.unnamed_block.var_struct_struct_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024513 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
        "p_level_array_stride.unnamed_block.var_array_struct_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024514 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
        "e.top_level_array_stride.unnamed_block.var_array_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024515 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.to"
        "p_level_array_stride.unnamed_block.var_struct_array_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024516 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.buffer_variable.t"
        "op_level_array_stride.unnamed_block.var_array_array_unsized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024517 end";
}
