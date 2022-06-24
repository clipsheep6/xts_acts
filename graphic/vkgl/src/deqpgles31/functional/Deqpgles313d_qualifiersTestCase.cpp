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

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load"
        "_store.3d.qualifiers.coherent_r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011601 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load"
        "_store.3d.qualifiers.volatile_r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011602 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_"
        "store.3d.qualifiers.coherent_r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011603 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load_"
        "store.3d.qualifiers.volatile_r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011604 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load"
        "_store.3d.qualifiers.coherent_r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011605 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_load"
        "_store.3d.qualifiers.volatile_r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011606 end";
}

static HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_011607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.image_lo"
        "ad_store.3d.qualifiers.restrict",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310012TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310012TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310012TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310012TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310012TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_011607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_011607 end";
}
