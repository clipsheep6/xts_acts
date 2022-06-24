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
#include "../ActsDeqpgles310018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform."
        "by_pointer.render.multiple_basic.vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017059 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform.b"
        "y_pointer.render.multiple_basic.fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017060 end";
}

static HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.program_uniform"
        ".by_pointer.render.multiple_basic.both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017061 end";
}
