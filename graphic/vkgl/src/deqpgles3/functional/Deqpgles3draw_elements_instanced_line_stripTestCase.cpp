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
#include "../ActsDeqpgles30045TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_element"
        "s_instanced.line_strip.single_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044048 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements"
        "_instanced.line_strip.multiple_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044049 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements_"
        "instanced.line_strip.instanced_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044050 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_element"
        "s_instanced.line_strip.default_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044051 end";
}
