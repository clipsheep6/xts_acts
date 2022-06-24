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

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bo"
        "unding_box.state_query.initial_value",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024965 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_"
        "bounding_box.state_query.getfloat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024966 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_b"
        "ounding_box.state_query.getboolean",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024967 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_b"
        "ounding_box.state_query.getinteger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024968 end";
}

static HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bo"
        "unding_box.state_query.getinteger64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024969 end";
}
