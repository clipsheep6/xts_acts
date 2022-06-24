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

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005471, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005471 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "comparisons.input_before_literal.less.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005471 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005471 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005472, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005472 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
        "omparisons.input_before_literal.less.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005472 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005472 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005473, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005473 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31"
        ".comparisons.input_before_literal.less.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005473 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005473 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005474, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005474 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "comparisons.input_before_literal.less.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005474 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005474 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005475, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005475 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31."
        "comparisons.input_before_literal.less.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005475 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005475 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005476, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005476 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es31.c"
        "omparisons.input_before_literal.less.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005476 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005476 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "comparisons.input_before_literal.less.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006505 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
        "omparisons.input_before_literal.less.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006506 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32"
        ".comparisons.input_before_literal.less.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006507 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "comparisons.input_before_literal.less.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006508 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32."
        "comparisons.input_before_literal.less.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006509 end";
}

static HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_006510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_006510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.implicit_conversions.es32.c"
        "omparisons.input_before_literal.less.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_006510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_006510 end";
}
