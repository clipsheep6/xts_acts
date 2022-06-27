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
#include "../ActsDeqpgles310017TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016146, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016146 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.framebuffer_default"
        ".framebuffer_default_width_get_framebuffer_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016146 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016146 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016147, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016147 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.framebuffer_default"
        ".framebuffer_default_height_get_framebuffer_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016147 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016147 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016148, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016148 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.framebuffer_default."
        "framebuffer_default_samples_get_framebuffer_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016148 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016148 end";
}

static HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016149, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016149 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.state_query.framebuffer_default.framebu"
        "ffer_default_fixed_sample_locations_get_framebuffer_parameteriv",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016149 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016149 end";
}
