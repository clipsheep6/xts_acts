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

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements"
        "_instanced.triangle_fan.single_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044036 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements_"
        "instanced.triangle_fan.multiple_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044037 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements_i"
        "nstanced.triangle_fan.instanced_attributes",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044038 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.draw.draw_elements"
        "_instanced.triangle_fan.default_attribute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044039 end";
}
