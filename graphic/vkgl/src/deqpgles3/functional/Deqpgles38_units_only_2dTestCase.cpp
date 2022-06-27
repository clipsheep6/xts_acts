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
#include "../ActsDeqpgles30028TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027246 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027247 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027248 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027249 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027250 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027251 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027252 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027253 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027254 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.8_units.only_2d.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027255 end";
}
