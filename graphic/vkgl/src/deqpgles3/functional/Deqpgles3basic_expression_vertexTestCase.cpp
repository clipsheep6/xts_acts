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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30020TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019994 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019995 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019996 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019997 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019998 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_019999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_019999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_019999 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020000 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020001 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020002 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020003 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020004 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020005 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020006 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020007 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020008 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020009 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020010 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020011 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020012 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020013 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020014 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020015 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020016 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020017 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020018 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020019 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020020 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020021 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020022 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020023 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020024 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020025 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020026 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020027 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020028 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020029 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020030 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020031 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020032 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020033 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020034 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020035 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020036 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020037 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020038 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020039 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020040 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020041 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020042 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020043 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020044 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020045 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020046 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020047 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020048 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020049 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020050 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020051 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020052 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020053 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020054 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020055 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020056 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020057 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020058 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020059 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020060 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020061 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020062 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020063 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020064 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020065 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020066 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020067 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020068 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020069 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020070 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020071 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020072 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020073 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020074 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020075 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020076 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020077 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020078 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020079 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020080 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020081 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020082 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020083 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020084 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020085 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020086 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020087 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020088 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020089 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020090 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020091 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020092 end";
}

static HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_020093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.r"
        "andom.basic_expression.vertex.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30020TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30020TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30020TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30020TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30020TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020093 end";
}
