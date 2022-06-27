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

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004110, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004110 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
        "_multiple_declarations.implicit_constructor.float_2_dimensions_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004110 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004110 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004111, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004111 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement_"
        "multiple_declarations.implicit_constructor.float_2_dimensions_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004111 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004111 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004112, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004112 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statemen"
        "t_multiple_declarations.implicit_constructor.int_3_dimensions_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004112 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004112 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004113, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004113 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.single_statement"
        "_multiple_declarations.implicit_constructor.int_3_dimensions_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004113 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004113 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004402, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004402 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
        "_multiple_declarations.implicit_constructor.float_2_dimensions_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004402 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004402 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004403, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004403 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement_"
        "multiple_declarations.implicit_constructor.float_2_dimensions_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004403 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004403 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004404, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004404 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statemen"
        "t_multiple_declarations.implicit_constructor.int_3_dimensions_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004404 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004404 end";
}

static HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.single_statement"
        "_multiple_declarations.implicit_constructor.int_3_dimensions_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004405 end";
}
