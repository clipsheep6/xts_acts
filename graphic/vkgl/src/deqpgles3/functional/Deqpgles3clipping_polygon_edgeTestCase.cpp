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
#include "../ActsDeqpgles30044TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043376, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043376 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_at_origin_0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043376 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043376 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043377, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043377 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_at_origin_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043377 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043377 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043378, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043378 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_at_origin_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043378 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043378 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043379, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043379 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_at_origin_3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043379 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043379 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043380, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043380 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_at_origin_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043380 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043380 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043381, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043381 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_near_edge_0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043381 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043381 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_near_edge_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043382 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping"
        ".polygon_edge.quad_near_edge_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043383 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clip"
        "ping.polygon_edge.poly_fan",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043384 end";
}
