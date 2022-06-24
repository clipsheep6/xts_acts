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
#include "../ActsDeqpgles30035TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034489 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034490 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034491 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034492 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034493 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034494 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034495 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034496 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_float_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034497 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034498 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034499 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034500 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034501 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034502 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034503 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034504 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034505 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_vec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034506 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034507 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034508 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034509 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034510 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034511 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034512 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034513 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034514 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_vec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034515 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034516 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034517 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034518 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034519 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034520 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034521 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034522 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034523 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_vec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034524 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034525 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034526 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034527 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034528 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034529 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.mediump_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034530 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034531 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034532 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.highp_int_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034533 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034534 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034535 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034536 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034537 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034538 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034539 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034540 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034541 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_ivec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034542 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034543 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034544 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034545 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034546 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034547 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034548 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034549 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034550 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_ivec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034551 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034552 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034553 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034554 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034555 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034556 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034557 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034558 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034559 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_ivec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034560 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034561 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034562 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034563 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034564 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034565 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034566 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034567 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034568 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_uint_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034569 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034570 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034571 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034572 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034573 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034574 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034575 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034576 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034577 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_uvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034578 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034579, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034579 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034579 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034579 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034580, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034580 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034580 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034580 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034581, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034581 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034581 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034581 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034582, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034582 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034582 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034582 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034583, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034583 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034583 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034583 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034584, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034584 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034584 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034584 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034585, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034585 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_uvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034585 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034585 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034586, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034586 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_uvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034586 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034586 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034587, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034587 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_uvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034587 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034587 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034588, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034588 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034588 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034588 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034589, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034589 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034589 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034589 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034590, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034590 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034590 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034590 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034591, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034591 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034591 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034591 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034592, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034592 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034592 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034592 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034593, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034593 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034593 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034593 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_uvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034594 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_uvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034595 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_uvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034596 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.std140.bool_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034597 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.bool_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034598 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_type.std140.bool_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034599 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.std140.bvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034600 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.bvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034601 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_type.std140.bvec2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034602 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.std140.bvec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034603 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.bvec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034604 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_type.std140.bvec3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034605 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.singl"
        "e_basic_type.std140.bvec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034606 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.bvec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034607 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.sing"
        "le_basic_type.std140.bvec4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034608 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034609 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034610 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034611 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034612 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034613 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034614 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034615 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034616 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034617 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034618 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034619 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.row_major_lowp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034620 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034621 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034622 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_mediump_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034623 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034624 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034625 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_highp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034626 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034627 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034628 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_lowp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034629 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034630 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034631 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_mediump_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034632 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034633 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034634 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_highp_mat2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034635 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034636 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034637 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034638 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034639 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034640 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034641 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034642 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034643 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034644 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034645 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034646 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.row_major_lowp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034647 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034648 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034649 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_mediump_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034650 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034651 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034652 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_highp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034653 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034654 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034655 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_lowp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034656 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034657 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034658 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_mediump_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034659 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034660 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034661 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_highp_mat3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034662 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034663 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034664 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single"
        "_basic_type.std140.lowp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034665 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034666 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034667 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.mediump_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034668 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034669 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034670 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.highp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034671 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034672 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034673 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.row_major_lowp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034674 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034675 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034676 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_mediump_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034677 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034678 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034679 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_highp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034680 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034681 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034682 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_lowp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034683 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034684 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034685 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_mediump_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034686 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034687 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034688 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.column_major_highp_mat4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034689 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034690 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034691 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034692 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034693 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034694, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034694 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034694 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034694 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034695, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034695 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034695 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034695 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034696, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034696 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034696 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034696 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034697, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034697 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034697 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034697 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034698, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034698 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034698 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034698 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034699, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034699 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034699 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034699 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034700, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034700 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034700 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034700 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034701, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034701 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034701 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034701 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034702, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034702 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034702 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034702 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034703, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034703 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034703 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034703 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034704, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034704 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034704 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034704 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034705, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034705 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034705 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034705 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034706, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034706 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034706 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034706 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034707, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034707 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034707 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034707 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034708, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034708 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034708 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034708 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034709, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034709 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034709 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034709 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034710, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034710 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034710 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034710 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034711, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034711 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034711 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034711 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034712, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034712 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034712 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034712 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034713, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034713 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034713 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034713 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034714, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034714 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034714 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034714 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034715, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034715 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034715 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034715 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034716, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034716 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat2x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034716 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034716 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034717, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034717 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034717 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034717 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034718, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034718 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034718 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034718 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034719, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034719 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034719 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034719 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034720, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034720 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034720 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034720 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034721, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034721 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034721 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034721 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034722, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034722 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034722 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034722 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034723, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034723 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034723 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034723 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034724, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034724 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034724 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034724 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034725, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034725 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034725 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034725 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034726, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034726 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034726 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034726 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034727, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034727 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034727 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034727 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034728, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034728 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034728 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034728 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034729, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034729 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034729 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034729 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034730, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034730 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034730 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034730 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034731, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034731 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034731 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034731 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034732, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034732 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034732 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034732 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034733, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034733 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034733 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034733 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034734, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034734 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034734 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034734 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034735, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034735 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034735 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034735 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034736, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034736 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034736 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034736 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034737, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034737 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034737 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034737 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034738, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034738 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034738 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034738 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034739, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034739 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034739 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034739 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034740, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034740 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034740 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034740 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034741, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034741 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat2x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034741 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034741 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034742, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034742 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat2x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034742 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034742 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034743, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034743 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat2x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034743 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034743 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034744, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034744 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034744 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034744 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034745, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034745 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034745 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034745 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034746, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034746 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034746 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034746 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034747, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034747 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034747 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034747 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034748, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034748 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034748 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034748 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034749, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034749 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034749 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034749 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034750, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034750 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034750 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034750 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034751, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034751 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034751 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034751 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034752, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034752 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034752 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034752 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034753, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034753 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034753 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034753 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034754, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034754 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034754 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034754 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034755, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034755 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034755 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034755 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034756, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034756 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034756 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034756 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034757 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034758 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034759, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034759 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034759 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034759 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034760, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034760 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034760 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034760 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034761, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034761 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034761 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034761 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034762, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034762 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034762 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034762 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034763, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034763 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034763 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034763 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034764, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034764 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034764 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034764 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034765, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034765 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034765 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034765 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034766, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034766 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034766 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034766 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034767, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034767 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034767 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034767 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034768, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034768 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034768 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034768 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034769, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034769 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034769 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034769 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034770, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034770 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat3x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034770 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034770 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034771, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034771 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034771 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034771 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034772, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034772 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034772 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034772 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034773, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034773 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034773 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034773 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034774, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034774 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034774 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034774 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034775, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034775 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034775 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034775 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034776, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034776 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034776 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034776 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034777, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034777 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034777 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034777 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034778, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034778 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034778 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034778 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034779, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034779 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034779 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034779 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034780, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034780 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034780 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034780 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034781, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034781 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034781 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034781 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034782, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034782 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034782 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034782 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034783, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034783 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034783 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034783 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034784, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034784 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034784 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034784 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034785, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034785 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034785 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034785 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034786, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034786 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034786 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034786 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034787, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034787 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034787 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034787 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034788, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034788 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034788 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034788 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034789, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034789 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034789 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034789 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034790, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034790 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034790 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034790 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034791, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034791 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034791 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034791 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034792, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034792 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034792 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034792 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034793, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034793 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034793 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034793 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034794, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034794 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034794 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034794 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034795, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034795 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034795 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034795 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034796, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034796 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034796 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034796 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034797, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034797 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat3x4_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034797 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034797 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034798, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034798 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034798 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034798 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034799, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034799 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034799 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034799 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034800, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034800 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034800 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034800 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034801, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034801 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034801 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034801 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034802, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034802 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034802 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034802 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034803, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034803 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034803 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034803 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034804, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034804 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034804 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034804 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034805, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034805 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034805 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034805 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034806, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034806 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034806 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034806 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034807, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034807 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034807 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034807 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034808, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034808 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034808 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034808 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034809, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034809 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034809 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034809 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034810, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034810 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034810 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034810 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034811 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034812 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034813 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034814 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034815 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034816 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034817 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034818 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034819 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034820 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034821 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat4x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034822 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat4x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034823 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat4x2_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034824 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034825 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034826 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_"
        "basic_type.std140.lowp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034827 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034828 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basi"
        "c_type.std140.mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034829 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.mediump_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034830 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_ba"
        "sic_type.std140.highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034831 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_bas"
        "ic_type.std140.highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034832 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_b"
        "asic_type.std140.highp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034833 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034834 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034835 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic"
        "_type.std140.row_major_lowp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034836 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034837 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.row_major_mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034838 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_mediump_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034839 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.row_major_highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034840 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.row_major_highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034841 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_"
        "type.std140.row_major_highp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034842 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_lowp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034843 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_lowp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034844 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_lowp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034845 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_mediump_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034846 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_type"
        ".std140.column_major_mediump_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034847 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_mediump_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034848 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_ty"
        "pe.std140.column_major_highp_mat4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034849 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_typ"
        "e.std140.column_major_highp_mat4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034850 end";
}

static HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_034851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.single_basic_t"
        "ype.std140.column_major_highp_mat4x3_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30035TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30035TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30035TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30035TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30035TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_034851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_034851 end";
}
