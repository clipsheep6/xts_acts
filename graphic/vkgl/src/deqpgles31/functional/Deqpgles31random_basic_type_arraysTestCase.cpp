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

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011105, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011105 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011105 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011105 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011106, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011106 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011106 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011106 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011107, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011107 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011107 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011107 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011108, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011108 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011108 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011108 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011109, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011109 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011109 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011109 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011110 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011111 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011112 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011113 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011114, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011114 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo"
        ".random.basic_type_arrays.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011114 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011114 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011115, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011115 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011115 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011115 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011116, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011116 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011116 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011116 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011117, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011117 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011117 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011117 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011118, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011118 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011118 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011118 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011119, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011119 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011119 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011119 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011120, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011120 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011120 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011120 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011121, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011121 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011121 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011121 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011122, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011122 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011122 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011122 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011123, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011123 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011123 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011123 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011124, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011124 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011124 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011124 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011125, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011125 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011125 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011125 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011126, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011126 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011126 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011126 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011127, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011127 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011127 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011127 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011128, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011128 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011128 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011128 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011129, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011129 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ubo."
        "random.basic_type_arrays.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011129 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011129 end";
}
