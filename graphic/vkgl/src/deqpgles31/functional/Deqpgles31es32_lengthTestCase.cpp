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
#include "../ActsDeqpgles310005TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004382, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004382 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.array"
        "s_of_arrays.es32.length.float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004382 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004382 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004383, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004383 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays"
        "_of_arrays.es32.length.float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004383 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004383 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004384, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004384 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arra"
        "ys_of_arrays.es32.length.int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004384 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004384 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004385, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004385 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.array"
        "s_of_arrays.es32.length.int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004385 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004385 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004386, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004386 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arra"
        "ys_of_arrays.es32.length.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004386 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004386 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004387, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004387 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.array"
        "s_of_arrays.es32.length.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004387 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004387 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004388, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004388 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.array"
        "s_of_arrays.es32.length.struct_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004388 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004388 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004389, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004389 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays"
        "_of_arrays.es32.length.struct_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004389 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004389 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004390, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004390 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arra"
        "ys_of_arrays.es32.length.mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004390 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004390 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004391, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004391 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.array"
        "s_of_arrays.es32.length.mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004391 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004391 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004392, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004392 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_ar"
        "rays.es32.length.constant_expression_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004392 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004392 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004393, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004393 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.length.constant_expression_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004393 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004393 end";
}
