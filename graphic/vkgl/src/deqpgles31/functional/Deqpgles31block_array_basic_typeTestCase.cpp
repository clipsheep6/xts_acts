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
#include "../ActsDeqpgles310021TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.u"
        "niform.array_stride.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020373 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.array_stride.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020374 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.array_stride.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020375 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.array_stride.block_array.basic_type.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020376 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.array_stride.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020377 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query."
        "uniform.array_stride.block_array.basic_type.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020378 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_quer"
        "y.uniform.offset.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020944 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.offset.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020945 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.offset.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020946 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.offset.block_array.basic_type.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020947 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.offset.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020948 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.offset.block_array.basic_type.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020949 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_que"
        "ry.uniform.type.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021552 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_qu"
        "ery.uniform.type.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021553 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_qu"
        "ery.uniform.type.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021554 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_qu"
        "ery.uniform.type.block_array.basic_type.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021555 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_qu"
        "ery.uniform.type.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021556 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_qu"
        "ery.uniform.type.block_array.basic_type.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021557 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_in"
        "put.type.interface_blocks.in.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022208 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_i"
        "nput.type.interface_blocks.in.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022209 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_i"
        "nput.type.interface_blocks.in.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022210 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_i"
        "nput.type.interface_blocks.in.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022211 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_in"
        "put.type.interface_blocks.in.block_array.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022212 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_in"
        "put.type.interface_blocks.in.block_array.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022213 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_in"
        "put.type.interface_blocks.in.block_array.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022214 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022292, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022292 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_input"
        ".type.interface_blocks.patch_in.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022292 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022292 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022293, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022293 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_inpu"
        "t.type.interface_blocks.patch_in.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022293 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022293 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022294, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022294 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_inpu"
        "t.type.interface_blocks.patch_in.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022294 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022294 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022295, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022295 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_inpu"
        "t.type.interface_blocks.patch_in.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022295 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022295 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022296, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022296 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_input"
        ".type.interface_blocks.patch_in.block_array.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022296 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022296 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022297, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022297 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_input"
        ".type.interface_blocks.patch_in.block_array.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022297 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022297 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022298, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022298 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_input"
        ".type.interface_blocks.patch_in.block_array.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022298 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022298 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_out"
        "put.type.interface_blocks.out.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022850 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_ou"
        "tput.type.interface_blocks.out.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022851 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022852, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022852 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_ou"
        "tput.type.interface_blocks.out.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022852 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022852 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022853, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022853 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_ou"
        "tput.type.interface_blocks.out.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022853 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022853 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_out"
        "put.type.interface_blocks.out.block_array.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022854 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_out"
        "put.type.interface_blocks.out.block_array.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022855 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_out"
        "put.type.interface_blocks.out.block_array.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022856 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output"
        ".type.interface_blocks.patch_out.block_array.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022916 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_outpu"
        "t.type.interface_blocks.patch_out.block_array.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022917 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_outpu"
        "t.type.interface_blocks.patch_out.block_array.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022918 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_outpu"
        "t.type.interface_blocks.patch_out.block_array.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022919 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output"
        ".type.interface_blocks.patch_out.block_array.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022920 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output"
        ".type.interface_blocks.patch_out.block_array.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022921 end";
}

static HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_022922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_query.program_output"
        ".type.interface_blocks.patch_out.block_array.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022922 end";
}
