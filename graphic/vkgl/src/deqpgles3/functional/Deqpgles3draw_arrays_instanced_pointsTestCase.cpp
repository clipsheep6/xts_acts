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

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_arra"
        "ys_instanced.points.single_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043993 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_array"
        "s_instanced.points.multiple_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043994 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_arrays"
        "_instanced.points.instanced_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043995 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_arra"
        "ys_instanced.points.default_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043996 end";
}
