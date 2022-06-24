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
#include "../ActsDeqpgles30034TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_"
        "attribute.normalize.byte.components2_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033027 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_a"
        "ttribute.normalize.byte.components2_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033028 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_"
        "attribute.normalize.byte.components3_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033029 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_a"
        "ttribute.normalize.byte.components3_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033030 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_"
        "attribute.normalize.byte.components4_quads1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033031 end";
}

static HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_033032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.vertex_arrays.single_a"
        "ttribute.normalize.byte.components4_quads256",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30034TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30034TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30034TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30034TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30034TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_033032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_033032 end";
}
