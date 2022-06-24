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

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027226 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027227 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027228 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027229 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027230 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027231, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027231 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027231 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027231 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027232 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027233 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027234 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.units.4_units.only_3d.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027235 end";
}
