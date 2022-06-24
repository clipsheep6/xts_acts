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

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellatio"
        "n.tesscoord.triangles_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007963 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.tes"
        "scoord.triangles_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007964 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.tes"
        "scoord.triangles_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007965 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellat"
        "ion.tesscoord.quads_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007966 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.t"
        "esscoord.quads_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007967 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.t"
        "esscoord.quads_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007968 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellatio"
        "n.tesscoord.isolines_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007969 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.te"
        "sscoord.isolines_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007970 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.tes"
        "scoord.isolines_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007971 end";
}
