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
#include "../ActsDeqpgles30022TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021385 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021386 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021387 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021388 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021389 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021390 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021391 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021392 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021393 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021394, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021394 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders"
        ".random.exponential.fragment.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021394 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021394 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021395, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021395 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021395 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021395 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021396, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021396 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021396 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021396 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021397, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021397 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021397 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021397 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021398, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021398 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021398 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021398 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021399, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021399 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021399 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021399 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021400, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021400 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021400 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021400 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021401, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021401 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021401 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021401 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021402 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021403 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021404 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021405 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021406 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021407 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021408 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021409 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021410 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021411 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021412 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021413 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021414 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021415 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021416 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021417 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021418 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021419 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021420 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021421 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021422 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021423 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021424 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021425 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021426 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021427 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021428 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021429 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021430 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021431 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021432 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021433 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021434 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021435 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021436 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021437 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021438 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021439 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021440 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021441 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021442 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021443 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021444 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021445 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021446 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021447, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021447 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021447 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021447 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021448, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021448 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021448 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021448 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021449, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021449 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021449 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021449 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021450, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021450 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021450 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021450 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021451, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021451 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021451 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021451 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021452, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021452 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021452 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021452 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021453, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021453 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021453 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021453 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021454, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021454 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021454 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021454 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021455, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021455 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021455 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021455 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021456, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021456 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021456 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021456 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021457, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021457 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021457 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021457 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021458, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021458 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021458 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021458 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021459, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021459 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021459 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021459 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021460, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021460 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021460 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021460 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021461, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021461 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021461 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021461 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021462, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021462 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021462 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021462 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021463, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021463 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021463 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021463 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021464, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021464 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021464 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021464 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021465, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021465 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021465 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021465 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021466, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021466 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021466 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021466 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021467, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021467 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021467 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021467 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021468, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021468 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021468 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021468 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021469, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021469 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021469 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021469 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021470, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021470 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021470 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021470 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021471 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021472 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021473 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021474 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021475 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021476 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021477, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021477 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021477 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021477 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021478, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021478 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021478 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021478 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021479, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021479 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021479 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021479 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021480, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021480 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021480 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021480 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021481, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021481 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021481 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021481 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021482, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021482 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021482 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021482 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021483, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021483 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021483 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021483 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021484, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021484 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders."
        "random.exponential.fragment.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021484 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021484 end";
}
