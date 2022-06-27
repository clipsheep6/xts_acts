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

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.lifetime.attac"
        "h.deleted_output.texture_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044385 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.lifetime.attach."
        "deleted_output.renderbuffer_framebuffer",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044386 end";
}

static HWTEST_F(ActsDeqpgles30045TestSuite, TestCase_044387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_044387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.lifetime.attach.d"
        "eleted_output.buffer_transform_feedback",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30045TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30045TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30045TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30045TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30045TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_044387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_044387 end";
}
