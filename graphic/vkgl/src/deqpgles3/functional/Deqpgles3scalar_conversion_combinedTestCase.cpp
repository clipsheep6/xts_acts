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
#include "../ActsDeqpgles30021TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020494 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020495 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020496 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020497 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020498 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020499 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020500 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020501 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020502 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ra"
        "ndom.scalar_conversion.combined.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020503 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020504 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020505 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020506 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020507 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020508 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020509 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020510 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020511 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020512 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020513 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020514 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020515 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020516 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020517 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020518 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020519 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020520 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020521 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020522 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020523 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020524 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020525 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020526 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020527 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020528 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020529 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020530 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020531 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020532 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020533 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020534 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020535 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020536 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020537 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020538 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020539 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020540 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020541 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020542 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020543 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.50",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020544 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.51",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020545 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.52",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020546 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.53",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020547 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.54",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020548 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.55",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020549 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.56",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020550 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.57",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020551 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.58",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020552 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.59",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020553 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.60",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020554 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.61",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020555 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.62",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020556 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.63",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020557 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.64",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020558 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.65",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020559 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.66",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020560 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.67",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020561 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.68",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020562 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.69",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020563 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.70",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020564 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.71",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020565 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.72",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020566 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.73",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020567 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.74",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020568 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.75",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020569 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.76",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020570 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.77",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020571 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.78",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020572 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.79",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020573 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.80",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020574 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.81",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020575 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.82",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020576 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.83",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020577 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.84",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020578 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.85",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020579 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.86",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020580 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.87",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020581 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.88",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020582 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.89",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020583 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.90",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020584 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.91",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020585 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.92",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020586 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.93",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020587 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.94",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020588 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.95",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020589 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.96",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020590 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.97",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020591 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.98",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020592 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.ran"
        "dom.scalar_conversion.combined.99",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020593 end";
}
