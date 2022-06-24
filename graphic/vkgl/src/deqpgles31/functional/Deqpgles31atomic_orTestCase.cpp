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
#include "../ActsDeqpgles310008TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute"
        ".shared_var.atomic.or.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007663 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute"
        ".shared_var.atomic.or.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007664 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute.s"
        "hared_var.atomic.or.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007665 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute."
        "shared_var.atomic.or.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007666 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute."
        "shared_var.atomic.or.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007667 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.compute"
        ".shared_var.atomic.or.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007668 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "ssbo.atomic.or.lowp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010363 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "ssbo.atomic.or.lowp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010364 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.ss"
        "bo.atomic.or.mediump_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010365 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "sbo.atomic.or.mediump_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010366 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.s"
        "sbo.atomic.or.highp_uint",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010367 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_010368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_010368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional."
        "ssbo.atomic.or.highp_int",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_010368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_010368 end";
}
