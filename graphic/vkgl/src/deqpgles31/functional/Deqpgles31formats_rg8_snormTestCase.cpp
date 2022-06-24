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
#include "../ActsDeqpgles310015TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_c"
        "lamp.formats.rg8_snorm.nearest_size_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014271 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_c"
        "lamp.formats.rg8_snorm.nearest_size_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014272 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_"
        "clamp.formats.rg8_snorm.linear_size_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014273 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014274, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014274 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_c"
        "lamp.formats.rg8_snorm.linear_size_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014274 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014274 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014275, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014275 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_"
        "clamp.formats.rg8_snorm.gather_size_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014275 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014275 end";
}

static HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014276, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_014276 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.border_c"
        "lamp.formats.rg8_snorm.gather_size_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310015TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310015TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310015TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310015TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310015TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_014276 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_014276 end";
}
