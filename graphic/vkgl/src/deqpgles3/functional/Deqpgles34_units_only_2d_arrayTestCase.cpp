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
#include "../ActsDeqpgles30028TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027216 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027217 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027218 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027219 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027220 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027221 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027222 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027223 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027224 end";
}

static HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_027225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".units.4_units.only_2d_array.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30028TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30028TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30028TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30028TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30028TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_027225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_027225 end";
}
