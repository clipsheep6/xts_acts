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
#include "../ActsDeqpgles310005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.shad"
        "er_storage_block.mismatch_number_of_declarations",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004650 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage."
        "es31.shader_storage_block.mismatch_order",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004651 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage."
        "es31.shader_storage_block.mismatch_type",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004652 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es3"
        "1.shader_storage_block.mismatch_member_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004653 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.shader"
        "_storage_block.mismatch_member_unsized_sized_array",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004654 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.s"
        "hader_storage_block.mismatch_member_array_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004655 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.shader_s"
        "torage_block.mismatch_with_and_without_instance_name",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004656 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.s"
        "hader_storage_block.mismatch_block_array_size",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004657 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.s"
        "hader_storage_block.ambiguous_variable_name_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004658 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.s"
        "hader_storage_block.ambiguous_variable_name_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004659 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.linkage.es31.s"
        "hader_storage_block.ambiguous_variable_name_3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004660 end";
}
