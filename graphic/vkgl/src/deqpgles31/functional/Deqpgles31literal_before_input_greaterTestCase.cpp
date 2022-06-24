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
#include "../ActsDeqpgles310006TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
        "omparisons.literal_before_input.greater.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005549 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
        "mparisons.literal_before_input.greater.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005550 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
        "omparisons.literal_before_input.greater.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005551 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
        "mparisons.literal_before_input.greater.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005552 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.co"
        "mparisons.literal_before_input.greater.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005553 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.com"
        "parisons.literal_before_input.greater.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005554 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
        "omparisons.literal_before_input.greater.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006583 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
        "mparisons.literal_before_input.greater.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006584 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
        "omparisons.literal_before_input.greater.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006585 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
        "mparisons.literal_before_input.greater.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006586 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.co"
        "mparisons.literal_before_input.greater.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006587 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.com"
        "parisons.literal_before_input.greater.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006588 end";
}
