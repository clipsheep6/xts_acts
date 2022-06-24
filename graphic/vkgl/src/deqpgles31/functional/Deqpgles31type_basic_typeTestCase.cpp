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

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.float",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024540 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024541 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024542 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.bool",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024543 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.vec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024544 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.vec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024545 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.vec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024546 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.ivec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024547 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.ivec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024548 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.ivec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024549 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.uvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024550 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.uvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024551 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.uvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024552 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.bvec2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024553 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.bvec3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024554 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.bvec4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024555 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.mat2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024556 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat2x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024557 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat2x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024558 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat3x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024559 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.mat3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024560 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat3x4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024561 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat4x2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024562 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_q"
        "uery.buffer_variable.type.basic_type.mat4x3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024563 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_interface_"
        "query.buffer_variable.type.basic_type.mat4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024564 end";
}
