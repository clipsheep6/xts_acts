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
#include "../ActsDeqpgles310026TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bounding_bo"
        "x.depth.builtin_depth.global_state_bbox_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025170 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bounding_box"
        ".depth.builtin_depth.global_state_bbox_larger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025171 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bounding_box"
        ".depth.builtin_depth.per_primitive_bbox_equal",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025172 end";
}

static HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.primitive_bounding_box"
        ".depth.builtin_depth.per_primitive_bbox_larger",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025173 end";
}
