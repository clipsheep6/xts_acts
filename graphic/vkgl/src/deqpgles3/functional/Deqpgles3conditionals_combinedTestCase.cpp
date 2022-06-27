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
#include "../ActsDeqpgles30021TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020994 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020995 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020996 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020997 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020998 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020999 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021000 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021001 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021002 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021003 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021004 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021005 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021006 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021007 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021008 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021009 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021010 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021011 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021012 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021013 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021014 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021015 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021016 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021017 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021018 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021019 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021020 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021021 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021022 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021023 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021024 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021025 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021026 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021027 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021028 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021029 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021030 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021031 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021032 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021033 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021034 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021035 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021036 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021037 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021038 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021039 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021040 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021041 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021042 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021043 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021044 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021045 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021046 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021047 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021048 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021049 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021050 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021051 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021052 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021053 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021054 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021055 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021056 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021057 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021058 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021059 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021060 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021061 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021062 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021063 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021064 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021065 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021066 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021067 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021068 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021069 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021070 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021071 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021072 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021073 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021074 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021075, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021075 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021075 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021075 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021076, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021076 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021076 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021076 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021077, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021077 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021077 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021077 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021078, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021078 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021078 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021078 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021079, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021079 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021079 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021079 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021080, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021080 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021080 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021080 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021081, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021081 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021081 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021081 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021082, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021082 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021082 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021082 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021083 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021084 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021085, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021085 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021085 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021085 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021086, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021086 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021086 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021086 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021087, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021087 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021087 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021087 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021088, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021088 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021088 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021088 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021089, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021089 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021089 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021089 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021090, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021090 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021090 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021090 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021091, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021091 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021091 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021091 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021092, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021092 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021092 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021092 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_021093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.conditionals.combined.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021093 end";
}
