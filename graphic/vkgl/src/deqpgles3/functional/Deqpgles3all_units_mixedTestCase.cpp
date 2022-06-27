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

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027336 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027337 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027338 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027339 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027340 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027341 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027342 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027343 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027344 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.all_units.mixed.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027345 end";
}
