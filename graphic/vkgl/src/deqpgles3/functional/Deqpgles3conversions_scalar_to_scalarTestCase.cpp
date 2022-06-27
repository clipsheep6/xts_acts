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
#include "../ActsDeqpgles30002TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.float_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001595 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversions"
        ".scalar_to_scalar.float_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001596 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.float_to_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001597 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.float_to_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001598 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.float_to_bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001599 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.float_to_bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001600 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.int_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001601 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.int_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001602 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_scalar.int_to_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001603 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.int_to_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001604 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_scalar.int_to_bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001605 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.int_to_bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001606 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.uint_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001607 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.uint_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001608 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_scalar.uint_to_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001609 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.uint_to_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001610 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.uint_to_bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001611 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.uint_to_bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001612 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.bool_to_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001613 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.bool_to_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001614 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_scalar.bool_to_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001615 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.bool_to_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001616 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.bool_to_bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001617 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.bool_to_bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001618 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.float_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001619 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.float_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001620 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversi"
        "ons.scalar_to_scalar.int_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001621 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.int_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001622 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.uint_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001623 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.uint_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001624 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversio"
        "ns.scalar_to_scalar.bool_to_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001625 end";
}

static HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.conversion"
        "s.scalar_to_scalar.bool_to_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30002TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30002TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30002TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30002TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30002TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001626 end";
}
