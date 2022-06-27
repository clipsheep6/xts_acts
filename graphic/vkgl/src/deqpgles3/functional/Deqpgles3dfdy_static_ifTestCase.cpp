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
#include "../ActsDeqpgles30018TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.der"
        "ivate.dfdy.static_if.float_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017604 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.de"
        "rivate.dfdy.static_if.float_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017605 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.der"
        "ivate.dfdy.static_if.vec2_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017606 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.de"
        "rivate.dfdy.static_if.vec2_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017607 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.der"
        "ivate.dfdy.static_if.vec3_mediump",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017608 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.de"
        "rivate.dfdy.static_if.vec3_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017609 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.de"
        "rivate.dfdy.static_if.vec4_highp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017610 end";
}
