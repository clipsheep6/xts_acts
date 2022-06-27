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
#include "../ActsDeqpgles310009TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008093, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008093 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invarianc"
        "e.outer_edge_division.triangles_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008093 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008093 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008094, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008094 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.ou"
        "ter_edge_division.triangles_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008094 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008094 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008095, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008095 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.out"
        "er_edge_division.triangles_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008095 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008095 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008096, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008096 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invaria"
        "nce.outer_edge_division.quads_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008096 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008096 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008097, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008097 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance."
        "outer_edge_division.quads_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008097 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008097 end";
}

static HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008098, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008098 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.invariance.o"
        "uter_edge_division.quads_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310009TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310009TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310009TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310009TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310009TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008098 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008098 end";
}
