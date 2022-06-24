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
#include "../ActsDeqpgles310012TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_stru"
        "ct_array.per_block_buffer.shared_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011081 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struc"
        "t_array.per_block_buffer.shared_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011082 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_str"
        "uct_array.per_block_buffer.shared_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011083 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_arra"
        "y.per_block_buffer.shared_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011084 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_array"
        ".per_block_buffer.shared_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011085 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_arr"
        "ay.per_block_buffer.shared_instance_array_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011086 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_stru"
        "ct_array.per_block_buffer.packed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011087 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struc"
        "t_array.per_block_buffer.packed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011088 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_arra"
        "y.per_block_buffer.packed_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011089 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_array"
        ".per_block_buffer.packed_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011090 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_stru"
        "ct_array.per_block_buffer.std140_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011091 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struc"
        "t_array.per_block_buffer.std140_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011092 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_str"
        "uct_array.per_block_buffer.std140_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011093 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_arra"
        "y.per_block_buffer.std140_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011094 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_array"
        ".per_block_buffer.std140_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011095 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo.2_level_struct_arr"
        "ay.per_block_buffer.std140_instance_array_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011096 end";
}
